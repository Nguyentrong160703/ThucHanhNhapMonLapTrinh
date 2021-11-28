#include <stdio.h>

int main() {
   int nam;
   printf("Nhap vao nam ban muon kiem tra: "); scanf("%d",&nam);
   if (((nam % 4 == 0) && (nam % 100!= 0)) || (nam%400 == 0))
      printf("%d la mot nam nhuan", nam);
   else
      printf("%d khong phai la nam nhuan", nam);
      
   return 0;
}
