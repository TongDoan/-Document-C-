#include<stdio.h>

// Khai b�o h�m sum v?i ki?u tr? v? l� int v� d?u v�o l� s? n
int sum(int n) {
	// Bi?n luu tr? t?ng c�c s? t? 1 t?i n
	int add = 0;
	// T�nh t?ng c�c s? t? 1 t?i n v� luu v�o bi?n add
	for (int i = 1; i <= n; i++) {
		add += i;
	}
	// Tr? v? add (g�n k?t qu? c?a h�m sum cho add)
	return add;
}

int main() {
	// Hi?n th? gi� tr? c?a h�m sum v?i c�c d?u v�o kh�c nhau ra m�n h�nh
	printf("%d %d %d", sum(3), sum(4), sum(5));
	return 0;
}
