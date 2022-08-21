//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class day {
	int n;
	float *x;
	public:
		day(){	}
		day(int n1);
		~day(){delete x;}
		friend istream &operator>>(istream& is, day& p);
		friend ostream &operator<<(ostream& os, day& p);
		day operator+(day p);
		day& operator=(day& p);
		
};
day::day(int n1){
	n=n1;
	x= new float[n+1];
}

istream &operator>>(istream& is, day& p){
	cin>>p.n;
	p.x = new float[p.n+1];
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
day day::operator+(day p)
{
	
	int i, t;
    t = n > p.n ? n : p.n;
    day d1( t );
    for( i = 0; i <= t; ++i ){
        if( i <= n && i <= p.n )
           d1.x[i] = x[i] + p.x[i];
        else if( i <= n )
           d1.x[i] = x[i];
        else
           d1.x[i] = p.x[i];
   }
   return d1;
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
	
	day p,p1,p2,p3;
	cout<<"\nNhap bac cua da thuc: ";
	cin>>p;
	cin>>p2;
	p3=p+p2;
	cout<<p3;

	
}

