#include<stdio.h>

int main()
{
    int n;
    do
    {
        printf("\nNhap vao so nguyen duong n: ");
        scanf_s("%d", &n);
        if (n < 0)
        {
            printf("\nSo n phai >= 0, vui long nhap lai !");
        }
    } while (n < 0);
    printf("\nSo %d co toan cac chu so chan dung khong?\n", n);
    int Kiemtra = 1;
    while (n /= 10)
    {
        if ((n % 10) % 2 == 1)
        {
            Kiemtra = 0;
        }
    }
    if (Kiemtra == 1)
    {
        printf("Dung!\n");
    }
    else
    {
        printf("Sai!\n");
    }
}