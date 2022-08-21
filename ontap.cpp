//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
void maxmin(int a, int b, int c){
	int min =0; int max=0;
	if(a>b && a>c){
		max=a;
	}else if(b>a && b>c){
		max=b;
	}else {
		max=c;
	}
	if(a>b && a>c && b < c){
		min=b;
	}else if(b>a && b>c && c < a){
		min=c;
	}else {
		min=a;
	}
	cout<<"\nMax: "<<max;
	cout<<"\nMin: "<<min;
}
int main()
{
	//bai 1:
	int a,b,c;
	cout<<"\nNhap 3 so nguyen: ";
	cin>>a>>b>>c;
	
	if(a * a == (b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b + a * a)){
		cout<<"\nTam giac vuong";
	}else{
		cout<<"\nK vuong";
	}
	//bai 2:
	char str[25];
	cout<<"\nNhap vao 1 chuoi: ";
	cin>>str;
	for(int i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   cout<<"\nChu thuong: "<<str;
   for(int i=0;i<=strlen(str);i++){
      if(str[i]>=97&&str[i]<=122)
         str[i]=str[i]-32;
   }
   cout<<"\nChu hoa: "<<str;
   maxmin(a,b,c);
}

