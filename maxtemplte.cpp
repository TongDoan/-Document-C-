//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
template <class T>
T max(T &a, T &b){
	return a>b ? a:b;
}
int main()
{
	int a,b;
	float c,d;
	cout<<"\nNhap 2 so nguyen: ";
	cin>>a>>b;
	cout<<"\nMax: "<<max(a,b);
	cout<<"\nNhap 2 so thuc: ";
	cin>>c>>d;
	cout<<"\Max: "<<max(c,d);
}

