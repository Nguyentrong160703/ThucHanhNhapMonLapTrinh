#include<stdio.h>
#include<conio.h>
#include<math.h>
void menu() 
{
    printf("\n1. NHAP CANH TAM GIAC. ");
    printf("\n2. XIN CHAO.");
    printf("\n3. TINH TONG CAC SO NGUYEN NHO HON N.");
}
void danhsach() 
{
    int chon;
    int n;
    printf("\nmoi ban chon:");
    scanf_s("%d", &chon);
    fflush(stdin);
    switch (chon) {
    case 1:
        float a, b, c;
        printf("moi ban nhap 3 canh tam giac:");
        scanf_s("%f%f%f", &a, &b, &c);
        break;
    case 2:
        printf("XIN CHAO");
        break;
    case 3:
        printf("moi ban nhap N:");
        scanf_s("%d", &n);
        int i;
        int S = 0;
        for (i = 1; i <= n; i++) 
        {
            S += i;
        }
        printf("S = %d", S);
        break;
    }
}
int main() 
{
    menu();
    danhsach();
}