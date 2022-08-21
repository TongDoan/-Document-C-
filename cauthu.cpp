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

class cauthu: public nguoi{
	int sbt;
	int sptd;
	public:
		int laysbt(){
			return sbt;
		}
		int laysptd(){
			return sptd;
		}
		void nhap();
};
void nguoi::nhap(){
	cin.ignore();
	cout<<"\nTen ct: ";
	getline(cin,this->ten);
	cout<<"\nTuoi: ";
	cin>>tuoi;
}

void cauthu::nhap(){
	nguoi::nhap();
	cout<<"\nNhap so ban thang: ";
	cin>>sbt;
	cout<<"\nNhap so phut thi dau: ";
	cin>>sptd;
}

int main()
{
	cauthu *a;
	int n,tienthuong;
	cout<<"\nNhap so cau thu: ";
	cin>>n;
	a= new cauthu[n+1];
	for(int i =1;i<=n;i++){
		a[i].nhap();
	}
	int max=0;
	for(int i=1; i<=n;i++){
		if(max< a[i].laytuoi()){
			max=a[i].laytuoi();
		}
	}
	for(int i=1; i<=n;i++){
		if(max== a[i].laytuoi()){
			cout<<"\nCau thu lon tuoi nhat la: "<<a[i].layten();
		}
	}
	for(int i=1; i<=n;i++){
		if(a[i].laysptd() > 300){
			tienthuong = 10 + 5*a[i].laysbt();
			cout<<"\nCau thu thu "<<i<<" co so tien thuong la: "<<tienthuong;
		}
	}
}

