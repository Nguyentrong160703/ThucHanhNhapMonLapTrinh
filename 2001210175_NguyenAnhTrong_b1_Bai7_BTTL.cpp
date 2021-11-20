#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float x;
	printf("\nNhap x: ");
	scanf("%f", &x);

	float f = (3 * pow(x, 2) + 4 * x + 5) / (2 * x + 1);
	printf("\n f(%.0f)= %.2f", x, f);

	getch();
}

