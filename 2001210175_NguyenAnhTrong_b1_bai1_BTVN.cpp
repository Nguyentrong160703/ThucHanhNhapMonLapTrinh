#include<stdio.h>
#include<conio.h>
int main()
{
	float x;
	int tong= x + (x-(int)x);
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	printf("Phan nguyen cua x la: %.0f",x);
	printf("\nSo thuc voi 2 so thap phan: %.2f",x);
	printf("\nSo thuc voi 2 so thap phan(khongh in phan nguyen): %.2f",x-(int)x);
	printf("\n Tong cua phan nguyen voi 2 so thap phan la: %.2f", tong);
}
