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
int main() {
	int n;
	printf("Nhap vao n:");
	scanf("%d", &n);
	printf("\nKet qua cua tong:%d", TongDQ(n));
	printf("\nKet qua tong cua phan so:%d", TongKhuDQ(n));
	getch();
}