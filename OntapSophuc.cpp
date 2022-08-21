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
		float operator!();	
};
istream &operator>>(istream &is, SP &obj){
	cout<<"\nNhap phan thuc: ";
	is>>obj.a;
	cout<<"\nNhap phan ao: ";
	cin>>obj.b;
	return is;
}
ostream &operator<<(ostream &os, SP obj){
	os<<obj.a<<"+"<<obj.b<<"i";
	return os;
}
float SP::operator!(){
	return a*a + b*b;
}

int main()
{
	SP x1(3,2),x2;
	cin>>x2;
	cout<<x1<<"\n"<<x2;
	float x3 = !x1+ !x2;
	cout<<"\nS: "<<x3;

}

