#include <stdio.h>
#include <math.h>
int bai1(float tich, float n){
    tich = 1;
	for (int i=1; i<=n;i++){
	tich= tich*i;
	}
    return tich;
}
int bai2(float tong){
	tong = 0;
	for(int i=2;i<=20;i++,i++){
	tong+=i;
	}
    return tong;
}
int bai3(float tong, float n){
	tong = 0;
	for (int i=1; i<=n; i++){
		tong = tong + i*(i+1);
	}
    return tong;
}
void bai4(float tong, float n){
	tong = 0;
    float x =1;
	for(int i=1; i<=n; i++){
		tong=tong+(x/(i*(i+1)*(i+2)));
	}
    printf("\nKet qua bai 4 la: %.2f", tong);
}
int bai5(float tong, float n){
    tong = 0;
    for(int i=1; i<=n; i++){
        tong+=pow((-1),(i-1))*i;
    }
    return tong;
}
int main(){
    float a,b,c,d;
    float kq1{}, kq2{}, kq3{}, kq4{}, kq5{};
    printf("Nhap vao so a= ");
	scanf_s("%f", &a);
    printf("Nhap vao so b= ");
	scanf_s("%f", &b);
    printf("Nhap vao so c= ");
	scanf_s("%f", &c);
    printf("Nhap vao so d= ");
	scanf_s("%f", &d);
    float t1=bai1(kq1, a);
    printf("\nKet qua bai 1 la: %.2f", t1);
    float t2=bai2(kq2);
    printf("\nKet qua bai 2 la: %.2f", t2);
    float t3=bai3(kq3,b);
    printf("\nKet qua bai 3 la: %.2f", t3);
    bai4(kq4,c);
    float t5=bai5(kq5,d);
    printf("\nKet qua bai 5 la: %.2f", t5);
}
