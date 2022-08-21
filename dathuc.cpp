//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class day {
	int n;
	float *x;
	public:
		day();
		day(int n=0);
		void nhap(int n1);
		void xuat();
		~day(){ delete x;}
		float tinh(float b, int n);
};

day::day(int n){
	x=new float[n];
}
void day::nhap(int n1){
	n=n1;
	x = new float[n];
	for(int i=0; i<=n;i++){
		cout<<"\nNhap he so thu "<<i+1<<": ";
		cin>>(x)[i];
	}
}

void  day::xuat(){
	for(int i=0; i<=n;i++){
		cout<<"\t"<<x[i];
	}
}

float day::tinh(float b, int n){
	float s=0;
	for(int i=0;i<=n;i++){
		s+=x[i]*pow(b,i);
	}
	return s;
}



int main()
{
	day p,p1;
	float b;
	int n;
	p1.nhap(3);
	cout<<"\nNhap bac cua da thuc: ";
	cin>>n;
	p.nhap(n);
	p.xuat();
	cout<<"\nNhap gia tri x: ";
	cin>>b;
	cout<<p.tinh(b,n);
}

