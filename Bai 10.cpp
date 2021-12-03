#include<stdio.h>
#include<conio.h>

int main()
{
    printf("******************************************");
    printf("\nMenu chon chuc nang: ");
    printf("\n 1. Tim chu so hang dau tien cua N\t\n 2. Tinh tong cac chu so cua N\t\n 3. Tim chu so lon nhat trong k chu so do.\t\n 4. Dem so chu so cua N\t\n 5. N co phai la so co cac chu so khac nhau doi mot khong?");
    printf("\n******************************************");
    int tong = 0, chon, max = 0, dem = 1;
    long N;
    printf("\n Moi ban chon chuc nang: "); scanf_s("%d", &chon);
    switch (chon)
    {
    case 1: //Tìm chữ số hàng đầu tiên của N
        int temp, max;
        do
        {
            printf("\nNhap vao so N: ");
            scanf_s("%ld", &N);
            if (N <= 0)
            {
                printf("\n So N phai lon hon 0, vui long nhap lai !");
            }
        } while (N <= 0);
        temp = N;
        do
        {
            max = temp % 10;
        } while (temp /= 10);
        printf("Chu so dau tien cua %d la: %d\n", N, max);
        break;
    case 2: //Tính tổng các chữ số của N
        int m;
        do
        {
            printf("\nNhap vao so N: ");
            scanf_s("%ld", &N);
            if (N <= 0)
            {
                printf("\n So N phai lon hon 0, vui long nhap lai !");
            }
        } while (N <= 0);
        while (N > 0)
        {
            m = N % 10;
            tong = tong + m;
            N = N / 10;
        }
        printf("\nTong cac so cua N = %d", tong);
        break;
    case 3: //Tìm số lớn nhất trong các số N
        int i;
        do
        {
            printf("\nNhap vao so N: ");
            scanf_s("%ld", &N);
            if (N <= 0)
            {
                printf("\n So N phai lon hon 0, vui long nhap lai !");
            }
        } while (N <= 0);
        temp = N;
        if (N == 0)
            max = 0;
        do
        {
            i = N % 10;
            if (i > max)
            {
                max = i;
            }
        } while (N /= 10);
        printf("\nChu so lon nhat trong %d la: %d", temp, max);
        break;
    case 4: //Đếm số lượng của số N
        do
        {
            printf("\nNhap vao so N: ");
            scanf_s("%ld", &N);
            if (N <= 0)
            {
                printf("\n So N phai lon hon 0, vui long nhap lai !");
            }
        } while (N <= 0);
        while (N >= 10) {
            N /= 10; 
            dem++;
        }
        printf("So luong chu so cua N la %d", dem);
        break;
    case 5: //N có phải là các chữ số đôi một khác nhau không?
        do
        {
            printf("\nNhap vao so N: ");
            scanf_s("%ld", &N);
            if (N <= 0)
            {
                printf("\n So N phai lon hon 0, vui long nhap lai !");
            }
        } while (N <= 0);
        while (
    }
}