#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.14
int main()
{
	float r, c, s;
	printf("nhap ban kinh: \n");
	scanf_s("%f", &r);
	c = 2 * pi * r;
	s = pi * r * r;
	printf(" chu vi hinh tron la %.2f \n dien tich hinh tron la %.2f", c, s);

}