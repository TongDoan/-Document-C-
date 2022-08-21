//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class qlh{
	int mh;
	string ten;
	string xx;
	int loai;
	int soluong;
	public:
		int laymh(){
			return mh;
		}
		string layten(){
			return ten;
		}
		string layxx(){
		return xx;
		}
		int layluong(){
			return soluong;
		}int layloai(){
			return loai;
		}
		void nhap();
};

class mt: public qlh
{
	int tgbh;
	public:
		int laytgbh(){
			return tgbh;
		}
		void nhap();
};

void qlh::nhap(){
	cout<<"\nNhap ma hang: "; cin >> mh;
	cout<<"\nNhap ten hang: ";
	cin.ignore(1);
	getline(cin,this->ten);
	cout<<"\nNhap noi xuat xu: ";
	cin.ignore(1);
	getline(cin, this->xx);
	cout<<"\nNhap loai (1,2,3): "; cin >> loai;
	cout<<"\nNhap so luong: "; cin >> soluong;
}

void mt::nhap(){
	qlh::nhap();
	cout<<"\nNhap thoi gian bao hanh(theo thang): "; cin >> tgbh;
}

int main()
{
	mt *a;
	int n;
	cout<<"\nNhap n may tinh: "; cin>>n;
	a= new mt[n+1];
	for(int i =1;i<=n;i++){
		a[i].nhap();
	}
	
	int u=0,v=0,m=0;
	for(int i=1;i<=n;i++){
		if(a[i].layloai()==1 && a[i].laytgbh()>12){
			u++;
		}
		if(a[i].layloai()==2 && a[i].laytgbh()>12){
			v++;
		}
		if(a[i].layloai()==3 && a[i].laytgbh()>12){
			m++;
		}
	}
	cout<<"\nLoai 1 co so mat hang la: "<<u;
	cout<<"\nLoai 2 co so mat hang la: "<<v;
	cout<<"\nLoai 3 co so mat hang la: "<<m;
	mt b;
	string tenb;
	cout<<"\nNhap ten can tim: ";
	cin.ignore();
	getline(cin,tenb);
	for(int i=1;i<=n;i++){
		if(tenb == a[i].layten()){
		cout<<a[i].laymh()<<"\t"<<a[i].layten()<<"\t"<<a[i].layxx()<<"\t"<<a[i].layloai()<<"\t"<<a[i].layluong()<<"\t"<<a[i].laytgbh();
	}else{
		cout<<"\nKhong co mat hang tren!";
		}
	}
}

