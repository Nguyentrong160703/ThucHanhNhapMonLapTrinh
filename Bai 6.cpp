#include <stdio.h>
#include <conio.h>
int main()
{
	int choose;
	printf("******************************************");
	printf("\nChon 1 trong 3 lua chon sau\n");
	printf("\t1.In ra man hinh Xin chao cac ban\n");
	printf("\t2.Chuc nang doi do C sang do F\n");
	printf("\t3.Chuc nang tinh chu vi dien tich hinh tron\n");
	printf("******************************************");
	printf("\nLua chon cua ban la: ");
	scanf("%d",&choose);
	switch(choose)
	{
	case 1:printf("Xin chao cac ban");break;
	case 2:
		{
			int c;
			printf("\tBan da chon chuc nang doi do C sang do F\n");
			printf("\tHay nhap gia tri nhiet do (do C): ");
			scanf("%d",&c);
			int f=(c*1.8)+32;
			printf("\t\tGia tri do F la: %d",f);
			break;
		}
	case 3:
		{
			int r;
			const int pi=3.14;
			printf("Ban da chon chuc nang tinh chu vi dien tich hinh tron\n");
			printf("\tHay nhap vao ban kinh hinh tron: ");
			scanf("%d",&r);
			int chuvi_tron=r*pi;
			int dientich_tron=2*pi*r*r;
			printf("\tKet qua:\n\t\tChu vi hinh tron: %d",chuvi_tron);
			printf("\tKet qua:\n\t\tDien tich hinh tron: %d",dientich_tron);
			break;
		}
	default :printf("Lua chon khong hop le");
	}
	getch();
}
