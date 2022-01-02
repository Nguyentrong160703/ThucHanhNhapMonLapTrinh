#include<stdio.h>

void giaithua(int n)
{
	int a, gt = 1;
	for (a = 1; a <= n; a++) 
		gt *= a;
	printf("Giai thua cua %d = %d\n", n, gt);
}
int main()
{
	int n;
	printf(" Enter n: "); scanf_s("%d", &n);
	giaithua(n);
	return 0;
}