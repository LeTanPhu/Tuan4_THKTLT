#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int TongDQ(int n) {
	if (n == 1) return 1;
	else return n+TongDQ(n - 1);
}
int TongKhuDQ(int n) {
	int tong = 0;
	for (int i = 0; i <= n; i++)
	{
		tong += i;
	}
	return tong;
}
float TongPSKhuDQ(int n) {
	float tong1 = 0;
	for (float i = 1; i <=n; i++)
	{
		float tinh = i / (i + 1);
		tong1 = tong1 + tinh;
	}
	return tong1;
}
int main() {
	int n;
	printf("Nhap vao n:");
	scanf("%d", &n);
	printf("\nKet qua cua tong (DQ):%d", TongDQ(n));
	printf("\nKet qua cua tong (Khu DQ):%d", TongKhuDQ(n));
	printf("\nKet qua cua tong phan so:%.2f", TongPSKhuDQ(n));
	getch();
}