#include<stdio.h>
#include<conio.h>

int main()
{
	int chon;
	int n,m,a,b,c,dem=0, tinh=0; 
		printf("\t\t******************************************");
		printf("\n\t\t\tCHON 1 TRONG 7 LUA CHON SAU\n");
		printf("\t1. Dem cac so chan tu 1 den n, voi n duoc nhap vao.\n	");  
		printf("2. Xuat cac so co hang chuc la so 2 nam trong [m,n] voi m va n duoc nhap vao. \n");
		printf("\t3. Tong cac so chan co 2 chu so va nho hon 100. \n");
		printf("\t5. Xuat cac uoc so cua N va nam trong khoang [a,b] voi N, a,b duoc nhap vao.\n");
		printf("\t4. Dem cac so la boi cua 3 va co dung 2 chu so. \n");
		printf("\t6. Xuat cac so co dung 3 chu so sao cho tong cac chu so la chan. \n");
		printf("\t7. Xuat cac so co dung 3 chu so sao cho cac chu so phai khac nhau.\n ");
		printf("\t\t******************************************");
		printf("\nLua chon cua ban la: ");
		scanf("%d",&chon);
	switch(chon)
	{
        case 1:
            printf("Nhap vao so n: "); scanf("%d", &n);
            printf("Cac so chia het cho 2 la: ");
            for(int i = 0; i<=a; i++){
                if(i%2==0){
                    dem++;
                }
            }
            printf("Co %d so chia het cho 2", dem);
            break;
        case 2: 
            do{
            printf("Nhap vao hai so m,n: "); scanf("%d%d", &m, &n);
            printf("Cac so co hang chuc la 2: ");
            }while(m>n);
            for(int i=m; i<=n; i++){
                if(i%100/10==2){
                    printf("%d, ", i);
                }
            }
            break;
        case 3:
            for(int i=10; i<=99; i++){
                if(i%2==0){
                    n+=i;
                }
            }
            printf("Tong la: %d", a);
        case 4:
            for(int i=10; i<=99; i++){
                if(i%3==0){
                    tinh++;
                }
            }
            printf("Co %d so la boi cua ba va co hai chu so", tinh);
            break;
        case 5:
            do{
            printf("Nhap vao a: "); scanf("%d", &a);
            printf("Nhap vao b: "); scanf("%d", &b);
            }while(a>b);
            printf("Nhap vao c: "); scanf("%d", &c);
            printf("Cac so la uoc cua c trong khoang [a,b] la: ");
            for(int i=a; i<=b; i++){
                if(c%i==0){
                    printf("%d, ", i);
                }
            }
            break;
        case 6:
            printf("Cac so co ba chu so va tong cac chu so la so chan la: ");
            for(int a=100; a<=999; a++){
                int x = a/100;
                int y=a%100/10;
                int z= a%10;
                if((x+y+z)%2==0){
                    printf("%d, ", a);
                }
            }
            break;
        case 7:
            printf("Cac so co ba chu so va co cac chu so khac nhau la: ");
            for(int a=100; a<=999; a++){
                int x = a/100;
                int y=a%100/10;
                int z= a%10;
                if(x!=y && x!=z && y!=z){
                    printf("%d, ", a);
                }
            }
            break;
        default:
            return 0;    
    }
}

