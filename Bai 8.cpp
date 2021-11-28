#include<stdio.h>
#include<conio.h>
int main()
{   
	printf("******************************************");
    printf("\nMenu chon chuc nang: ");
    printf("\n 1. Tong cac so nguyen 1 den 100\t\n 2. Tong cac so nguyen tu 1 den n\t\n 3. Xuat cac so chan nam trong [m,n]");
    printf("\n******************************************");
	int tong =0, chon;
    printf("\n Moi ban chon chuc nang: "); scanf("%d", &chon);
    switch (chon)
    {
    case 1:
    	for(int i= 1; i <=100; i++)
		{ 
	    tong = tong + i;
	    }
	    printf("\n Tong cac so nguyen tu 1 den 100 = %d", tong);
        break;
	case 2:
	    int n;
	    printf("\n Nhap vao n: "); scanf("%d", &n);
	    for (int i = 1; i <=n ; i++)
	    { tong = tong + i;
	    } printf ("\n Tong cac so nguyen tu 1 den %d =%d", n, tong);
	    break;
	case 3: 
		int M, N;
	    printf("\n Nhap vao m, n: "); scanf("%d%d", &M, &N);
	    printf("\n Cac so chan nam trong doan tu m den n la: ");
		if(M > N) {
			printf("\n Khong hop le!");
			} else {
				for (int i = M; i <= N; i++)
				{ if(i % 2 == 0) 
					{
					printf("%3d", i);
					}
				}
			}
				break;
    		default:
    			printf("\n Moi ban chon lai!");
    			break;
    	}
	return 0;
    }
