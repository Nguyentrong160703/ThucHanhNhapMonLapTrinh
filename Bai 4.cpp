//Kiểm tra số nguyên n có phải là số nguyên tố không?
#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    printf("\nNhap n = ");
    scanf_s("%d", &n);
    if (n < 2) {
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    int SoNguyenTo = 0;
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            SoNguyenTo++;
        }
    }
    if (SoNguyenTo == 0) 
    {
        printf("\n%d la so nguyen to", n);
    }
    else {
        printf("\n%d khong phai so nguyen to", n);
    }
}