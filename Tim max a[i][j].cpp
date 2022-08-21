#include<stdio.h>

int main() {
	int i, j, n, m;
	float a[10][10], max;
	printf("\nnhap n: ");
	scanf ("%d", &n);
	printf("\nnhap m: ");
	scanf("%d", &m);
	for (i=0; i<n;i++){
		for (j=0; j<n;j++){
			printf("nhap so thu tu %d, %d: ",i,j); scanf("%f", &a[i][j]);
		}
	}
	max=a[0][0];
	for (i=0; i<n;i++){
		for (j=0; j<n;j++){
			if (max<a[i][j]){
				max= a[i][j];
			}
		}
	}
	printf("\n maxx la: %.2f", max);
	}
