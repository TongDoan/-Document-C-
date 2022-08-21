//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class Xe{
	int bienso;
	float trongluong;
	public:
		int laybien(){
			return bienso;
		}
		float laycan(){
			return trongluong;
		}
		void nhap();
		void xuat();
};
class XeBus: public Xe{
	int sochongoi;
	public:
		int laycho(){
			return sochongoi;
		}
		void nhap();
		void xuat();
};
class XeTai: public Xe{
	float taitrong;
	public:
		float laytaitrong(){
			return taitrong;
		}
		void nhap();
		void xuat();
};
void Xe::nhap(){
	cout<<"\nNhap bien so: ";
	cin>>bienso;
	cout<<"\nNhap trong luong: ";
	cin>>trongluong;
}
void XeBus::nhap(){
	Xe::nhap();
	cout<<"\nNhap so cho ngoi: ";
	cin>>sochongoi;
}
void XeTai::nhap(){
	Xe::nhap();
	cout<<"\nNhap tai trong: ";
	cin>>taitrong;
}
void Xe::xuat(){
	cout<<"\nBienso: "<<bienso<<"\tTrongLuong: "<<trongluong;
}
void XeBus::xuat(){
	Xe::xuat();
	cout<<"\tSoChoNgoi: "<<sochongoi;
}
void XeTai::xuat(){
	Xe::xuat();
	cout<<"\tTaiTrong: "<<taitrong;
}
int main(){
	XeBus *a;
	XeTai *b;
	int n,m;
	cout<<"\nNhap so xe bus: ";
	cin>>n;
	cout<<"\nNhap so xe tai: ";
	cin>>m;
	a= new XeBus[n+1];
	b= new XeTai[m+1];
	cout<<"\nNhap thong tin xe bus: ";
	for(int i =1;i<=n;i++){
		a[i].nhap();
	}
	cout<<"\nNhap thong tin xe tai: ";
	for(int i =1;i<=m;i++){
		b[i].nhap();
	}
	int max=0;
	for(int i =1;i<=m;i++){
		if(max<b[i].laycan() && b[i].laytaitrong() <5)
			max=b[i].laycan();
	}
	for(int i =1;i<=m;i++){
		if(max == b[i].laycan() && b[i].laytaitrong() <5)
			b[i].xuat();
	}
	int c,dem=0;
	cout<<"\nNhap bien so xe can tim: ";
	cin>>c;
	for(int i =1;i<=n;i++){
		if(a[i].laybien()==c){
			a[i].xuat();
			dem++;
		}
	}
	for(int i =1;i<=m;i++){
		if(b[i].laybien()==c){
			b[i].xuat();
			dem++;
		}
	}
	if(dem==0){
		cout<<"\nKhong co thong tin xe can tim!";
	}
}

