#include <stdio.h>
#include <conio.h>
int main()
{
	int kiTu;
	printf("nhap ma ASCII: \n");
	scanf("%d", &kiTu);
	((kiTu >= 65 && kiTu <= 90)) || ((kiTu >= 97 && kiTu <= 122)) ? (printf("la chu cai")) : (printf("Ky tu : % c", kiTu));
}
