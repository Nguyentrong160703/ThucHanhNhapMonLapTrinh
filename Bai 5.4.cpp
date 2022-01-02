#include<stdio.h>
#include<math.h>

void Menu()
{
    char** argv = nullptr;
    printf("\n\t\t ________________________________________________________________\n");
    printf("\t\t %c\t\t\tMENU CHUC NANG\t\t\t\t%c", 178, 178);
    printf("\n\t\t %c\t1. Tinh tong cac so nguyen n\t\t\t\t%c", 177, 177);
    printf("\n\t\t %c\t2. Tim so ngay cua thang va nam\t\t\t\t%c", 178, 178);
    printf("\n\t\t %c\t3. Doi cho 2 so thuc x, y\t\t\t\t%c", 177, 177);
    printf("\n\t\t %c\t4. Tim BCNN cua 2 so nguyen duong a, b\t\t\t%c", 178, 178);
    printf("\n\t\t %c\t5. Kiem tra n co toan so le khong?\t\t\t%c", 177, 177);
    printf("\n\t\t %c______________________________________________________________%c\n", 178, 178);
}
//Hàm tính tổng các ước số nguyên n
void TongUocSo(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    printf(" ~~> Sum = %d\n", sum);
}
//Tìm số ngày của tháng khi biết tháng và năm
void SoNgay(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nThang %d nam %d co 31 ngay\n", month, year);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nThang %d nam %d co 30 ngay\n", month, year);
        break;
    case 2:
    {
        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
            printf("Thang %d nam %d co 29 ngay\n", month, year);
        }
        else
            printf("Thang %d nam %d co 28 ngay\n", month, year);
        break;
    default:
        printf("\nKhong co thang %d\n", month);
        break;
    }
    }
}
//Đổi chỗ 2 số thực x,y
void swap(float x, float y)
{
    float temp = x;
    x = y;
    y = temp;
    printf("After swap:x = %.2f va y = %.2f\n", x, y);
}
//Tìm bội số chung nhỏ nhất của 2 số nguyên dương a, b
int BCNN(int a, int b) 
{
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}
//Kiểm tra số n có toàn là số lẻ không?
void KiemTraSoLe(int n)
{
    printf("Is the number %d all odd digits?\n", n);
    int check = 1;
    while (n /= 10)
    {
        if ((n % 10) % 2 == 0)
        {
            check = 0;
            break;
        }
    }
    if (check == 1)
    {
        printf("True!");
    }
    else
    {
        printf("False!");
    }
}
//Hàm gọi
int main()
{
    Menu();
    int chon;
    printf("\n\t\tCHON CHUC NANG BAN MUON THUC HIEN: "); scanf_s("%d", &chon);
    switch(chon)
    {
    case 1:
        printf("\n================ Sum of divisors integer n ================");
            int n;
            do {
                printf("\n +) Enter n: "); scanf_s("%d", &n);
                if (n <= 0) 
                {
                    printf(" +) Re-Enter n: ");
                }
            } while (n <= 0);
            TongUocSo(n);
            break;
    case 2:
        printf("\n====================== Number of day ======================\n");
        int month, year;
        printf(" +) Enter month: "); scanf_s("%d", &month);
        printf(" +) Enter year: "); scanf_s("%d", &year);
        SoNgay(month, year);
        break;
    case 3:
        printf("\n==================== Swap 2 real number ===================\n");
        float x, y;
        printf(" +) Enter x: "); scanf_s("%f", &x);
        printf(" +) Enter y: "); scanf_s("%f", &y);
        printf("You entered: x = %.2f va y = %.2f\n", x, y);
        swap(x, y);
        break;
    case 4:
        printf("\n==================== Least common multiple ================\n");
        int a, b;
        printf(" +) Enter a: "); scanf_s("%d", &a);
        printf(" +) Enter b: "); scanf_s("%d", &b);
        int lcm;
        lcm = a * b / BCNN(a, b); //Ước số chung lớn nhất
        printf("BCNN(%d, %d) = %d\n", a, b, lcm);
        break;
    case 5:
        printf("\n===================== Check odd numbers ===================\n");
        do {
            printf(" +) Enter n: "); scanf_s("%d", &n);
            if (n <= 0) 
            {
                printf(" +) Re-Enter n: ");
            }
        } while (n <= 0);
        KiemTraSoLe(n);
    default:
        printf("\t\tKHONG CO CHUC NANG NAY!");
        break;
    }
    
}