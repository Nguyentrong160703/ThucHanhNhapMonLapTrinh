#include<stdio.h>

main(){

  float a,b;
  printf("\nNhap he so a: ");
  scanf("%f",&a);
  printf("\nNhap he so b: ");
  scanf("%f",&b);
  if(a==0){      //neu a==0 thi
    if(b==0){    //neu b==0 thi
      printf("\nPhuong trinh vo so nghiem");
    }else{       //neu khong thi (neu b!=0 thi)
      printf("\nPhuong trinh vo nghiem");
    }
  }else{         //neu khong thi (neu a!=0 thi)
    printf("\nPhuong trinh co nghiem x=%g",-b/a);
  }

  return 0;
}
