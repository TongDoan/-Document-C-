#include<bits/stdc++.h>
using namespace std;
class Diem{
	public:
	float x,y;
public:
	Diem(float x1,float y1)  { x=x1; y=y1;}
	Diem()  { }
	int operator==(Diem d);
	float kc();        // khoang cach tu this den goc toa do
	float kc(Diem& d);  //khoang cach tu this den d
	friend ostream& operator<<(ostream& os, Diem& p);
	friend istream& operator<<(istream& is, Diem&p);
	Diem operator*(Diem p);
};

ostream& operator<<(ostream& os, Diem& p)
{
	os<<"("<<p.x<<","<<p.y<<")";
	return os;
}
istream& operator>>(istream& is, Diem& p)
{
	is>>p.x>>p.y;
	return is;
}
int Diem::operator==(Diem d)
{
	if(x==d.x && y==d.y)
	    return 1;
	else
	    return 0;
}
float Diem::kc()
{
	return sqrt(x*x+y*y);
}
float Diem::kc(Diem& d)
{
	return sqrt((x-d.x)*(x-d.x)+(y-d.y)*(y-d.y));
}
Diem Diem::operator*(Diem p){
	Diem t;
	t.x= (*this).x*p.x;
	t.y=(*this).y*p.y;
	return t;
}
int main()
{
	Diem d1,d2(1,1),d3,d4;
	cout<<"\nNhap diem 1:"; cin>>d1;
	//cout<<"\nNhap diem 2:"; cin>>d2;
	d3=d1*d2;
	cout<<"\nDiem 3:"<<d3;
	cout<<"\nKC tu diem 3 den O:";
	cout<<d3.kc();
	cout<<"\nNhap diem 4:"; cin>>d4;
	cout<<"\nKC tu diem 3 den diem 4:";
	cout<<d3.kc(d4);
	if(d1==d2)
	    cout<<"Hai diem d1,d2 trung nhau";
}
