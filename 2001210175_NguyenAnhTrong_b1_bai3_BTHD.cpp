#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a, b, tong, hieu, tich;
	float thuong;
	scanf_s("%d%d", &a, &b);
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;
	printf("phep cong la %d\n phep tru la %d\n phep nhan la %d\n phep chia la %.2f\n", tong, hieu, tich, thuong);
	return 0;
}