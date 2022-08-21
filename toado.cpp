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
		friend istream& operator>>(istream& is, Toado &p);
		friend ostream& operator<<(ostream& os, Toado p);
		void xuat(){
			cout<<"("<<x<<","<<y<<")";
		}
		float kc(Toado p);
		float kcdengoc();
};

istream& operator>>(istream& is, Toado &p){
	cout<<"\nNhap toa do x: ";
	is>>p.x;
	cout<<"\nNhap toa do y: ";
	is>>p.y;
	return is;
}

ostream& operator<<(ostream& os, Toado p){
	os<<"("<<p.x<<","<<p.y<<")";
	return os;
}

float Toado::kc(Toado p){
	return sqrt(abs(pow(p.x-x,2) + pow(p.y-y,2)));
} 

float Toado::kcdengoc(){
	return sqrt((x*x)+(y*y));
}

int main()
{
	Toado x1(3,4),x2;
	float x3,x4,x5;
	cin>>x2;
	cout<<x1<<"\t"<<x2;
	x3= x1.kc(x2);
	x4= x1.kcdengoc();
	x5 = x2.kcdengoc();
	cout<<"\nKhoang cach 2 diem la: "<<x3;
	
}

