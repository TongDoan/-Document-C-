#include<stdio.h>

int main() {
    int n;
    int a[1000];
    int S = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    for (int i = 0;i<n;i++){
    	printf("nhap so thu tu %d: ",n);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n;i++){
        if(a[i] % 2 != 0 && a[i]>0){
            S += a[i];
        }
    }
    printf("%d", S);
    return 0;
}
