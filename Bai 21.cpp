//Nhap x, n. T�nh S(x,n)=x+x^2+ x^3 + ... +x^n
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i, n, x,s=0;
	printf("Nhap n: ");scanf("%d",&n);
	printf("Nhap x: "); scanf("%d",&x);
	for(i=1; i<=n; i++)
		s=s+pow(x,i);
	printf("\nS(%d,%d)=x+x^2+ x^3 + ... +x^n = %3d",x,n,s);
	getch();
}