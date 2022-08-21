#include <stdio.h>
 
void nhapMang(int a[], int n) 
{
    int i;
    // thuc hien nhap tung phan tu mang
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void xuatMang(int a[], int n) 
{
    int i;
    for (i = 0; i < n; i++) {
        printf ("%d \t", a[i]);
    }
}
 
int main() 
{
    // khai bao mang a co n phan tu
    int n ;
    int a[100];
    scanf("%d", &n);
    nhapMang(a, n);
    xuatMang(a, n);
 
    return 0;
}
