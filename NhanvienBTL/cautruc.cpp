//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class nhanvien
{
		int MCB_;
		string name_;
		string phongban_;
		string chucvu_;
		int hsl_;
	public:
		nhanvien(){	;	};
		nhanvien( int MCB, string name, string phongban, string chucvu, float hsl);
		~nhanvien(){	;	};
		 int get_MCB() const {return MCB_;}
    	string get_name() const { return name_;}
    	string get_phongban() const { return phongban_;}
    	string get_chucvu() const { return chucvu_;}
    	double get_hsl() { return hsl_;}
   		void ShowInfo()
   		{
   			cout<<setw(5)<<MCB_<<setw(20)<<name_.c_str()<<setw(15)<<phongban_.c_str()<<setw(20)<<chucvu_.c_str()<<setw(15)<<hsl_<<setw(15)<<endl;
   		}
   		void Input(){

			cout<<"\nNhap ma can bo: ";
   			cin>>MCB_;
   			cin.ignore();
			cout<<"\nHo va ten dem can bo: ";
			getline(cin,this->name_);
			cout<<"\nPhong ban: ";
			getline(cin,this->phongban_);
			cout<<"\nChuc vu: ";
			getline(cin,this->chucvu_);
			cout<<"\nHe so luong: ";
			cin>>hsl_;
			
		   }
		   void tinhluong(){
		   		cout<<setw(5)<<MCB_<<setw(20)<<name_.c_str()<<setw(15)<<phongban_.c_str()<<setw(20)<<chucvu_.c_str()<<setw(15)<<hsl_<<setw(15)<<(hsl_)*1350000<<endl;	
		   }
		   void shownv(){
		   		if(hsl_ > 4.4){
		   			ShowInfo();
			   }
		   }
		   void intheochuc(char c[]){
		   		if(chucvu_ == c){
		   			ShowInfo();
				   }
		   }
			void timtheochuc(char c[]){
				if(chucvu_ == c){
		   			ShowInfo();
				   }
				   else{
				   	cout<<"\nKhong co nhan vien thuoc chuc vu: "<<c;
				   }
			}
			void timnhanvien(char a[], int s){
				if(hsl_ == s && phongban_ == a){
					ShowInfo();
				}else{
					cout<<"\nKhong co nhan vien thoa man he so luong "<<s<<" va phong ban "<<s;
				}
			}
};

nhanvien::nhanvien(int MCB, string name, string phongban, string chucvu, float hsl){
	MCB_=MCB;
	name_=name;
	phongban_=phongban;
	chucvu_=chucvu;
	hsl_=hsl;
}




