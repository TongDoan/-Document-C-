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
class Maygiat: public Hang{
	float can;
	public:
		float laycan(){
			return can;
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
void Maygiat::nhap(){
	Hang::nhap();
	cout<<"\nNhap can nang: ";
	cin>>can;
}
void Hang::xuat(){
	cout<<"Mahang: "<<ma<<"\tTenHang: "<<ten<<"\tSoluog: "<<soluong<<"\tDongia: "<<dongia;
}
void Maygiat::xuat(){
	Hang::xuat();
	cout<<"\tCan: "<<can;
}
int main(){
	Maygiat *a;
	int n;
	cout<<"\nNhap so luong may giat: ";
	cin>>n;
	a = new Maygiat[n+1];
	for(int i =1;i<=n;i++){
		a[i].nhap();
	}
	cout<<"\nNhap ma hang (neu khong co thi ghi 0): ";
	int b;
	cout<<"\nNhap ten hang (neu khong co thi ghi 0): ";
	cin>>b;
	string c;
	cin.ignore();
	getline(cin,c);
	for(int i =1;i<=n;i++){
		if(a[i].layma() == b || a[i].layten() == c){
			a[i].xuat();
		}
	}
	for(int i =1;i<=n;i++){
		if(a[i].laycan() > 6 )
			a[i].xuat();
	}
}

