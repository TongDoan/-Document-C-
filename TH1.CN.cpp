//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class rect{
	int width;
	int height;
	public:
		rect(){ }
		void input();
		rect(int a, int b){
			width=a; height=b;
		}
		float area();
		int square();
};
void rect::input(){
	cout<<"\nNhap chieu dai va chieu rong: ";
	cin>>width>>height;
}
float rect::area(){
	return width*height;
}
int rect::square(){
	if(width==height) return 1;
	else 
	return 0;
}

int main()
{
	rect b(4,4);
	if(b.square()){
		cout<<"\nHinh vuong";
	}
	else {
		cout<<"\nK la hv";
	}
	rect *a;
	int n,dem=0;
	cout<<"\nNhap n HCN : ";
	cin>>n;
	a= new rect[n];
	for(int i=0; i<n;i++){
		cout<<"\nNhap hình chu nhat thu "<<i+1<<": ";
		a[i].input();
		if(a[i].square()){
			dem++;
		}
	}
	cout<<"\nSo hinh chu nhat: "<<dem;
	float max=0;
	for(int i=0; i<n;i++){
		if(max< a[i].area() && a[i].square()){
			max= a[i].area();
		}
	}
	cout<<"\nS lon nhat la: "<<max;
}

