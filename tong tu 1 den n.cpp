#include<stdio.h>

// Khai báo hàm sum v?i ki?u tr? v? là int và d?u vào là s? n
int sum(int n) {
	// Bi?n luu tr? t?ng các s? t? 1 t?i n
	int add = 0;
	// Tính t?ng các s? t? 1 t?i n và luu vào bi?n add
	for (int i = 1; i <= n; i++) {
		add += i;
	}
	// Tr? v? add (gán k?t qu? c?a hàm sum cho add)
	return add;
}

int main() {
	// Hi?n th? giá tr? c?a hàm sum v?i các d?u vào khác nhau ra màn hình
	printf("%d %d %d", sum(3), sum(4), sum(5));
	return 0;
}
