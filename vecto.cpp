//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class vecto
{
	float a[100];
public: 	
	void nhap();
	void print();
	void tinh();
};

void vecto:: nhap(){
	for(int i=0;i<3;i++)
        {
        cout<<"Phan tu thu "<<i+1<<": ";
        cin>>a[i];
        }
}

void vecto:: print()
{
    cout<<"\nCac phan tu cua vector la: ";
    for(int i=0;i<3;i++)
    cout<<a[i]<<" ";
}

int main()
{
	vecto V1,V2;
    cout<<"Nhap Vector 1:";
    V1.nhap();
    V1.print();
    cout<<"\nNhap Vector 2:";
    V2.nhap();
    V2.print();
}

