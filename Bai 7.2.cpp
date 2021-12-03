#include<stdio.h>
#include<conio.h>
int main()
{
    float toan, van, anh, su, li, hoa, heso=10;
    float tb;
    printf("\nNhap diem mon toan: ");
    scanf_s("%f",&toan);
    printf("\nNhap diem mon li: ");
    scanf_s("%f",&li);
    printf("\nNhap diem mon hoa: ");
    scanf_s("%f",&hoa);
    printf("\nNhap diem mon van: ");
    scanf_s("%f",&van);
    printf("\nNhap diem mon anh: ");
    scanf_s("%f",&anh);
    printf("\nNhap diem mon su: ");
    scanf_s("%f",&su);
    printf("\nHe so diem: ");
    scanf_s("%f",&heso);
	heso=heso*6;
    tb=(float)((toan)+(li)+(hoa)+(van)+(anh)+(su))/6;
    printf("\n\nDiem trung binh cua 6 mon la: %.2f\n",tb);
    if(tb>=8.0 && toan > 6.5 && li > 6.5 && hoa > 6.5 && van > 6.5 &&anh >6.5 && su > 6.5)
        	printf("Loai Gioi");
    	else if(tb>=7.0 && toan > 5 && li > 5 && hoa > 5 && van > 5 &&anh >5 && su > 5)
        	printf("Loai Kha");
    	else if(tb>=5.0 && toan > 3.5 && li > 3.5 && hoa > 3.5 && van > 3.5 &&anh >3.5 && su > 3.5 )
            printf("Loai Trung binh");
    else
        printf("Loai Yeu");
    return 0;

    }
