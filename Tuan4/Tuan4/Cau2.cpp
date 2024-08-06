#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int UCLN(int a, int b) {
	if (a == b) return a;
	if (a > b) return UCLN(a - b, a); else return UCLN(a, b - a);
}
int main() {
	int a, b;
	printf("Nhap vao a:");
	scanf("%d", &a);
	printf("Nhap vao b:");
	scanf("%d", &b);
	printf("Uoc chung lon nhat cua a va b:%d", UCLN(a, b));
	
}