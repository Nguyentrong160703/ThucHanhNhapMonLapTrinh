#include <stdio.h>

//Hàm tìm số đảo ngược của số đã nhập từ bàn phím
int SoDaoNguoc(int n) 
{
    int DaoNguoc = 0;
    while (n > 0) 
    {
        DaoNguoc = DaoNguoc * 10 + n % 10;
        n /= 10;
    }
    return DaoNguoc;
}
int main(void) 
{
    int n;
    printf(">> nhap mot so nguyen duong: ");
    scanf_s("%d", &n);
    int ketqua = SoDaoNguoc(n);
    printf("\tSo dao nguoc: %d\n", ketqua);
    return 0;
}
