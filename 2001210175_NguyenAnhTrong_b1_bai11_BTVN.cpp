#include<stdio.h>
#include<conio.h>
int main()
{
    float toan, van, anh, su, li, hoa, heso;
    float tb;
    printf("\nNhap diem mon toan: ");
    scanf("%f",&toan);
    printf("\nNhap diem mon li: ");
    scanf("%f",&li);
    printf("\nNhap diem mon hoa: ");
    scanf("%f",&hoa);
    printf("\nNhap diem mon van: ");
    scanf("%f",&van);
    printf("\nNhap diem mon anh: ");
    scanf("%f",&anh);
    printf("\nNhap diem mon su: ");
    scanf("%f",&su);
    printf("\nHe so diem: ");
    scanf("%f",&heso);
	heso=heso*6;
    tb=(float)((toan*10)+(li*10)+(hoa*10)+(van*10)+(anh*10)+(su*10))/heso;
    printf("\n\nDiem trung binh cua 6 mon la: %.2f\n",tb);
    if(tb>=8.0)
        	printf("Loai Gioi");
    	else if(tb<8.0 && tb>=6.5)
        	printf("Loai Kha");
    	else if(tb<6.5 && tb>=5.0)
            printf("Loai Trung binh");
    else
        printf("Loai Yeu");
    getch();

    }
