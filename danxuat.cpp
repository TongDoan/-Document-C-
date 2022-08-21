//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class Shape{
	float x,y;
	public:
		Shape(){		}
		Shape(float a, float b){
			x=a; y=b;
		}
		float gett(){
			return x;
		}
		float geth(){
			return y;
		}
};

class Rectangle: public Shape{
	public:
		Rectangle(float a, float b): Shape(a,b){}
		float area(){
			return gett()*geth();
		}
};

class Triangle: public Shape{
	public:
		Triangle(float a, float b): Shape(a,b){		}
		float area(){
			return (gett()*geth()/2);
		}
};
int main()
{
	Rectangle a(4,3);
	Triangle b(2,6);
	cout<<a.area();
	cout<<b.area();
}

