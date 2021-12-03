#include<stdio.h>
#include<math.h>

int main()
{
	printf("\t*************************************\n");
	printf("\t\tCHON CAC BAI TOAN SAU\n");
	printf("\t1. S(n) = √(n+√((n-1)+√((n-2)+...+√1))) voi n>0\n");
	printf("\t2. S(n) = √(1 +√(2 + √(3 + ⋯ + √n))) với n>0\n");
	printf("\t*************************************\n");
	int chon;
	printf("\n Moi ban chon chuc nang: "); scanf_s("%d", &chon);
    switch (chon)
    {
    case 1:
        int i, n;
        float S;
        do
        {
            printf("\nNhap n(n >= 1): ");
            scanf_s("%d", &n);

            if (n < 1)
            {
                printf("\nn phai >= 1. Xin nhap lai !");
            }
        } while (n < 1);

        i = 1;
        S = 0;

        while (i <= n)
        {
            S = sqrt(i + S);
            i++;
        }
        printf("\nTong S = %f", S);
        break;
    }
}