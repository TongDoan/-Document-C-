//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class day {
	int n;
	float *x;
	public:
		day(int n =0);
		~day(){delete x;}
		friend istream &operator>>(istream& is, day& p);
		friend ostream &operator<<(ostream& os, day& p);
		day& operator=(day& p);
		float tinh(float b);
};
day::day(int n){
	x= new float[n];
}

istream &operator>>(istream& is, day& p){
	cin>>p.n;
	for(int i=0; i<=(p.n);i++){
		cout<<"\nNhap he so thu "<<i+1<<": ";
		is>>p.x[i];
	}
	return is;
}

ostream &operator<<(ostream& os, day& p){
	for(int i=0; i<=(p.n);i++){
		os<<"\t"<<p.x[i];
	}
	return os;
}

float day::tinh(float b){
	float s=0;
	for(int i=0;i<=n;i++){
		s+=x[i]*pow(b,i);
	}
	return s;
}

day& day::operator=(day& p)
{
	n=p.n;
	x=new float[n];
	for(int i=0;i<=n;++i)
	    x[i]=p.x[i];
	    return (*this);
}

int main()
{
	
	day p,p1;
	float b;
	cout<<"\nNhap bac cua da thuc: ";
	cin>>p;
	cout<<p;
	p1=p;
	cout<<"\nDa thuc sau khi duoc gan la: "<<p1;
	cout<<"\nNhap gia tri x: ";
	cin>>b;
	cout<<p.tinh(b);
}

