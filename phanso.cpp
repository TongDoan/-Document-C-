//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class PS {
int ts, ms;
	public:
	void nhap();
	void xuat() { cout<<ts<<"/"<<ms; }
	PS operator*(PS p);
	PS operator+(PS p);
	PS operator++();
	PS operator++(int);
	int UCLN(int , int );
	PS toigian();
};
void PS::nhap() {
	cout<<"\nTu so, mau so: ";
	cin>>ts>>ms;
}
PS PS::operator*(PS p) {
	PS t;
	t.ms= ms * p.ms;
	t.ts= ts * p.ts;
	return t;
}
PS PS::operator+(PS p) {
	PS t;
	t.ms= ms * p.ms;
	t.ts=ts*p.ms + ms*p.ts;
	return t;
}
PS PS::operator++(int){
	PS t;
	t=*this;
	t.ts=ts + ms;
	return t;
}
PS PS::operator++(){
	ts=ts+ms;
	return *this;
}
int PS::UCLN( int ts, int ms){
	if(ts==0) return ms;
    return UCLN(ms%ts,ts);
} 

PS PS::toigian(){
	PS b;
	int temp = UCLN(ts,ms);
	b.ts= ts/temp;
	b.ms= ms/temp;
	return b;
}

int main() {
	PS p1, p2, p3, p4,p5,p6,p7;
	p1.nhap();
	p2.nhap();
	p3= p1*p2;
	cout<<"\nTich hai phan so: ";
	p3.xuat();
	p5=p3.toigian();
	cout<<"\nPhan so toi gian la: ";
	p5.xuat();
	p4= p1 + p2;
	cout<<"\nTong hai phan so: ";
	p4.xuat();
	p6=p4.toigian();
	cout<<"\nPhan so toi gian la: ";
	p6.xuat();
	p7=p5++;
	cout<<"\n";
	p7.xuat();
	
}
