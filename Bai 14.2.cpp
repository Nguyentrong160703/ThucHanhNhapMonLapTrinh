#include <stdio.h>
#include <conio.h>

int main()
{
  int i;
  printf("\n\t\t CHUONG TRINH KIEM TRA KY TU MA HEXA\n\n");

 char ch;
  printf("\t- Nhap vao ky tu ma hex: "); scanf_s("%c",&ch);

  switch (ch)
  {
   case 'A': printf("\n\t=> Ky tu A co ma hex la 10");
       break;
   case 'B': printf("\n\t=> Ky tu B co ma hex la 11");
       break;
   case 'C': printf("\n\t=> Ky tu C co ma hex la 12");
       break;
   case 'D': printf("\n\t=> Ky tu D co ma hex la 13");
       break;
   case 'E': printf("\n\t=> Ky tu E co ma hex la 14");
       break;
   case 'F': printf("\n\t=> Ky tu F co ma hex la 15");
       break;
   default : printf("\n\t=> He thap luc phan khong dung ky so nay!");
   }
 return 0;
}
