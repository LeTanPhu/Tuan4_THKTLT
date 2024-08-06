#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int TongDQ(int n) {
	if (n == 1) return 1;
	else return n + TongDQ(n - 1);
}
float TongDQPS(int n) {
	if (n == 1) return 0.5; else
		return (float)n / (n + 1) + TongDQPS(n - 1);
}
float TongDQS3(int n) {
	if (n == 0) return 1; else return (float)1 / (2*n + 1) + TongDQS3(n - 1);
}
int TongDQS4(int n) {
	if (n == 1) return 2; else return (n* (n + 1)) + TongDQS4(n - 1);
}
int main() {
	int n;
	printf("Nhap vao n:");
	scanf("%d", &n);
	printf("\nKet qua cua tong (DQ):%d", TongDQ(n));
	printf("\nKet qua cua tong PS:%.2f", TongDQPS(n));
	printf("\nKet qua cua tong 1/2n+1:%.2f", TongDQS3(n));
	printf("\nKet qua cua tong n*(n+1):%d", TongDQS4(n));
	getch();
}
