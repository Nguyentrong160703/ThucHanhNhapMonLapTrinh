#include <stdio.h>

int main()
{
	int n, sum = 0;
	printf("\nNhap vao so nguyen duong n: ");
	scanf_s("%d", &n);
	int i = 0;
	while (i < n) 
	{
		sum += i;
		i ++;
	}
	printf("Tong cac so tu nhien nho hon %d = %d", n, sum);
}