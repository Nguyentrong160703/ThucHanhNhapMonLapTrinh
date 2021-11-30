#include <stdio.h>
#include <math.h>
int main(){
    float d1, d2, d3, d4, tb;
    int hs1, hs2, hs3, hs4;
   
    printf("\nNhap diem mon 1= "); scanf_s("%f", &d1);
    printf("\nNhap diem mon 2= "); scanf_s("%f", &d2);
    printf("\nNhap diem mon 3= "); scanf_s("%f", &d3);
    printf("\nNhap diem mon 4= "); scanf_s("%f", &d4);
    printf("\nSo tin chi mon 1 la: "); scanf_s("%d", &hs1);
    printf("\nSo tin chi mon 2 la: "); scanf_s("%d", &hs2);
    printf("\nSo tin chi mon 3 la: "); scanf_s("%d", &hs3);
    printf("\nSo tin chi mon 4 la: "); scanf_s("%d", &hs4);
   
    tb = (d1*hs1 +d2*hs2 +d3*hs3 +d4*hs4)/(hs1+hs2+hs3+hs4); 
    printf("\nDiem trung binh he 10 la: %.1f\n", tb);
    if(tb>=8.5){
        printf("He diem 4 la: 4");
        printf("\nHe diem chu la: A");
    }else if(tb>=8){
        printf("He diem 4 la: 3.5");
        printf("\nHe diem chu la: B+");
    }else if(tb>7){
        printf("He diem 4 la: 3");
        printf("\nHe diem chu la: B");
    }else if(tb>=6.5){
        printf("He diem 4 la: 2.5");
        printf("\nHe diem chu la: C+");
    }else if(tb>=5.5){
        printf("He diem 4 la: 2");
        printf("\nHe diem chu la: C");
    }else if(tb>=5){
        printf("He diem 4 la: 1.5");
        printf("\nHe diem chu la: D+");
    }else if(tb>=4){
        printf("He diem 4 la: 1");
        printf("\nHe diem chu la: D");
    }else {
        printf("He diem 4 la: 0");
        printf("\nHe diem chu la: F");
    }
}
