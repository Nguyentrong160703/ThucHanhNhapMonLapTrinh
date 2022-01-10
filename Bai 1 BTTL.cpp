#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void Menu()
{
	char** argv = nullptr;
	printf("\n\t\t ________________________________________________________________\n");
	printf("\t\t %c \t\t\t\t\t\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t\t\tMENU \t\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t1. Nhap xuat ma tran\t\t\t\t\t%c", 174, 175);
	printf("\n\t\t %c\t2. Tim vi tri cua gia tri x trong ma tran\t\t%c", 178, 178);
	printf("\n\t\t %c\t3. Tim phan tu max cua dong k trong ma tran\t\t%c", 174, 175);
	printf("\n\t\t %c\t4. Dem phan tu duong trong ma tran.\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t5. Dem so lan phan tu x xuat hien\t\t\t%c", 174, 175);
	printf("\n\t\t %c\t6. Kiem tra ma tran co phai ma tran vuong khong?\t%c", 178, 178);
	printf("\n\t\t %c\t7. Kiem tra ma tran co toan so chan khong?\t\t%c", 174, 175);
	printf("\n\t\t %c\t8. tim dong co tong so lon nhat\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t9. tim so chan lon nhat trong ma tran\t\t\t%c", 174, 175);
	printf("\n\t\t %c\t\t0.THOAT CHUONG TRINH\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c______________________________________________________________%c\n", 177, 177);
}
//Nhap mang 2 chieu
void nhap(int a[100][100], int& m, int& n)
{
	do {
		printf("+) Nhap so hang m: "); scanf_s("%d", &m);
		if (m <= 0)
			printf("\n ! Error ! Moi ban nhap lai! (m > 0)");
	} while (m <= 0);
	do {
		printf("+) Nhap so cot n: "); scanf_s("%d", &n);
		if (n <= 0)
			printf("\n ! Error ! Moi ban nhap lai! (n > 0)");
	} while (n <= 0);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
//Xuat mang 2 chieu
void xuat(int a[100][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
}
//Press Any key
void pressanykey()
{
	printf("\n\n Bam phim bat ki de tiep tuc ...");
	_getch();
	system("cls");
}
//Sinh mang ngau nhien
void SinhMang(int a[100][100], int& m, int& n)
{
	printf("+) Nhap so hang m: "); scanf_s("%d", &m);
	printf("+) Nhap so cot n: "); scanf_s("%d", &n);
	printf(" => Mang da duoc sinh thanh cong!\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = 5 - rand() % 10;
		}
	}
}
//Tim vi tri x trong ma tran
void ViTriX(int a[100][100], int& m, int& n, int x1)
{
	int vitri_i{}, vitri_j{};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x1)
			{
				vitri_i = i+1;
				vitri_j = j+1;
			}
		}
	}
	printf("=> Phan tu %d xuat hien o dong %d cot %d\n", x1, vitri_i, vitri_j);
}
//Tim phan tu max cua dong k trong ma tran
int Max_K(int a[][100], int &m, int &n, int k)
{
	int max = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[k][j] > max)
			{
				max = a[k][j];
			}
	return max;
}
//Dem phan tu duong trong ma tran
int DemDuong(int a[][100], int& m, int& n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
			{
				dem++;
			}
	return dem;
}
//Dem so lan phan tu x xuat hien
int DemX(int a[][100], int& m, int& n, int x2)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x2)
			{
				dem++;
			}
	return dem;
}
//Kiem tra ma tran co phai ma tran vuong khong?
void KiemTraMaTran(int& m, int& n)
{
	if (m == n)
	{
		printf("\n => Day la mot ma tran vuong!\n");
	}
	else {
		printf("\n => Day khong phai la ma tran vuong!\n");
	}
}
//Kiem tra ma tran co toan phan tu chan khong?
bool KiemTraChan(int a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
			{
				return true; 
				break;
			}
	}
	return false;

}
//Tim dong co tong lon nhat trong ma tran
int tongDong(int a[100][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int tong = 0;
		for (int j = 0; j < n; j++)
		{
			tong += a[i][j];
		}	
		return tong;
	}
}
void dongcotonglonnhat(int a[100][100], int &m, int &n)
{
	int max = tongDong(a,m,n);
	int dong = 0, dem = 0, tong = 0;
	for (int i = 0; i < m; i++)
	{
		tong = 0;
		for (int j = 0; j < n; j++)
			tong += a[i][j];
		if (max < tong)
		{
			max = tong;
			dong = i;
		}
		dem++;
		printf("\n - Tong cua dong thu %d la %d", dem, tong);
	}
	printf("\n => Dong co tong lon nhat la %d\n", dong + 1);
}
//Tim so chan lon nhat
int TimSoChan(int a[][100], int &m, int &n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				return a[i][j];
			}
		}
	}
	return -1;
}
int TimSoChanLonNhat(int a[][100], int &m, int &n)
{
	int ChanMax = TimSoChan(a, m, n);
	if (ChanMax == -1)
	{
		return -1;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				ChanMax = (ChanMax > a[i][j]) ? ChanMax : a[i][j];
			}
		}
	}
	return ChanMax;
}
int main()
{
	int chon, a[100][100], m, n, x1,x2, k;
	do {
		Menu();
		printf("\t\t %c Moi ban chon chuc nang muon thuc hien: ",006); scanf_s("%d", &chon);
		switch (chon)
		{
		case 0: printf("KET THUC CHUONG TRINH!");
			break;
		case 1:
		{
			int c;
			printf("\n---------------------------------------\n1. Nhap mang 2 chieu.\n2. Sinh mang 2 chieu ngau nhien.\n");
			printf("- Moi ban chon: "); scanf_s("%d", &c);
			switch (c)
			{
			case 1:
				nhap(a, m, n);
				printf(" => Mang da nhap la: \n");
				xuat(a, m, n);
				break;
			case 2:
				SinhMang(a, m, n);
				xuat(a, m, n);
				break;
			}
			pressanykey();
			break;
		}
		case 2:
			printf(" %c Tim vi tri cua gia tri x trong ma tran", 003);
			printf("\n+) Nhap gia tri x can tim: "); scanf_s("%d", &x1);
			printf("==> Da tim thay phan tu %d!\n", x1);
			ViTriX(a, m, n, x1);
			pressanykey();
			break;
		case 3:
			printf(" %c Tim phan tu max cua dong k trong ma tran", 003);
			printf("+) Nhap dong k can kiem tra: "); scanf_s("%d", &k);
			printf(" => Gia tri lon nhat trong dong %d la %d!", k, Max_K(a, m, n, k));
			pressanykey();
			break;
		case 4:
			printf(" %c Dem phan tu duong trong ma tran.", 003);
			printf(" => So phan tu duong trong ma tran la: %d", DemDuong(a, m, n));
			pressanykey(); 
			break;
		case 5:
			printf(" %c Dem so lan phan tu x xuat hien", 003);
			printf("\n+) Nhap gia tri x can tim: "); scanf_s("%d", &x2);
			printf(" => So phan %d xuat hien trong ma tran la: %d", x2, DemX(a, m, n, x2));
			pressanykey(); 
			break;
		case 6:
			printf(" %c Kiem tra ma tran co vuong khong? ", 003);
			KiemTraMaTran(m, n);
			pressanykey();
			break;
		case 7:
			printf(" %c Kiem tra ma tran co toan so chan khong? ", 003);
			if (KiemTraChan(a, m, n) == true)
				printf("\n => ma tran khong toan phan tu chan!\n");
			else 
				printf("\n => ma tran toan phan tu chan!\n");
			pressanykey();
			break;
		case 8:
			printf(" %c Tim dong co tong so lon nhat", 003);
			dongcotonglonnhat(a, m, n);
			pressanykey();
			break;
		case 9:
			printf(" %c Tim so chan lon nhat trong ma tran", 003);
			printf("\n => So chan lon nhat trong ma tran la: %d", TimSoChanLonNhat(a, m, n));
			pressanykey();
			break;
		default:
			printf("\t%c KHONG CO CHUC NANG NAY! VUI LONG CHON LAI!", 234);
			break;
		}
	} while (chon != 0);
}