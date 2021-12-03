#include <stdio.h>

int main()
{
    int x=1;

    while (x>0 || x<0)
    {
        printf("Nhap vao mot so : ");
        scanf_s("%d", &x);
    }

    printf("Chuong trinh da dung lai!\n");

    return 0;
}