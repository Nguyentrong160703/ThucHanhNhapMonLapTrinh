#include<stdio.h>
int main()
{
unsigned long cu, moi, dien, tien =0;
int i;

do
{
printf("chi so dien cu: ");
scanf("%ld", &cu);
printf("chi so dien moi: ");
scanf("%ld", &moi);
}
while(moi<cu);

dien=moi-cu;
printf("So dien da su dung la: %ld\n",dien);
for(i=1&&i<=100;i<=dien;i++)
tien+=5;
for(i=101&&i<=150;i<=dien;i++)
tien+=7;
for(i=151&&i<=200;i<=dien;i++)
tien+=10;
for(i=201&&i<=300;i<=dien;i++)
tien+=15;
for(i=301;i<=dien;i++)
tien+=20;

printf("so tien phai tra la: %ld$", tien);
}
