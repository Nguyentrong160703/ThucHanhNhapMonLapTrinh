//S(n)= 1 + 1 / 3 + 1 / 5 + ... + 1 / (2n + 1)
#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	float s=0;
	printf("Moi nhap n: "); scanf_s("%d",&n);
	for(int i=0; i<=n; i++)
	{
		s=s+1/(float)(2*i+1);
	}
	printf("\n S(n)= 1 + 1 / 3 + 1 / 5 + ... + 1 / (2n + 1) = %.2f",s);
	return 0;
}
