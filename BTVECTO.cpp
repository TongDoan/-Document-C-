//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class SV
{
	private:
		int MSV_;
		string name_;
		int day_;
		int month_;
		int years_;
		bool sex_;
		string address_;
		float Diem_;
	public:
		SV(){	;	};
		SV( unsigned int MSV, string name, unsigned int day, unsigned int month, unsigned int years, bool sex, string address, float Diem );
		~SV(){	;	};
		unsigned int get_MSV() const {return MSV_;}
    	string get_name() const { return name_;}
    	unsigned int get_day() const {return day_;}
    	unsigned int get_month() const {return month_;}
    	unsigned int get_years() const {return years_;}
    	bool get_sex() const { return sex_;}
    	float get_diem() const { return Diem_;}
 		string get_address() const { return address_;}
 		void Input(){
	        cout<<"\nMSV: ";
	        cin>>MSV_;
	        cout<<"\nTen Sv:";
	        cin.ignore(1);
	        getline(cin,name_);
	        cout<<"\nNgay thang nam sinh: ";
	        cin>>day_>>month_>>years_;
	        cout<<"\nGioi Tinh (Nhap so 1: Nam va 0: Nu): ";
	        cin>>sex_;
	        cout<<"\nDia Diem: ";
	        cin.ignore(1);
	        getline(cin,address_);
	        cout<<"Diem TB: ";
	        cin>>Diem_;
        
		}
   		 void ShowInfo()
   		{
   			cout<<setw(5)<<MSV_<<setw(20)<<name_.c_str()<<setw(15)<<day_<<"/"<<month_<<"/"<<years_<<setw(20)<<((sex_ == 1) ? "Male" : "Female")<<setw(15)<<address_.c_str()<<setw(15)<<Diem_<<endl;
   		}
};
SV::SV(unsigned int MSV, string name, unsigned int day, unsigned int month, unsigned int years, bool sex, string address , float Diem){
	MSV_=MSV;
	name_=name;
	day_=day;
	month_=month;
	years_=years;
	sex_=sex;
	address_=address;
	Diem_= Diem;
}


class Vector
{
	private:
		int cap,num;
		SV *buff;
	public:
		Vector() {cap=num=0;buff=0;}
		Vector(int k,SV x) {cap=num=k; buff=new SV[k]; for(int i=0;i<k;i++) buff[i]=x;}
		~Vector() {if(buff) delete[]buff;}
		int capacity() {return cap;}
		int size() {return num;}
		bool empty() {return num==0;}
		void pop_back() {if(num>0) num--;}
		void extend(int newcap)
		{
			if(newcap<cap) return;
			cap=newcap;
			SV *temp=new SV[cap];
			for(int i=0;i<num;i++) temp[i]=buff[i];
			if(buff) delete []buff;
			buff= temp;			
		}
		
		void push_back(SV x)
		{
			if(num==cap) extend(cap*2+5);
			buff[num++]=x;
		}
		
		void insert(int k,SV x)
		{
			if(cap==num) extend(cap*2+5);
			for(int i=num-1;i>=k;i--) buff[i+1]=buff[i];
			buff[k]=x;
			num++;
		}
		
		void erase(int k){
			for(int i=k; i<num;i++){
				buff[i]=buff[i+1];
			}
			num--;
		}
		
		void replace(int k, SV x){
			for(int i=0;i<num;i++){
				if(i==k){
					buff[i]=x;
				}
			}
		}
		
		void Max(){
			for(int i=0;i<num;i++){
				for(int j = i+1; j<num;j++){
					if(buff[i].get_diem() < buff[j].get_diem()){
						SV t = buff[i];
						buff[i]= buff[j];
						buff[j]=t;
					}
				}
			}
			int n;
			cout<<"\nNhap so sinh vien de xuat: ";
			cin>>n;
			for(int i=0;i<n;i++){
				buff[i].ShowInfo();
			}
		}
		void xuatds(){
			for(int i=0; i<num ;i++){
				buff[i].ShowInfo();
			}
		}
};
int main(){
	Vector data;
	int n;
	cout<<"\Nhap so sinh vien: ";
	cin>>n;
	for(int i=0;i<n;i++){
		SV a;
		a.Input();
		data.push_back(a);
	}
	data.xuatds();
	
	//Them 1 sinh vien vao vi tri thu i
	int vt1;
	cout<<"\nNhap vi tri can them sinh vien: ";
	cin>>vt1;
	SV t;
	t.Input();
	data.insert(vt1-1,t);
	data.xuatds();
	//Xoa vi tri thu i
	int vt2;
	cout<<"\nNhap vi tri can xoa: ";
	cin>>vt2;
	data.erase(vt2-1);
	data.xuatds();
	//Thay the 1 sinh vien thu i
	int vt3;
	cout<<"\nNhap sinh vien can thay the: ";
	cin>>vt3;
	SV y;
	y.Input();
	data.replace(vt3-1,y);
	data.xuatds();
	//In n sinh vien diem cao
	cout<<"\nSinh vien diem cao: ";
	data.Max();

}

