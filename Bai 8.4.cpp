#include<stdio.h>
#include<math.h>

void tinh(int n)
{
    int i;
    float S;
    S = (float)sqrt(2);
    for (i = 2; i <= n; i++)
    {
        S = (float)sqrt(2 + S);
    }
    printf("Tong S = %.2f\n", S);
}
int main()
{
    int n;
    do
    {
        printf("\n Nhap n(n >= 1): ");
        scanf_s("%d", &n);

        if (n < 1)
        {
            printf("\nn phai >= 1. Xin nhap lai !");
        }
    } while (n < 1);
    tinh(n);
    return 0;
}