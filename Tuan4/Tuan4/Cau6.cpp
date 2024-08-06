#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int DemSo(int n) {
	if (n == 0) return 0;
	return 1 + DemSo(n / 10);
}
int main() {
	int n,m=10;
	printf("Nhap vao phan tu n:");
	scanf("%d", &n);
	printf("Ket qua cua day n:%d", DemSo(n));
}