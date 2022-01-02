#include <stdio.h>
#include <string.h>
#include <conio.h>
int tachtutrongchuoi(char str[])
{
	char * pch;
	pch = strtok (str," ,.-");
	while (pch != NULL)
	  {
		printf ("%s\n",pch);
		pch = strtok (NULL, " ,.-");
	  }
}
int main ()
{
  char str[100] ;
  printf("nhap chuoi\n");
  gets(str);
  printf ("tach chuoi \"%s\" thanh tung tu:\n",str);
  tachtutrongchuoi(str);
  getch();
  return 0;
}
