#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c, d;
	printf("nhap a: "); scanf("%d", &a);
	printf("nhap b: "); scanf("%d", &b);
	printf("nhap c: "); scanf("%d", &c);
 	d = b*b - 4*a*c;
    if(d<0){
        printf("vo no");
    }
    else if(d==0){
        printf("x= %f", -b/(2*a));
    }
    else{
    	printf(" x1 = %f \n x2 = %f",(-b + sqrt(d)) / (2*a), (-b - sqrt(d)) / (2*a));
    }
	return 0;
}
