#include <stdio.h>
#include <conio.h>
#include <time.h>
int main ()
{
    int namsinh, namhientai, tuoi;
    printf("\nNhap tuoi cua ban: ");
    scanf("%d",&tuoi);
    //tu khuc nay
    time_t t = time(0);
    struct tm *Now = localtime(&t);
    namhientai = Now ->tm_year + 1900;
    //Ham dung de lay nam tu he thong may tinh
    namsinh = namhientai - tuoi;
    printf("\n Ban %d tuoi => Ban sinh nam %d",tuoi,namsinh);
    getch ();
    return 0;
}
