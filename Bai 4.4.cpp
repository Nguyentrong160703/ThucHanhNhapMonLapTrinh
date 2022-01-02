#include<stdio.h>
#include<math.h>

int DienTich(int a, int b, int c) 
{
	float p, dientich, chuvi;
	chuvi = (float)(a + b + c);
	printf("Chu vi: %.1f", chuvi);
	p = chuvi / 2;
	dientich = (float)sqrt(p * (p - a) * (p - b) * (p - c));
	printf("\nDien tich = %.1f", dientich);
	return 0;
}
int main()
{
	int a, b, c;
	printf("Nhap a: "); scanf_s("%d", &a);
	printf("Nhap b: "); scanf_s("%d", &b);
	printf("Nhap c: "); scanf_s("%d", &c);
	DienTich(a, b, c);
}