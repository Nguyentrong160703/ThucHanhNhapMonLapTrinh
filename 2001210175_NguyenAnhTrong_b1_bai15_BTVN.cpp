#include<stdio.h>
#include<conio.h>

int main()
{
    int cot1,cot2,cot3,cot4, hs, c1,c2,c3,c4;
    float tb;
    printf("\nNhap diem cot 1: ");
    scanf("%d",&cot1);
    printf("Nhap he so cot 1: ");
    scanf("%d",&c1);
    printf("\nNhap diem cot 2: ");
    scanf("%d",&cot2);
    printf("Nhap he so cot 2: ");
    scanf("%d",&c2);
    printf("\nNhap diem cot 3: ");
    scanf("%d",&cot3);
    printf("Nhap he so cot 3: ");
    scanf("%d",&c3);
    printf("\nNhap diem cot 4: ");
    scanf("%d",&cot4);
    printf("Nhap he so cot 4: ");
    scanf("%d",&c4);
    hs=c1+c2+c3+c4;
    tb=(float)((cot1*c1)+(cot2*c2)+(cot3*c3)+(cot4*c4))/hs;
    printf("\n\nDiem trung binh cua 4 cot la: %.2f",tb);

    getch();

    }
