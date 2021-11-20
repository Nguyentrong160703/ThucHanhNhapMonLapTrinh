#include <stdio.h>
#include <math.h>
#include<conio.h>
int main()
{
	int i = 1;
	printf("i=%d\n", i);
	int bt = 10 + ++i;
	printf("ket qua cua bieu thuc 10 + ++i la %d\n gia tri cua i la %d", bt, i);
	i = 1;
	printf("khoi tao lai gia tri i = %d\n", i);
	bt = 10 + i++;
	printf("ket qua cua bieu thuc 10 + i++ la %d\n gia tri cua i la %d", bt, i);
	return 0;

}