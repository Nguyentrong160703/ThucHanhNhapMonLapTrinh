#include<conio.h>
#include<stdio.h>
#include<string.h>

void nhapChuoi(char chuoi[])
{
    do
    {
        printf("\nMoi ban nhap chuoi: ");
        gets_s(chuoi);
    }
    while(!(0<strlen(chuoi) && strlen(chuoi)<30));
}

void demSoTuTrongChuoi(char chuoi[])
{
    int i;
    int soTu=0;
    for(i=0; i<strlen(chuoi)-1; i++) 
    {
    if(chuoi[i]==' ' && chuoi[i+1]!=' ') 
        {
            soTu++;
        }
    }
    if(chuoi[0]!=' ') 
    {
        soTu++;
    }
    printf("\nChuoi \"%s\" co %d tu.",chuoi,soTu);
}

int main()
{
    char chuoi[30];
    nhapChuoi(chuoi);
    demSoTuTrongChuoi(chuoi);
    getch();
    return 0;
}
