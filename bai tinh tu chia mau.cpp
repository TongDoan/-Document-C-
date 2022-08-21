/*Bài 12 trang 77*/
#include <stdio.h>
#include<conio.h>
#include<math.h>
long int GT(int n);
long int Mau(int n);
double Tu(float x, int n);
int main()
{
	int n; double S; float x;
	printf("\n Nhap so nguyen duong n: "); scanf("%d",&n);
	printf("\n Nhap so thuc: "); scanf("%f",&x);
	printf("\nS=%.2f",(double)(Tu(x,n))/(double)(Mau(n)));	
	getch();
}

long int GT(int n){
	long int x=1; int i;
	for(i=1; i<=n;i++){
		x=x*i;
		}
	return x;
}
long int Mau(int n)
{
	long int x=0; int i;
	for(i=1; i<=n;i++){
		x=x+GT(i);
		}
	return x;
}
double Tu(float x, int n)
{
	double s=0;int i;
	for(i=1; i<=n;i++){
		s=s+pow(x,i);
		}
	return s;
}
