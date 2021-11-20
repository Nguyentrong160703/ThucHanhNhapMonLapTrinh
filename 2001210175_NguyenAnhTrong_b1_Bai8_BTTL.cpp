#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float x;
	printf("\nNhap x: ");
	scanf("%f", &x);

	float f = (3 * pow(x, 5) + sqrt(x + 1)) / (5 * pow(x, 2) - 3);
	printf("\n f(%.0f)= %.2f", x, f);
	getch();
}

