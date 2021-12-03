//Tinh S(n) = 1 + 1/2 + 1/3 + ... + 1/n
#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	float s=0;
	printf("Moi nhap n: "); scanf_s("%d",&n);
	for(int i=1; i<=n; i++)
	{
		s += 1 /(float)i;
	}
	printf("\n S(n) = 1 + 1/2 + 1/3 + ... + 1/n = %.2f",s);
	return 0;
}
