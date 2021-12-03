#include<stdio.h>
#include<math.h>
int main()
{
	float a, b;
	float x;
	printf("\nNhap a: ");
	scanf_s("%f", &a);
	printf("\nNhap b: ");
	scanf_s("%f", &b);
	if (a == 0)
	{
		if (b == 0)
			printf("\nPT co vo so nghiem");
		else
			printf("\nPT vo nghiem");
	}
	else
	{
		x = -b / a;
		printf("\nPT co 1 nghiem la %.2f", x);	}}