#include<stdio.h>
#include<conio.h>

void NhapChuoi()
{
    char s1[100],s2[100];
    printf("Nhap chuoi thu nhat : ");
    gets_s(s1);
    printf("Nhap chuoi thu hai : ");
    gets_s(s2);
}
void ChuoiCon(char s1[100], char s2[100])
{
    int i = 0, j = 0;
    int flag = 0;
    while (s1[i] != 0)
    {
        if (s1[i] == s2[j])
        {
            j++;
            if (s2[j] == 0)
            {
                flag = 1;
                break;
            }
        }
        else
            j = 0;
        i++;
    }
}
int main()
{
    char s1[100], s2[100];
    int flag = 0;
    NhapChuoi();
    int chon;
    printf("Moi ban chon bai muon thuc hien: "); scanf_s("%d", &chon);
    do {
       switch (chon)
       {
       case 1:
           ChuoiCon(s1, s2);
            if (flag)
                printf("Chuoi thu hai nam trong chuoi thu nhat\n");
            else
                printf("Chuoi thu hai khong nam trong chuoi thu nhat\n");
            break;
        }
    } while (chon == 0);

}