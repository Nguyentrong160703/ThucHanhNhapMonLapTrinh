#include<stdio.h>
#include<conio.h>
int main()
{
	float x;
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	printf("Phan nguyen cua x la: %d",(int)x);
	printf("\nSo thuc voi 2 so thap phan: %.2f",x);
	printf("\nSo thuc voi 2 so thap phan(khongh in phan nguyen): %.2f",x-(int)x);
	int tong = (int)x;
	//So thap phan thu nhat
	x = (x - (int)x) * 10;
	tong = tong + (int)x;
	printf("\nSo thap phan thu nhat: %d\n", (int)x);
	
	//So thap phan thu hai
	x = (x - (int)x) * 10;
	tong = tong + (int)x;
	printf("So thap phan thu hai: %d\n", (int)x);

	printf("Tong cua phan nguyen va hai so thuc: %d", tong);
}
