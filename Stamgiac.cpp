//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class Toado {
	float x,y;
	public:
		Toado(){ };
		Toado(float x1, float y1){
			x=x1, y=y1;
		}
		void nhap();
		void xuat(){
			cout<<"("<<x<<","<<y<<")\t";
		}
		float kc(Toado p);
		float dodai(int n);
};
void Toado:: nhap(){
	cout<<"Nhap toa do x va y: ";
	cin>>x>>y;
}

float Toado::dodai(int n){
	float s=0;
	for(int i=0; i<n;i++){
		float u= x[i+1] - x[i];
		float v= y[i+1] - y[i];
		s+=sqrt(u*u+v*v);
	}
	
}
float Toado::kc(Toado p){
	return sqrt(abs(pow(p.x-x,2) + pow(p.y-y,2)));
} 
int main()
{
	Toado *p;
	int n;
	cout<<"\nNhap n: ";
	cin>>n;
	p= new Toado[n];
	for(int i=0; i<n; i++){
		p[i].nhap();
	}
	for(int i=0; i<n; i++){
		p[i].xuat();
	}
}

