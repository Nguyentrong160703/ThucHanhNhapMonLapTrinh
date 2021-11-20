#include <stdio.h>
#include <conio.h>
int main()
{
	int Songaythue;
	float tienphaitra;
	int tuan = 500000;
	int ngay = 100000;
	printf("Tinh tien thue phong\n");
	printf("Don gia tuan:500000. Don gia ngay:100000\n");
	printf("nhap vao tong so ngay thue phong: ");
	scanf("%d", &Songaythue);
	int sotuan=Songaythue/7;
	int songayle= Songaythue%7;
	printf("So tuan thue: %d,  So ngay thue: %d\n", sotuan,  songayle);
	tienphaitra= (Songaythue / 7 * 500000) + (Songaythue % 7 * 100000);
	printf("Tien phai tra: %.0f", tienphaitra);

	return 0;
	
}
