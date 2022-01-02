#include<stdio.h> 
#include<conio.h> 
void nhapchuoi(char chuoi[])
{
	printf("Nhap chuoi: "); 
	scanf("%s",chuoi);
}
void xuatchuoi(char chuoi[]) 
{
 printf("chuoi vua nhap: %s", chuoi);
}
int main()
{
	char masv[10], hoten[30]; 
	nhapchuoi(masv); 
	xuatchuoi(masv); 
	getch();
}
