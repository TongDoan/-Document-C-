//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class SP{
	int a,b;
	public:
		SP(){	}
		SP(int x, int y){
			a=x; b=y;
		}
		friend istream &operator>>(istream &is, SP &obj);
    	friend ostream &operator<<(ostream &os, SP obj);
		SP operator+(SP p);	
};
istream &operator>>(istream &is, SP &obj){
	cout<<"\nNhap phan thuc: ";
	is>>obj.a;
	obj.b=0;
	return is;
}
ostream &operator<<(ostream &os, SP obj){
	os<<obj.a<<"+"<<obj.b<<"i";
	return os;
}
SP SP::operator+(SP p){
	SP t;
	t.a=a+p.a;
	t.b=b+p.b;
	return t;
}

int main()
{
	SP x1(3,2),x2,x3;
	cin>>x2;
	cout<<x1<<"\n"<<x2;
	x3=x1+x2;
	cout<<"\nPhep cong hai so phuc: "<<x3;

}

