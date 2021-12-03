#include<stdio.h>
#include<math.h>
int main()
{
	float tieuluan, giuaki, cuoiki,tb;
	printf("Diem tieu luan: "); 
	scanf_s("%f",&tieuluan);
	printf("Diem giua ki: ");
	scanf_s("%f", &giuaki);
	printf("Diem cuoi ki: ");
	scanf_s("%f",&cuoiki);
	tb=0.2*tieuluan+0.3*giuaki+0.5*cuoiki; //Cong thuc tinh diem trung binh
	printf("diem tb cua sinh vien la %.2f\n", tb);
    if (tb>=8.5)
	{
		printf("diem chu cua sinh vien la %c\n", '\x41');
	} else if (tb>=7 )
	{
		printf("diem chu cua sinh vien la %c\n", '\x42');
	}else if (tb >= 5.5)
	{
		printf("diem chu cua sinh vien la %c\n", '\x43');
	}else if (tb >= 4 )
	{
		printf("diem chu cua sinh vien la %c\n", '\x44');
	}else if (tb<4)
		printf("diem chu cua sinh vien la %c\n", '\x46');
	return 0;
}

