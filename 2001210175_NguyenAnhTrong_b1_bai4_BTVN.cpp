#include<stdio.h>
#include<math.h>
int main()
{
	int cd, cr, dt, cv, dc; //chieudai, chieurong, dientich,chuvi, duongcheo
	printf("Nhap chieu dai: ");
	scanf("%d",&cd);
	printf("nhap chieu rong: ");
	scanf("%d",&cr);
	dt=cd*cr;
	cv=2*(cd+cr);
	dc=sqrt(pow(cd,2)+pow(cr,2));
	printf("Dien tich hcn la: %d",dt);
	printf("\nchu vi hcn la: %d",cv);
	printf("\nduong cheo hcn la: %d",dc);
}
