#include<stdio.h>

int  main() {
    float von;
    float lai;
    int soThang = 0;
    printf("nhap vao so tien von An gui: ");
    scanf_s("%f", &von);
    while (von < 1000) 
    {
        von = von * 1.007;
        soThang++;
    }
    printf("So thang An can gui ngan hang de so tien An nhan duoc >= 1000USD la %d thang\n", soThang);

}
