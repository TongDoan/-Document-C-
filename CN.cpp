//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class CN{
	float x, y;
	public:
		void nhap();
		void xuat();
		float S();
};
void CN::nhap(){
		cin>>x>>y;
}
void CN::xuat(){
		cout<<"("<<x<<","<<y<<")"<<"\t";
}
float CN::S(){
	return x*y;
}
int main()
{
	CN *p;
	int n;
	cout<<"\Nhap n hinh chu nhat: "; cin>>n;
	p = new CN[n];
	for(int i=0; i<n;i++){
		cout<<"\Nhap hinh chu nhat thu "<<i+1<<": ";
		p[i].nhap();
	}
	for(int i=0; i<n;i++){
		p[i].xuat();
	}
	float a[100];
	for(int i=0; i<n;i++){
			a[i]=p[i].S();
	}
	float max=0;
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(max==a[i]){
			cout<<"\nHinh chu nhat thu "<<i+1<<" co S Max: "<<max;
		}
	}
}

