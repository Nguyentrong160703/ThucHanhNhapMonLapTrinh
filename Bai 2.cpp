#include<stdio.h>
#include<conio.h>

int main()
{
	int luachon;
	do
	{
		printf("**************************************\n");
		printf("\tMENU CHUC NANG\n");
		printf("1. In ra man hinh tu Hello. \n");
		printf("2. In ra man hinh Vong lap for \n");
		printf("3. In ra man hinh Vong lap while \n");
		printf("4. Thoat chuong trinh \n");
		printf("**************************************\n");
		printf("Ban chon chuc nang nao: ");
		scanf_s("%d", &luachon);
		switch(luachon)
		{
			case 1: printf("HELLO \n");
				break;
			case 2: printf("Vong lap FOR \n");
				break;
			case 3: printf("Vong lap WHILE \n");
				break;
			case 4: printf("Thoat chuong trinh\n");
				break;
		}
	} while (luachon != 4);
}
