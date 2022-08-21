#include<stdio.h>
#include<math.h>
int mang(int arr[], int n,int b){
	int vt;
	for (int i = 0; i <n; i++){
		if(arr[i]==b){
			vt=i;
		}
	}
	return vt;
}

int main(){
	int n, b;
	int arr[1000];
	printf("nhap n: ");scanf("%d", &n);
	printf("nhap b: ");scanf("%d", &b);
	for(int i =0; i<n;i++){
		printf("nhap so thu tu mang arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("%d", mang(arr, n, b));
	return 0;
}
