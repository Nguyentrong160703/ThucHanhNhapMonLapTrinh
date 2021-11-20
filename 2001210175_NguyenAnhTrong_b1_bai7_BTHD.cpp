#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a;
	printf("nhap vao so nguyen:\n ");
	scanf_s("%d", &a);
	if (a%2==0)
	{
		printf(" so %d la so chan", a);

	}
	else
	{
		printf("so %d la so le", a);
	}
	return 0;
}