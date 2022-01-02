#include <stdio.h>
#include <conio.h>
#include <string.h>
int xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

int daonguocchuoi(char x[])
{
	
	size_t len = strlen(x);
	for(int i=0; i<len/2; i++)
	{
		char temp = x[i];
		x[i]=x[len-i-1];
		x[len-i-1] = temp;
	}
}

int main(){
	char s[50]="";
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
	xoaXuongDong(s);
	printf("\ns = %s", s);
	daonguocchuoi(s);
	printf("\ns = %s", s);
	_getch();
	return 0;
}
