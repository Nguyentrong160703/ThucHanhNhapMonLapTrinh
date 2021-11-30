//Tinh S(n) = 1/1x2 + 1/2x3 +...+ 1/n x (n + 1)
#include<stdio.h>
#include<conio.h>

int main()
{
	float i, n, s=0;
	printf("Moi nhap n: "); scanf_s("%f",&n);
	for(i=1; i<=n; i++)
		s+=1/(i*(i+1));
	printf("\n S(n) = 1/1x2 + 1/2x3 +...+ 1/n x (n + 1)= %.2f", s);
	_getch();
}
