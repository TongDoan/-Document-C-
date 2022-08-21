//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class nguoi{
	string ten;
	int tuoi;
	public:
		string layten(){
			return ten;
		}
		int laytuoi(){
			return tuoi;
		}
		void nhap();
		void xuat();
};
class quanli: public nguoi{
	int snct;
	int hsl;
	public:
		int laysnct(){
			return snct;
		}
		int layhsl(){
			return hsl;
		}
		void nhap();
		void xuat();
		float tinhtien();	
};
void nguoi::nhap(){
	cin.ignore();
	cout<<"\nTen nhan vien: ";
	getline(cin,this->ten);
	cout<<"\nTuoi: ";
	cin>>tuoi;
}
void nguoi::xuat(){
	cout<<"\n"<<ten<<"\t"<<tuoi;
}
void quanli::nhap(){
	nguoi::nhap();
	cout<<"\nNhap so nam cong tac: ";
	cin>>snct;
	cout<<"\nNhap he so luong: ";
	cin>>hsl;
}
void quanli::xuat(){
	nguoi::xuat();
	cout<<"\t"<<snct<<"\t"<<hsl;
}

float quanli::tinhtien(){
	if(snct >= 15){
		return 1350000*hsl + 3000000;
	}
	if(5 <= snct < 15){
		return 1350000*hsl + 2000000;
	}
	if(snct < 5){
		return 1350000*hsl + 1000000;
	}
}

int main()
{
	quanli *a;
	int n;
	cout<<"\nNhap n nhan vien: ";
	cin>>n;
	a= new quanli[n+1];
	for(int i =1;i<=n;i++){
		a[i].nhap();
	}

	int max=0;
	for(int i=1; i<=n;i++){
		if(max < a[i].tinhtien()){
			max=a[i].tinhtien();
		}
	}
	for(int i=1; i<=n;i++){
		if(max== a[i].tinhtien()){
			cout<<"\nNhan vien co tien luong cao nhat la: "<<a[i].layten();
		}
	}
	for(int i=1; i<=n;i++){
		if(max > a[i].tinhtien()){
			max=a[i].tinhtien();
		}
	}
	for(int i=1; i<=n;i++){
		if(max== a[i].tinhtien()){
			cout<<"\nNhan vien co tien luong nho nhat la: "<<a[i].layten();
		}
	}
	
}

