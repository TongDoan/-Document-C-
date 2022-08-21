#include<bits/stdc++.h>
using namespace std;
class machdien{
	int n;
	float r1,r2,r3,e1;
	public:
		void tinh(){
			n=50+7;
			r1=r2=r3=100;
			e1=100+n;
			float i1,i2;
			i1=e1/(1-((r2*r2)/((r1+r2)*(r2+r3))));
			i2=-(i1*r2)/(r2+r3);
			cout<<"\nI1 la: "<<i1;
			cout<<"\nI2 la: "<<i2;
		}
};
int main(){
	machdien a;
	a.tinh();
}

