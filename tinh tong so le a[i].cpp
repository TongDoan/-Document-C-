#include<stdio.h>

int main() {
    int n;
    int a[1000];
    int sum = 0;
    scanf("%d", &n);
    for (int i=0; i<n;i++){
    	printf("nhap thu tu: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i<n; i++){
        if (a[i]%2 !=0 && a[i]>0){
            sum += a[i];
        }
    }
    printf("%d", sum);
    return 0;
}

