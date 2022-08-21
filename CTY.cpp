//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class CTY{
	string ten;
	int ntl;
	public:
		string layten(){
			return ten;
		}
		int laynam(){
			return ntl;
		}
		void nhap();
};
class CTYPM: public CTY{
	int sltv;
	public:
		int layltv(){
			return sltv;
		}
		void nhap();
};
class CTYVT: public CTY{
	int oto;
	public:
		int layoto(){
			return oto;
		}
		void nhap();
};

void CTY::nhap(){
	cin.ignore(1);
	cout<<"\nTen cong ty: ";
	getline(cin,this->ten);
	cout<<"\nNam thanh lap: ";
	cin>>ntl;
}

void CTYPM::nhap(){
	CTY::nhap();
	cout<<"\nNhap so lap trinh vien: ";
	cin>>sltv;
}

void CTYVT::nhap(){
	CTY::nhap();
	cout<<"\nNhap so lap trinh vien: ";
	cin>>oto;
}
int main()
{
	CTYPM *pm;
	CTYVT *vt;
	int m,n;
	cout<<"\nNhap du lieu cong ty PM: ";
	cout<<"\nNhap so cty: ";
	cin>>m;
	pm= new CTYPM[m+1];
	for(int i =1; i<=m;i++){
		pm[i].nhap();
	}
	for(int i =1; i<=m;i++){
		if(pm[i].laynam() > 2000 && pm[i].layltv()>20){
			cout<<pm[i].layten()<<","<<pm[i].laynam()<<","<<pm[i].layltv()<<endl;
		}
	}
	cout<<"\nNhap du lieu cong ty VT: ";
	cout<<"\nNhap so cty: ";
	cin>>n;
	vt= new CTYVT[n+1];
	for(int i =1; i<=n;i++){
		vt[i].nhap();
	}
	for(int i =1; i<=n;i++){
		if(vt[i].laynam() > 2000 && vt[i].layoto()<10){
			cout<<vt[i].layten()<<","<<vt[i].laynam()<<","<<vt[i].layoto()<<endl;
		}
	}
}

