//Tính S(n) = 1/2 + 3/4 + ... + (2n + 1)/(2n + 2)
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int i;
	float s = 0;
	int n;
	printf("nhap n (n>=1): ");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
		s += (float)((2 * i) + 1) / ((2 * i) + 2);
	{
		printf("S(n) = 1/2 + 3/4 + ... + (2n + 1)/(2n + 2) = %.2f\n", s);
	}
	return 0;
}
