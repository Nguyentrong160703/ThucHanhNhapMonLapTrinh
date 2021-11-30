//Tính S(n) = 1/2 + 3/4 + ... + (2n + 1)/(2n + 2)
#include<stdio.h>
#include<conio.h>

int main()
{
	float s=0, i, n;
	printf("Moi nhap n: ");
	scanf_s("%d", &n);
	for(i=0; i<=n; i++)
		s=s+(2*i+1)/(2*i+2);
	printf("S(n) = 1/2 + 3/4 + ... + (2n + 1)/(2n + 2) = %.2f", s);
	_getch();
}
