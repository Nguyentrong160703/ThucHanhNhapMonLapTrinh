#include<stdio.h>
int main(){
  // khai bao 3 bien a, b, c la ba canh cua tam giac
  int a, b, c;
  printf("\nNhap vao do dai canh a: ");
  scanf("%d", &a);
  printf("Nhap vao do dai canh b: ");
  scanf("%d", &b);
  printf("Nhap vao do dai canh c: ");
  scanf("%d", &c);
  //kiem tra xem ba canh co phai la ba canh cua mot tam giac hay khong
  if( a<b+c && b<a+c && c<a+b ){
    //dieu kien tam giac vuong (dinh ly pitago)
    if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
      printf("Day la tam giac vuong");
    //dieu kien tam giac deu la 3 canh bang nhau
    else if(a==b && b==c)
      printf("Day la tam giac deu");
    //dieu kien tam giac can la 2 canh bang nhau
    else if(a==b || a==c || b==c)
      printf("Day la tam giac can");
    //dieu kien tam giac tu la co mot goc lon hon 90 do
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
      printf("Day la tam giac tu");
    //va truong hop con lai la tam giac nhon
    else
      printf("Day la tam giac nhon");
    }
  //dieu kien ba canh nhap vao khong phai la ba canh cua mot tam giac
  else
    printf("Ba canh a, b, c khong phai la ba canh cua mot tam giac");

}