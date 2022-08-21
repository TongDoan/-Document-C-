#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c, d;
	printf("nhap a: "); scanf("%f", &a);
	printf("nhap b: "); scanf("%f", &b);
	printf("nhap c: "); scanf("%f", &c);
 	d = b*b - 4*a*c;
    if(d<0){
        printf(" pt vo no");
    }
    else if(d==0){
        printf("phuong trinh cos no kep x= %f", -b/(2*a));
    }
    else{
    	printf(" phuong trinh cos 2 no x1 = %f \n x2 = %f",(-b + sqrt(d)) / (2*a), (-b - sqrt(d)) / (2*a));
    }
	return 0;
}
