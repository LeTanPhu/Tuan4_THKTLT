#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int CapSoCong(int n,int a,int r) {
	if (n == 1) return a;
	else return CapSoCong(n - 1, a, r)+r;
}
int main() {
	int n, a, r;
	printf("Nhap vao phan tu n:");
	scanf("%d", &n);
	printf("Nhap vao so hang a:");
	scanf("%d", &a);
	printf("Nhap vao cong sai r:");
	scanf("%d", &r);
	printf("Cap so cong cua a thu n:%d", CapSoCong(n, a, r));
}