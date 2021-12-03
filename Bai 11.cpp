/*Bài toán cổ “Trăm trâu trăm cỏ” :
		Trâu đứng ăn năm
		Trâu nằm ăn ba
		Lụ khụ trâu già
		Ba con một bó
		Trăm con ăn cỏ
		Trăm bó no nê.
Hỏi có bao nhiêu trâu đứng, trâu nằm, trâu già ?*/
#include<stdio.h>
#include<math.h>

int main()
{
	int i, j;
	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j <= 100 - i; j++)
		{
			if (i * 5 + j * 3 + (100 - i - j) / 3 == 100)
			{
				printf("%d trau dung, %d trau nam, %d trau gia\n", i, j, 100 - i - j);
			}
		}
	}
	return 0;
}