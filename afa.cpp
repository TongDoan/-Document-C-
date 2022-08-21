#include<stdio.h>
#include<conio.h>
int a[100], b[100];
int main()
{
 int i, n, k=1;
 printf("nhap so phan tu cua mang: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
  printf("a[%d]= ", i );
  scanf("%d", &a[i]);
 }
 printf("mang da nhap la: \n");
 for (i = 1; i <= n; i++) printf(" %d ", a[i]);
 for (i = 1; i <=n;i++)
 if (a[i] % 2 != 0)
 {
  b[k] = a[i];
  k++;
 }
 for (i = 1; i < k; i++) a[i] = b[i];
 printf("\nmang sau khi xoa cac so chan la: \n");
 for (i = 1; i < k; i++) printf(" %d ", a[i]);
 getch();
}
