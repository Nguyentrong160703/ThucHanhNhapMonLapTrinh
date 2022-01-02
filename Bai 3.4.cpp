#include<stdio.h>
#include<math.h>

float LuyThua(float x, int n)
{
	if (n == 0)
		return 1;
	return x * LuyThua(x, n - 1);
}
int main()
{
	float x, z;
	int n;                
	printf("Nhap vao co so x: ");
	scanf_s("%f", &x);
	printf("Nhap vao so mu n: ");
	scanf_s("%d", &n);
	z = LuyThua(x, n);
	printf("%.1f^%d = %.1f", x, n, z);
}