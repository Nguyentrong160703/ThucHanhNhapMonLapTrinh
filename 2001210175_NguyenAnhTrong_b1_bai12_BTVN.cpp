#include <conio.h>
#include <stdio.h>
#include <math.h>
main ()
{
long t,bd,kt;//tien, bat dau, ket thuc
	printf("Luu Y! Gio vao phai lon hon gio ra!\n");
	printf("Gio mo cua tu 10h-24h\n");
	printf("Nhap thoi gian bat dau: ");
	scanf("%ld",&bd);
	printf("Nhap thoi gian ket thuc: ");
	scanf("%ld",&kt);
	if(kt<=17)
	{
		t = (kt - bd) * 20000 ;
		printf("So tien quy khach phai tra la: %ld",t);
	}
	else
	{
		if(bd<=17)
		{
			t = (kt - 17) * 45000 + (17 - bd) * 20000 ;
			printf("So tien quy khach phai tra la: %ld",t);
		}		
		else
		{
			t = (kt - bd) * 45000 ;
			printf("So tien quy khach phai tra la: %ld",t);
		}
	}
getch();
}
