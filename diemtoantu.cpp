//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class Diem{
	float x,y;
	public:
		Diem(){	};
		Diem(float x1, float y1){
			x=x1, y=y1;
		}
		friend istream &operator>>(istream& is, Diem& p);
		friend ostream &operator<<(ostream& os, Diem p);
		Diem operator*(Diem p);
		float kc(Diem& p);
};

istream &operator>>(istream& is, Diem& p){
	cout<<"\nNhap toa do x: ";
	is>>p.x;
	cout<<"\nNhpa toa do y: ";
	is>>p.y;
	return is;
}

ostream &operator<<(ostream& os, Diem p){
	os<<"("<<p.x<<","<<p.y<<")";
	return os;
}

Diem Diem::operator*(Diem p){
	Diem t;
	t.x= this->x*p.x;
	t.y=this->y*p.y;
	return t;
}

float Diem::kc(Diem& p){
	return sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));
}
int main()
{
	Diem x1, x2(3,4),x4;
	float x3;
	cin>>x1;
	x4=x1*x2;
	cout<<x1<<"\t"<<x2<<"\t"<<x4;
	x3=x1.kc(x2);
	cout<<"\nKhoang cach giua 2 diem la: "<<x3;
}

