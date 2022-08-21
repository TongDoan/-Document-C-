//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class thisinh{
	string hoten;
	float diem;
	public:
		string layten(){
			return hoten;
		}
		float laydiem(){
			return diem;
		}
		void nhap();
		void xuat();
};
class olympic: public thisinh{
	string truong;
	public:
		string laytruong(){
			return truong;
		}
		void nhap();
		void xuat();
};

void thisinh::nhap(){
	cout<<"\nNhap ho ten: ";
	cin.ignore(1);
	getline(cin,this->hoten);
	cout<<"\nNhap diem: ";
	cin>>diem;
}
void olympic::nhap(){
	thisinh::nhap();
	cout<<"\nNhap ten truong (A/B/C): ";
	cin.ignore(1);
	getline(cin,this->truong);
}
void thisinh::xuat(){
	cout<<hoten<<"\t"<<diem;
}
void olympic::xuat(){
	thisinh::xuat();
	cout<<"\t"<<truong;
}

int main()
{
	olympic *a;
	int n;
	cout<<"\nNhap n thi sinh: ";
	cin>>n;
	a = new olympic[n];
	for(int i =0;i<n;i++){
		a[i].nhap();
	}
	float b=0,c=0,d=0;
	int u=0,v=0,m=0;
	for(int i =0;i<n;i++){
		if(a[i].laytruong()=="A"){
			b+=a[i].laydiem();
			u++;
		}
		if(a[i].laytruong()=="B"){
			c+=a[i].laydiem();
			v++;
		}
		if(a[i].laytruong()=="C"){
			d+=a[i].laydiem();
			m++;
		}
	}
	cout<<"\nTruong A co tong diem la: "<<b;
	cout<<"\nTruong B co tong diem la: "<<c;
	cout<<"\nTruong C co tong diem la: "<<d;
	cout<<"\nTruong co tong diem cao nhat: "<<max(max(b,c),d);
	cout<<"\nTruong A co so luong sinh vien la: "<<u;
	cout<<"\nTruong B co so luong sinh vien la: "<<v;
	cout<<"\nTruong C co so luong sinh vien la: "<<m;
}

