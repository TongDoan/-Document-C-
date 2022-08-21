#include<bits/stdc++.h>
using namespace std;
class Nguoi{
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
class Nhanvien: public Nguoi{
	int hsl;
	int loai;
	public:
		int layhsl(){
			return hsl;
		}
		int layloai(){
			return loai;
		}
		void nhap();
		void xuat();
		float tinhtien();	
};
void Nguoi::nhap(){
	cin.ignore();
	cout<<"\nTen nhan vien: ";
	getline(cin,this->ten);
	cout<<"\nTuoi: ";
	cin>>tuoi;
}
void Nguoi::xuat(){
	cout<<"\n"<<ten<<"\t"<<tuoi;
}
void Nhanvien::nhap(){
	Nguoi::nhap();
	cout<<"\nNhap he so luong: ";
	cin>>hsl;
	cout<<"\nNhap loai: ";
	cin>>loai;
}
void Nhanvien::xuat(){
	Nguoi::xuat();
	cout<<"\t"<<hsl<<"\t"<<loai;
}
float Nhanvien::tinhtien(){
	if(loai==1){
	   return 1.45*hsl + 3;
	}
	if(loai==2){
	   return 1.45*hsl + 2;
    }
    if(loai==3){
	   return 1.45*hsl + 1;
    }
}
int main()
{
	Nhanvien *a;
	int n;
	cout<<"\nNhap n nhan vien: ";
	cin>>n;
	a= new Nhanvien[n+1];
	for(int i =1;i<=n;i++){
		a[i].nhap();
	}
	for(int i=1; i<=n;i++){
		cout<<"\nLuong cua nhan vien "<<i<<" la: "<<a[i].tinhtien();
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
}
