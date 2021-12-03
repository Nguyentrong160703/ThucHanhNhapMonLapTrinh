#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    printf("Nhap he so bac 2, a = ");
    scanf_s("%f", &a);
    printf("Nhap he so bac 1, b = ");
    scanf_s("%f", &b);
    printf("Nhap so hang tu do, c = ");
    scanf_s("%f", &c);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh vo nghiem!\n");
        }
        else
        {
            printf("Phuong trinh co mot nghiem: x = %f\n", (-c / b));
        }
    }
    // tinh delta
    float delta = b * b - 4 * a * c;
    float x1, x2;
    // tinh nghiem
    if (delta > 0)
    {
        x1 = (float)((-b + sqrt(delta)) / (2 * a));
        x2 = (float)((-b - sqrt(delta)) / (2 * a));
        printf("Phuong trinh co 2 nghiem la: x1 = %.2f va x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
    }
    else
    {
        printf("Phuong trinh vo nghiem!\n");
    }
    return 0;
}