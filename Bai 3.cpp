#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("\n Nhap vao 1 so nguyen duong:");
	scanf_s("%d", &n);
	int tong = 0;
	while (n > 0)
	{
		tong = tong + n % 10;
		n = n / 10;
	}
	printf("tong cac chu so trong n la: %d", tong);
	return 0;
}