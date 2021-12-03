#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,ketqua=0;
	printf("Moi nhap so A: "); scanf_s("%d",&a);
	printf("Moi nhap so B: "); scanf_s("%d",&b);
	_flushall();
	char pt;
	printf("Moi nhap phep tinh (+,-,x,/): "); scanf_s("%c", &pt);
	switch(pt)
	{
		case '+':
			ketqua = a+b;
			break;
		case '-':
			ketqua = a-b;
			break;
		case '*':
			ketqua = a*b;
			break;
		case '/':
			ketqua =(float)a/(float)b;
			break;
	}
	printf("\nKet qua cua phep toan la %d", ketqua);
	return 0;
}

