#include<stdio.h>
#include<math.h>

int main()
{
	int n, m = 0, s = 0;
	printf("Nhap n = "); scanf_s("%d", &n);
	do
	{
		m = m + 1;
		s += m;
	} while (s + m + 1 > n);
	printf("So nguyen duong n la: %d\n", n);
	return 0;
}