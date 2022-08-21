#include <stdio.h>

int countOddNumberInArray(int arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	int arr[1000];
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("nhap so thu tu %d: ", n);
		scanf("%d", &arr[i]);
	}
	printf("%d", countOddNumberInArray(arr, n));
	return 0;
}
