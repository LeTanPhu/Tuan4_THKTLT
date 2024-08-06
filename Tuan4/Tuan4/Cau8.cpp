#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int Fibo(int n) {
	if (n <= 2) return 1;
	return Fibo(n - 1) + Fibo(n - 2);
}
void XuatFibo(int m) {
	int i = 1,fibo;
	while (1)
	{
		fibo = Fibo(i);
		if (fibo >= m) break;
		printf("%d\t", fibo);
		i++;
	}
	printf("\n");
}
int main() {
	int n;
	printf("Nhap vao phan tu n:");
	scanf("%d", &n);
	printf("\nDay so Fibo nho hon m:\n");
	XuatFibo(n);
}