#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b;
	printf("nhap vao 2 so a, b: \n");
	scanf_s("%d%d", &a, &b);
	if (a>b)
	{
		printf("max=%d", a);

	}
	else
	{
		printf("max=%d", b);
	}

}