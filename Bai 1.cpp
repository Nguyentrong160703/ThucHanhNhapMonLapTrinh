#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	printf("Nhap a = "); scanf_s("%d", &a);
	printf("Nhap b = "); scanf_s("%d", &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("UCLN la: %d\n", a);
	return 0;
}