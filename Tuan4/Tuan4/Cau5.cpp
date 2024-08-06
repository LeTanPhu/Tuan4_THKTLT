#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int TinhDayn(int n) {
	if (n == 0) return 1;
	if (n == 1) return 2;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (n - i) * TinhDayn(i);
	}
	return sum;
}
int main() {
	int n,m=10;
	printf("Nhap vao phan tu n:");
	scanf("%d", &n);
	printf("Ket qua cua day n:%d", TinhDayn(n));
}