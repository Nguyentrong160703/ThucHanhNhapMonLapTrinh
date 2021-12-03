#include<stdio.h>
#include<math.h>

int main()
{
	int n, dem = 0;
	int a, b, c;
	do {
		printf("Nhap vao n: "); scanf_s("%d", &n);
		a = n / 100;
		b = n % 100 / 10;
		c = n % 10;
		dem++;
	} while (a != b && b != c && a != c && n < 1000);
	printf("Da nhap %d so!\n", dem-1);
}