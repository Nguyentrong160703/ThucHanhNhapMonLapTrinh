//Tinh S(n)=1/2 + 2/3 + .... + n/n+1
#include<stdio.h>
#include<conio.h>

int main()
{
	float s=0;
	int i,n; 
	printf("\nNhap n: ");
	scanf_s("%d",&n);
	for(i=1;i<=n;i++)
		s+=(float)(i-1)/i;
	printf("\nS(n)=1/2 + 2/3 + .... + n/n+1 = %5.2f", s);
	_getch();
	return 0;
}
	
