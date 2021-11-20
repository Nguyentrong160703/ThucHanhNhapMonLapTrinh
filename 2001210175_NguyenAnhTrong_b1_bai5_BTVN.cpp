#include<stdio.h>
#include<conio.h>
int main()
{
	char chr;
	printf("Nhap vao 1 ky tu = ");
	scanf("%c", &chr);
  if((chr>= 'a') && (chr<='z')){
    printf("Chu thuong!\n");
  }
  else if((chr>= 'A') && (chr<='Z')){
    printf("Chu hoa!\n");
  }
  else {
    printf("Ky tu khac!\n");
  }

}

