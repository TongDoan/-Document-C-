//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

void input(int **a, int n){
	*a=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		cout << " nhap a["<<i<<"]= ";
		cin>>(*a)[i];
	}
}
void print(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<setw(8)<<a[i];
	}
}

void swap(int &a, int &b){
	int c =a;
	a=b;
	b=c;
}

int UCLN2So(int x, int y)
{
	if (y == 0)
		return x;
	return UCLN2So(y, x % y);
}

int UCLN(int *a, int n)
{
	int UCLN = a[0];
	for (int i = 1; i < n; i++)
	{
		UCLN = UCLN2So(UCLN, a[i]);
	}
	return UCLN;
}

void sort(int *a, int n){
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}

int main()
{
	int n;
	int *a;
	cout<<"Nhap n: ";
	cin>>n;
	input(&a,n);
	cout<<"Mang vua nhap la: ";
	print(a,n);
	cout<<"\nMang sau khi xap xep la: ";
	sort(a,n);
	print(a,n);
	cout<<"\nUCLN la "<< UCLN(a,n)<<endl;
}

