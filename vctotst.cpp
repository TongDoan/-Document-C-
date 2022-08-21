//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class vecto{
	float x1,x2,x3;
	public:
		vecto(){ }
		vecto(float y1,float y2, float y3){
			x1=y1;
			x2=y2;
			x3=y3;
		}
		vecto tinh(vecto b, vecto c){
			vecto d;
			d.x1=x1+2*b.x1+3*c.x1;
			d.x2=x2+2*b.x2+3*c.x2;
			d.x3=x3+2*b.x3+3*c.x3;
			return d;
		}
		void xuat(){
			cout<<x1<<"\t"<<x2<<"\t"<<x3;
		}
};
int main(){
	vecto a(1,2,3),b(3,2,1),c(2,4,5),t;
	t=a.tinh(b,c);
	t.xuat();
}

