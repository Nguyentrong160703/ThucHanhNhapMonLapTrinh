#include <stdio.h>
#include <conio.h>
int main()
{
	int SoBinhNuoc, GioVao, GioRa, phutVao, phutRa;
	float TienPhaiTra;
	int Gio = 200000;
	int Binhnuoc = 20000;
	float phut=Gio/60;
	printf("\tTINH TIEN THUE SAN BONG DA\n");
	printf("+) Don gia 1 gio:200000vnd\n");
	printf("+) Don gia 1 binh nuoc:20000vnd\n");
	printf("Luu y!  Gio vao phai lon hon gio ra!\n");
	printf("nhap gio vao san: ");
	scanf("%d", &GioVao);
	printf("nhap phut vao san: ");
	scanf("%d", &phutVao);
	printf("\nnhap gio ra: ");
	scanf("%d", &GioRa);
	printf("nhap phut ra: ");
	scanf("%d", &phutRa);
	printf("\nnhap vao so binh nuoc da uong: ");
	scanf("%d",&SoBinhNuoc);
	TienPhaiTra=((GioRa-GioVao)*Gio+((phutRa-phutVao)*phut)+(SoBinhNuoc*Binhnuoc));
	printf("\nTong so tien phai tra la: %.0f",TienPhaiTra);
	return 0;
	
}
