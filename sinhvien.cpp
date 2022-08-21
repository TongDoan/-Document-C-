//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
typedef struct tgSV {
	char HT[50];
	int MSV;
	float Diem;
}SV; 
void input(SV **a, int *n){
	cout << "Nhap so sinh vien: ";
	cin>>*n;
	*a=(SV*)malloc((*n)*sizeof(SV));
	for(int i=0; i<(*n); i++){
		cout<<"\nNhap thong tin SV "<<i+1<<" : ";
		cout<<"\nNhap ten: ";
		fflush(stdin);
		gets((*a)[i].HT);
		
		cout<< "Nhap ma sinh vien: ";
		cin>> (*a)[i].MSV;

		cout<< "Nhap diem: ";
		cin>> (*a)[i].Diem;
	}
}
void show(SV *a, int n){
	cout<<setw(5)<<"STT"<<setw(15)<<"HoTen"<<setw(20)<<"MSV"<<setw(15)<<"Diem"<<endl;
	for(int i=0; i<n; i++){
		cout<<setw(5)<<i+1<<setw(15)<<a[i].HT<<setw(20)<<a[i].MSV<<setw(15)<<a[i].Diem<<endl;
	}
}
void swap(SV &a, SV &b){
	SV temp;
  memcpy(&temp,&a,sizeof(SV));
  memcpy(&a,&b,sizeof(SV));
  memcpy(&b,&temp,sizeof(SV));
//  SV c =a;
//	a=b;
//	b=c;
}

void sort(SV *a, int n){
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].Diem < a[j].Diem){
				swap(a[i], a[j]);
			}
		}
	}
}

int main()
{
	SV *a;
	int n;
	input(&a,&n);
	show(a,n);
	sort(a,n);
	show(a,n);
}

