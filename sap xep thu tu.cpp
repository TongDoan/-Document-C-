#include<stdio.h>
#include<math.h>

int main() {
	int n,i;
	int a[100];
	printf("nhap n: "), scanf("%d", &n);
	for ( i =1; i<=n;i++){
		printf("nhap a[%d]: ",i),scanf("%d", &a[i]);
	}
	printf("day vua nhap la: ");
	for (i =1; i<=n;i++){
		printf("%d\t",a[i]);
	}
	int dem=0;
	float s=0;
	for(i=1;i<=n;i++){
		if(a[i] % 2 !=0 && a[i]>3){
			s=s+a[i];
			dem++;
		}
	}
	if(dem==0){
		printf("\nk co so le lon hon 3");
	}
	else {
		printf("\ntrung cong la: %.2f",float(s/dem));
		}
	
	
	for (i=1; i<=n; i++){
		for ( int j = i+1; j <= n; j++){
			if(a[i] < a[j]){
			int temp = a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	printf("\nday da xap xep la: ");
	for ( i = 1; i<=n; i++){
		printf ("%d\t", a[i]);
	}
	int b[100],k=1;
	for (i = 1; i <=n;i++){
	if (a[i] % 2 != 0){
  		b[k] = a[i];
 		 k++;
		 }
	}
	 for (i = 1; i <k; i++){
	 	a[i] = b[i];
	}
 		printf("\nmang sau khi xoa cac so chan la: \n");
 	for (i = 1; i <k; i++){
	  printf(" %d ", a[i]);
	  }
	return 0;
}

