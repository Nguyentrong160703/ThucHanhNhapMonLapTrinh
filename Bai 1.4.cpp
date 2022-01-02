#include <stdio.h>
#include <math.h>

int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int main() 
{
    int a, b;
    do {
        printf("Nhap a = "); scanf_s("%d", &a);
        printf("Nhap b = "); scanf_s("%d", &b);
        if (a <= 0 || b <= 0) {
            printf("So phai duong, Nhap Lai!\n");
        }
    } while (a<=0 || b <=0);
    printf("\nUCLN(%d, %d) = %d\n\n", a, b, UCLN(a, b));
}