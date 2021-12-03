#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	int SoNguyen = 0;
	//Nhập vào n với giá trị phải lớn hơn 0
	do
	{
		printf("Nhap n = "); scanf_s("%d", &n);
	} while (n < 0);
	//Đếm số chẵn
	while (n != 0)
	{
		int giatri = n % 10;
		if (giatri % 2 == 0)
			SoNguyen++;
		n /= 10;
	}
	printf("So luong cac chu so chan la: %d",SoNguyen);
}