#include<stdio.h>
#include<conio.h>

int main()
{
    int cot1,cot2,cot3,cot4, hs=10;
    float tb;
    printf("\nNhap diem cot 1: ");
    scanf_s("%d",&cot1);
    printf("\nNhap diem cot 2: ");
    scanf_s("%d",&cot2);
    printf("\nNhap diem cot 3: ");
    scanf_s("%d",&cot3);
    printf("\nNhap diem cot 4: ");
    scanf_s("%d",&cot4);
    tb=(float)((cot1+cot2+cot3+cot4))/4;
    if (tb>=8.5&&tb<=10)
	{
		printf("diem tb cua sinh vien la %.2f\n", tb);
		printf("diem chu cua sinh vien la %c\n", '\x41');
	}
	if (tb>=7 && tb<=8.4)
	{
		printf("diem tb cua sinh vien la %.2f\n", tb);
		printf("diem chu cua sinh vien la %c\n", '\x42');

	}
	if (tb >= 5.5 && tb <= 6.9)
	{
		printf("diem tb cua sinh vien la %.2f\n", tb);
		printf("diem chu cua sinh vien la %c\n", '\x43');
	}
	if (tb >= 4 && tb <= 5.4)
	{
		printf("diem tb cua sinh vien la %.2f\n", tb);
		printf("diem chu cua sinh vien la %c\n", '\x44');
	}
	if (tb<4)
	{
		printf("diem tb cua sinh vien la %.2f\n", tb);
		printf("diem chu cua sinh vien la %c\n", '\x46');
	}
}
