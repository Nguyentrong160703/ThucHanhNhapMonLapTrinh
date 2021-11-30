#include <stdio.h> 
#include <conio.h>
int main()
{
	int a;
	printf("Nhap vao so tu nhien bat ki (0-9): ");
	scanf_s("%d",&a);
	switch(a)
	{
		case 0:printf("Cach doc so vua nhap: Khong");break;
		case 1:printf("Cach doc so vua nhap: Mot");break;
		case 2:printf("Cach doc so vua nhap: Hai");break;
		case 3:printf("Cach doc so vua nhap: Ba");break;
		case 4:printf("Cach doc so vua nhap: Bon");break;
		case 5:printf("Cach doc so vua nhap: Nam");break;
		case 6:printf("Cach doc so vua nhap: Sau");break;
		case 7:printf("Cach doc so vua nhap: Bay");break;
		case 8:printf("Cach doc so vua nhap: Tam");break;
		case 9:printf("Cach doc so vua nhap: Chin");break;
		default:printf("Gia tri khong hop le");
	}
	_getch();
}
