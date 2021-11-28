//Tinh S(n) = 1 + 1/2 + 1/3 + ... + 1/n
#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	float s=0;
	printf("Moi nhap n: "); scanf("%d",&n);
	for(int i=0; i<=n; i++)
	{
		s = s + 1 /i;
	}
	printf("\n S(n) = 1 + 1/2 + 1/3 + ... + 1/n = %.2f",s);
	getch();
	return 0;
}
