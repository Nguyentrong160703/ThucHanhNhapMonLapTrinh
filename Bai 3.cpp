#include<stdio.h>
#include<math.h>
int main()
{
	int thang;
		printf("nhap vao thang:");
		scanf("%d",&thang);
	switch(thang)
	{
		case 1:
			printf("Thang %d tieng anh doc la January",thang);
			break;
		case 2:
			printf("Thang %d tieng anh doc la February",thang);
			break;
		case 3:
			printf("Thang %d tieng anh doc la March", thang);
			break;
		case 4:
			printf("Thang %d tieng anh doc la April",thang);
			break;
		case 5:
			printf("Thang %d tieng anh doc la May", thang);
			break;
		case 6:
			printf("Thang %d tieng anh doc la June", thang);
			break;
		case 7:
			printf("Thang %d tieng anh doc la July", thang);
			break;
		case 8:
			printf("Thang %d tieng anh doc la August",thang);
			break;
		case 9:
			printf("Thang %d tieng anh doc la September",thang);
			break;
		case 10:
			printf("Thang %d tieng anh doc la October",thang);
			break;
		case 11:
			printf("Thang %d tieng anh doc la November",thang);
			break;
		case 12:
			printf("Thang %d tieng anh doc la December",thang);
			break;
		default:
			printf("Month is invalid"); break;
	}
}
