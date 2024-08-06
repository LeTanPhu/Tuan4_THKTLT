#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int Fibo(int n) {
	if (n <= 2) return 1;
	return Fibo(n - 1) + Fibo(n - 2);
}
int main() {
	int n,m=10;
	printf("Nhap vao phan tu n:");
	scanf("%d", &n);
	printf("Ket qua cua day n:%d", Fibo(n));
}