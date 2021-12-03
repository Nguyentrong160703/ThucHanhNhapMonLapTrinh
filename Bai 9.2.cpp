#include<stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
	int i;
	printf("\t");
	for (i = 1; i < 30; i++) printf("* ");
	printf("\n\t\t\t CHUONG TRINH TINH\n\n");
	int chon, n, s = 1, s1 = 0;
	float s2 = 0;
	printf("\tmoi ban chon nhung chuc nang sau:\n");
	printf("\t\t1.s=1*2*3**4*5*...*n\n");
	printf("\t\t2.s=2+4+6+8+...20\n");
	printf("\t\t3.s=1*2+2*3+3*4+...+n(n+1)\n");
	printf("\t\t4.s=1/1*2*3+1/2*3*4+...1/n(n+1)(n+2)\n");
	printf("\t\t5.s=1-2+3-4+...+(-1)^n-1*n\n");
	printf("\t");
	for (i = 1; i < 30; i++) printf("* ");
	printf("\n\nMoi ban chon: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1: printf("ban da chon 1\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
			s *= i;
		{
			printf("s=%d\n", s);
		}
		break;
	case 2: printf("ban da chon 2\n");
		for (int i = 2; i <= 20; i++)
		{
			if (i % 2 == 0)
			{
				s1 += i;
			}
		}
		printf("s=%d", s1);
		break;
	case 3: printf("ban da chon 3\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			s1 += i * (i + 1);
		}
		printf("s=%d", s1);
		break;
	case 4: printf("ban da chon 4\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			s2 += (float)1 / (i * (i + 1) * (i + 2));
		}
		printf("s = %.2f", s2);
		break;
	case 5: printf("ban da chon 5\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
		for (int i = 1; i < n; i++)
		{
			s1 += pow(-1, i - 1) * i;
		}
		printf("s=%d", s1);
		break;

	default: printf("chuong trinh ket thuc\n");
		break;
	}
	return 0;
}