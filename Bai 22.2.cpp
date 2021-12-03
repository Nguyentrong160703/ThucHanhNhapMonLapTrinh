//Nhap x, n. Tinh S(x,n)=-x+x^2-x^3+ ... +(-1)^n.x^n
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i, n, x,s=0;
	printf("Nhap n: ");scanf_s("%d",&n);
	printf("Nhap x: ");scanf_s("%d",&x);
	for(i=1; i<=n; i++)
		s=s+pow((-1),i)*pow(x,i);
	printf("\nS(%d,%d)=-x+x^2-x^3+ ... +(-1)^nx^n = %3d",x,n,s);
	return 0;
}
