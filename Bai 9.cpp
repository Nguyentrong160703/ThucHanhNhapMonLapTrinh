#include < stdio.h > 
#include < string.h >

void menu()
{
    printf("\n__________________________________________________\n");
    printf("\t1. Xuat tung thanh phan cua ho ten\n");
    printf("\t2. Nhap ten vao cho biet la nam hay nu?\n");
}
void tachten(char s[], char ten[], char lot[]) {
    int i, j, n;
    n = strlen(s);
    for (i = n - 1; i > 0; i--)
        if (s[i] == ' ')
            break;
    for (j = 0; j < i; j++)
        lot[j] = s[j];
    lot[i] = '\0';
    for (j = i + 1; j < n; j++)
        ten[j - i - 1] = s[j];
    ten[n - i - 1] = '\0';
}
void kiemtra(char s[], char s1[], char s2[])
{
    if (strstr(s1, s2) != NULL)
    {
        printf("La nu\n");
    }
    else if (strstr(s1, s2) != NULL)
    {
        printf("la Nam\n");
    }
    else
    {
        printf("Khong co Thi hoac Van de xac dinh\n");
    }
}
void main(void) 
{
    int chon;
    char s[30];
    do {
        menu();
        printf("Moi ban chon chuc nang: "); scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            char ten[20], lot[20];
            printf(" Nhap ho va ten: ");
            gets_s(s);
            tachten(s, ten, lot);
            printf(" \n +) Ho va chu lot: ");
            puts(lot);
            printf(" +) Ten: ");
            puts(ten);
            break;
        case 2:
            char s1[] = "Thi";
            char s2[] = "Van";
            printf("Nhap ten de check\n"); gets_s(s);
            kiemtra(s, s1, s2);
            break;
        default:
            printf("KHONG CO CHUC NANG NAY!");
            break;
        }
    } while (chon != 0);

}