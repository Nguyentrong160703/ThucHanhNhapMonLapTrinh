
#include <stdio.h>
#include<conio.h>
int main()
{
	printf("Hay chon mot trong cac chuc nang ben duoi: \n");
	printf("==========================================\n");
	printf("\t1.Hinh tam giac\n\t2.Hinh kim tu thap\n\t3.Hinh tam giac nguoc");
	printf("\n==========================================");
	int chon;
	printf("\nLua chon cua ban la (1-3): ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
	{
		int sodong;
		printf("Ban da lua chon Hinh tam giac\n");
		printf("Nhap so dong: ");
		scanf_s("%d", &sodong);
		int i, j;
		for (i = 1; i <= sodong; i++) {
			for (j = 1; j <= i; j++)
				printf("* ");

			printf("\n");
		}
	}
	break;
	{
	case 2:
		int sodong;
		printf("Ban da lua chon Hinh kim tu thap\n");
		printf("Nhap so dong: ");
		scanf_s("%d", &sodong);
		int i, j;
		for (i = 1; i <= sodong; i++) {
			for (j = 1; j <= sodong - i; j++)
				printf(" ");

			for (j = 1; j <= i; j++)
				printf("* ");

			printf("\n");
		}
	}
	break;
	{
	case 3:
		int sodong;
		printf("Ban da lua chon Hinh tam giac nguoc\n");
		printf("Nhap so dong: ");
		scanf_s("%d", &sodong);
		int i, j;
		for (i = sodong; i >= 1; i--) {
			for (j = 1; j <= i; j++)
				printf("* ");

			printf("\n");
		}
	}
	break;
	default:
		printf("\n Moi ban chon lai!");
		break;
		return 0;
	}
}
