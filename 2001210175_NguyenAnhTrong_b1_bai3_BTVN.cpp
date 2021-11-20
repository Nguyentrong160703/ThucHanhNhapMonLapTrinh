#include<stdio.h>
#include<conio.h>

int main()
{
    int toan, li, hoa, t, l, h, hs;
    float tb;
    printf("\nNhap diem mon toan: ");
    scanf("%d",&toan);
    printf("Nhap he so mon toan: ");
    scanf("%d",&t);
    printf("\nNhap diem mon li: ");
    scanf("%d",&li);
    printf("Nhap he so mon li: ");
    scanf("%d",&l);
    printf("\nNhap diem mon hoa: ");
    scanf("%d",&hoa);
    printf("Nhap he so mon hoa: ");
    scanf("%d",&h);
    hs=t+l+h;
    tb=(float)((toan*t)+(li*l)+(hoa*h))/hs;
    printf("\n\nDiem trung binh cua 3 mon la: %.2f",tb);

    getch();

    }
