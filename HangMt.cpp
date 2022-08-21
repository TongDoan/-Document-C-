//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class Hang{
	int ma;
	string ten;
	int soluong;
	float dongia;
	public:
		Hang() {}
		Hang(int ma_, string ten_, int soluong_, float dongia_){
			ma=ma_;
			ten=ten_;
			soluong=soluong_;
			dongia=dongia;
		}
		int layma(){
			return ma;}
		string layten(){
			return ten;}
		int laysl(){
			return soluong;}
		float laydongia(){
			return dongia;
		}
		void nhap();
		void xuat();
};
class Maytinh: public Hang{
	string hdh;
	float can;
	float gia;
	public:
		string layhdh(){
			return hdh;
		}
		float laycan(){
			return can;
		}
		float laygia(){
			return gia;
		}
		void nhap();
		void xuat();
};
void Hang::nhap(){
	cout<<"\nNhap ma hang: ";
	cin>>ma;
	cin.ignore();
	cout<<"\nTen hang: ";
	getline(cin,ten);
	cout<<"\nNhap so luong: ";
	cin>>soluong;
	cout<<"\nNhap don gia: ";
	cin>>dongia;
}
void Maytinh::nhap(){
	Hang::nhap();
	cin.ignore();
	cout<<"\nHe dieu hanh: ";
	getline(cin,hdh);
	cout<<"\nNhap can nang: ";
	cin>>can;
	cout<<"\nNhap gia: ";
	cin>>gia;
}
void Hang::xuat(){
	cout<<"Mahang: "<<ma<<"\tTenHang: "<<ten<<"\tSoluog: "<<soluong<<"\tDongia: "<<dongia;
}
void Maytinh::xuat(){
	Hang::xuat();
	cout<<"\tHeDH: "<<hdh<<"\tCan: "<<can<<"\tGia: "<<gia;
}
int main(){
	Maytinh *a;
	int n;
	cout<<"\nNhap so luong may tinh: ";
	cin>>n;
	a = new Maytinh[n+1];
	for(int i =1;i<=n;i++){
		a[i].nhap();
	}
	for(int i =1;i<=n;i++){
		if(a[i].layhdh() == "Win" && a[i].laycan() < 2.5){
			a[i].xuat();
		}
	}
	int min=a[1].laygia();
	for(int i =1;i<=n;i++){
		if(min > a[i].laygia())
			min=a[i].laygia();
	}
	for(int i =1;i<=n;i++){
		if(a[i].laygia() == min && a[i].layhdh() == "Mac")
			a[i].xuat();
	}
}

