#include<stdio.h>

int main()
{
    int n;
    do
    {
        printf("\nNhap vao so nguyen duong n: ");
        scanf_s("%d", &n);
        if (n <= 0)
        {
            printf("\nSo n phai >= 0, vui long nhap lai! ");
        }
    } while (n <= 0);
    int KiemTraGiamDan = 1;
    int themang = n;
    int ChuSoCuoi = themang % 10;
    themang /= 10;

    printf("\nCac chu so cua %d co giam dan tu trai sang phai hay khong ?\n ", n);
    while (themang != 0)
    {
        int ChuSoKeCuoi = themang % 10;
        themang /= 10;
        if (ChuSoCuoi > ChuSoKeCuoi)
        {
            KiemTraGiamDan = 0;
        }
        else
        {
            ChuSoCuoi = ChuSoKeCuoi;
        }
    }
    if (KiemTraGiamDan)
        printf("Co!\n");
    else
        printf("Sai!\n");
}