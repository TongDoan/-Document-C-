#include<stdio.h>

int main() {
	int arr[100][100];
	int n, m;
	printf("nhap n: ");scanf("%d", &n);
	printf("nhap m: ");scanf("%d", &m);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
				printf("nhap so thu tu %d, %d: ",i,j);scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(a[i][j] % 5 == 0){
			sum += arr[i][j];
		    }
		}
	}

	printf("%d", sum);

	return 0;
}
//#include<stdio.h>

//int main() {
//	int arr[100][100];
//	int n, m;

//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}

//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			sum += arr[i][j];
//		}
//	}

//	printf("%d", sum);

//	return 0;
//}
