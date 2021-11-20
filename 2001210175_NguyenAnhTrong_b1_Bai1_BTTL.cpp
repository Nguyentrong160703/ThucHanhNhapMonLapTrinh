#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	float a;
	printf("nhap vao 1 so thuc:\n");
	scanf_s("%f", &a);
	int x = (int) a;
	printf("phan nguyen cua so thuc la %d", x);
}