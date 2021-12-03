#include<stdio.h>
#include<math.h>

int main()
{
	int i, so1, so2, max, bcnn = 1; //Bội chung nhỏ nhất
	printf("Nhap so thu nhat: "); scanf_s("%d", &so1);
	printf("Nhap so thu hai: "); scanf_s("%d", &so2);
	if (so1 == 0 || so2 == 0)
	{
		printf("%d va %d khong co boi chung nho nhat", so1, so2);
	}
	else
	{
		if (so1 > so2)
		{
			max = so1;
		}
		else
		{
			max = so2;
		}
		int i = max;
		while (1)
		{
			if (i % so1 == 0 && i % so2 == 0)
			{
				bcnn = i;
				break;
			}
			i += max;
		}
		printf("Boi so chung nho nhat cua %d va %d la %d",so1,so2, bcnn);
	}
	return 0;
}
