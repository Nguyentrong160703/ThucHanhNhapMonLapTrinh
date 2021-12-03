#include <stdio.h> 
#include <conio.h>

int main()
{
	printf("******************************************");
	printf("\nHay lua chon cac hinh sau de tinh chu vi va dien tich:\n");
	printf("\t1.Hinh vuong\n\t2.Hinh chu nhat\n\t3.Hinh tron\n");
	printf("******************************************");
	int chon;
	printf("\nLua chon cua ban la (1-3): ");
	scanf_s("%d",&chon);
	switch(chon)
	{
	case 1:
		{
		int x;
		printf("Ban da lua chon hinh vuong\n");
		printf("\tHay nhap vao do dai canh hinh vuong: ");
		scanf_s("%d",&x);
		int dientich_hv=x*x;
		int chuvi_hv=4*x;
		printf("\tKet qua:\n\t\tChu vi hinh vuong: %d\n",chuvi_hv);
		printf("\tKet qua:\n\t\tDien tich hinh vuong: %d",dientich_hv);
		break;
		}
	case 2:
		{
		int a,b;
		printf("Ban da lua chon hinh chu nhat\n");
		printf("\tHay nhap vao do dai hai canh hinh chu nhat: ");
		scanf_s("%d%d",&a,&b);
		int dientich_hcn=a*b;
		int chuvi_hcn=2*(a+b);
		printf("\tKet qua:\n\t\tChu vi hinh chu nhat: %d\n",chuvi_hcn);
		printf("\tKet qua:\n\t\tDien tich hinh chu nhat: %d",dientich_hcn);
		break;
		}
	case 3:
		{
		int r;
		const int pi=3.14;
		printf("Ban da lua chon hinh tron\n");
		printf("\tHay nhap vao ban kinh hinh tron: ");
		scanf_s("%d",&r);
		int chuvi_tron=r*pi;
		int dientich_tron=2*pi*r*r;
		printf("\tKet qua:\n\t\tChu vi hinh tron: %d\n",chuvi_tron);
		printf("\tKet qua:\n\t\tDien tich hinh tron: %d\n",dientich_tron);
		break;
		}
	default :printf("Lua chon khong hop le");
	}
	return 0;
}
