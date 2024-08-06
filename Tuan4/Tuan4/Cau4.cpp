#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int TongQuyNapa(int n) {
	if (n == 0) return 1;
	if (n == 1) return 0;
	if (n == 2) return -1;
	return 2 * TongQuyNapa(n - 1) - 3 * TongQuyNapa(n - 2) - TongQuyNapa(n - 3);
}
int TongQuyNapb(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 3;
	return 2 * TongQuyNapb(n-1 ) + 3 * TongQuyNapb(n - 2) - 3*TongQuyNapb(n-3);
}
int main() {
	int n,m=10;
	printf("Nhap vao phan tu n:");
	scanf("%d", &n);
	printf("Tong quy nap:%d", TongQuyNapa(n));
	printf("\nTong quy nap b:%d", TongQuyNapb(m));
}