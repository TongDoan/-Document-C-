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
class nhanvien: public nguoi{
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
void nhanvien::nhap(){
	nguoi::nhap();
	cout<<"\nNhap so he so luong: ";
	cin>>hsl;
	cout<<"\nNhap loai (1/2/3): ";
	cin>>loai;
}
void nhanvien::xuat(){
	nguoi::xuat();
	cout<<"\t"<<hsl<<"\t"<<loai;
}

float nhanvien::tinhtien(){
	float s;
	if(loai==1){
		s=1.5*hsl + 300000;
	}
	if(loai==2){
		s=1.5*hsl + 200000;
	}
	if(loai==3){
		s=1.5*hsl + 100000;
	}
	return s;
}

int main()
{
	nhanvien *a;
	int n;
	cout<<"\nNhap n nhan vien: ";
	cin>>n;
	a= new nhanvien[n+1];
	for(int i =1;i<=n;i++){
		a[i].nhap();
	}
	for(int i=1; i<=n;i++){
		cout<<"\nLuong cua nhan vien "<<i<<"la: "<<a[i].tinhtien();
	}
	int max=0;
	for(int i=1; i<=n;i++){
		if(max< a[i].tinhtien()){
			max=a[i].tinhtien();
		}
	}
	for(int i=1; i<=n;i++){
		if(max== a[i].tinhtien()){
			cout<<"\nNhan vien co luong cao nhat la: "<<a[i].layten();
		}
	}
}

