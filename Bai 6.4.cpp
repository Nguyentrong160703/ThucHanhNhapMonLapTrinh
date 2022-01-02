#include <stdio.h>
#include<math.h>

int SNT(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void TongSNTnhohonN(int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (SNT(i))
		{
			printf("\t+) So nguyen to nho hon %d la %d\n", n,i);
			s += i;
		}
	}
	printf("\t==>Tong cac so nguyen to nho hon %d la: %d\n",n, s);
}
int main()
{
	int n, s = 0, i;
	printf("\n\tTONG CAC SO NGUYEN TO NHO HON N");
	printf("\n - Nhap n: "); scanf_s("%d", &n);
	SNT(n);
	TongSNTnhohonN(n);
	return 0;
}