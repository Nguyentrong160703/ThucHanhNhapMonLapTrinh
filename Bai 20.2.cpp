// Nhap x, n. Tính T(x,n)=x^n
#include<stdio.h>
#include<conio.h>

int main()
{
	int i, n, x,t=1;
	printf("Nhap n: ");scanf_s("%d",&n);
	printf("Nhap x: "); scanf_s("%d",&x);
	for(i=1; i<=n; i++)
		t=t*x;
	printf("\n Tich (x,n) = %3d", t,x,n);
	return 0;
}
