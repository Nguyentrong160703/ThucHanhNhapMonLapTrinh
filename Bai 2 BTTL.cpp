#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

void Menu()
{
	char** argv = nullptr;
	printf("\n\t\t ________________________________________________________________\n");
	printf("\t\t %c\t\t\tMA TRAN VUONG\t\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t1. Nhap xuat ma tran\t\t\t\t\t%c", 174, 175);
	printf("\n\t\t %c\t2. Tong duong cheo chinh trong ma tran vuong\t\t%c", 178, 178);
	printf("\n\t\t %c\t3. Dem phan tu chinh phuong tren duong cheo phu\t\t%c", 174, 175);
	printf("\n\t\t %c\t4. Kiem tra xem ma tran duong khong?\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t5. Kiem tra ma tran co duong cheo chinh toan so 1?\t%c", 174, 175);
	printf("\n\t\t %c\t6. Kiem tra ma tran co doi xung khong?\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t7. Tim phan tu co so lan xuat hien nhieu nhat\t\t%c", 174, 175);
	printf("\n\t\t %c\t8. Tim so nguyen to lon nhat trong ma tran\t\t%c", 178, 178);
	printf("\n\t\t %c\t\t0.THOAT CHUONG TRINH\t\t\t\t%c", 174, 175);
	printf("\n\t\t %c______________________________________________________________%c\n", 177, 177);
}
//Nhap mang 2 chieu
void nhap(int a[100][100], int& m)
{
	do {
		printf("+) Nhap so hang m: "); scanf_s("%d", &m);
		if (m <= 0)
			printf("\n ! Error ! Moi ban nhap lai! (m > 0)");
	} while (m <= 0);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
//Xuat mang 2 chieu
void xuat(int a[100][100], int& m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
}
//Sinh mang ngau nhien
void SinhMang(int a[100][100], int& m)
{
	do {
		printf("+) Nhap so hang m: "); scanf_s("%d", &m);
		if (m <= 0)
			printf("\n ! Error ! Moi ban nhap lai! (m > 0)");
	} while (m <= 0);
	printf(" => Mang da duoc sinh thanh cong!\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
}
//Tong Duong cheo chinh trong ma tran vuong
int TongCheoChinh(int a[100][100], int& m)
{
	int tong = 0;
	for (int i = 0; i < m; i++)
	{
		tong += a[i][i];
	}
	return tong;
}
//Dem so phan tu chinh phuong tren duong cheo phu
bool kiemtraSCP(int a) 
{
	if (a < 1)
		return false;
	int i = 1;
	while (i * i <= a) {
		if (i * i == a)
			return true;
		i++;
	}
	return false;
}
void  DemSCP(int a[100][100], int& m)
{
	int dem = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (i == j || i + j == m - 1) {
				if (kiemtraSCP(a[i][j])) {
					dem++;
					printf("%4d", a[i][j]);
				}
			}
		}
	}
	printf("\n => So chinh phuong tren duong cheo phu la %d", dem);
}
//Kiem tra ma tran co toan duong khong?
int KiemTraMaTranCoToanSoDuong(int a[][100], int &m)
{
	int So = 1; // giả sử ban đầu ma trận toàn số dương
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < 0)
			{
				So = 0;
				break;
			}
		}
	}
	return So;
}
//Kiem tra duong cheo chinh cua ma tran co toan la so 1 khong?
int KiemTraDuongCheoChinh(int a[][100], int& m)
{
	for (int i = 0; i < m; i++)
	{
			if (a[i][i] != 1)
			{
				return true;
			}
	}
	return false;
}
//Kiem tra ma tran co doi xung khong?
int MaTranDoiXung(int a[][100], int& m)
{
	for (int i = 0; i < m; i++)
	{
		for(int j = 0; j<m;j++)
		{
			if (a[i][j] != a[j][i])
			{
				return false;
			}
		}
	}
	return true;
}
// Tim phan tu co so lan xuat hien nhieu nhat trong ma tran
int demsolanxuathien(int a[][100], int& m)
{
	int dem = 0, x = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == x)
				dem++;
		}
	}
	return dem;
}
int timGiaTriXuatHienNhieuNhat(int a[][100], int& m)
{
	int dem = 0, dong = 0, cot = 0, x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dem < demsolanxuathien(a, m))
			{
				dem = demsolanxuathien(a, m);
				dong = i;
				cot = j;
			}
		}
	}
	return a[dong][cot];
}
//Tim so nguyen to lon nhat trong ma tran
bool NguyenTo(int n)
{
	if (n < 2) 
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
void SoNguyenToMax(int a[][100], int& m)
{
	int max = a[0][0], dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (NguyenTo(a[i][j]))
			{
				if (a[i][j] > max)
					max = a[i][j];
				dem++;
			}
		}
	}
	printf("\n => So nguyen lon nhat la %d", max);
}
int main()
{
	int chon, a[100][100], m;
	do {
		Menu();
		printf("\t\t %c Moi ban chon chuc nang muon thuc hien: ", 006); scanf_s("%d", &chon);
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
				nhap(a, m);
				printf(" => Mang da nhap la: \n");
				xuat(a, m);
				break;
			case 2:
				SinhMang(a, m);
				xuat(a, m);
				break;
			}
			break;
		}
		case 2:
			printf(" %c Tong duong cheo chinh trong ma tran vuong", 003);
			printf("\n => Tong duong cheo chinh trong ma tran vuong = %d\n", TongCheoChinh(a, m));
			break;
		case 3:
			printf(" %c Dem so phan tu chinh phuong tren duong cheo phu", 003);
			DemSCP(a, m);
			
			break;
		case 4:
			printf(" %c Kiem tra ma tran duong khong?", 003);
			if (KiemTraMaTranCoToanSoDuong(a, m) == 1)
				printf("\n => Ma Tran toan duong!");
			else
				printf("\n => Ma tran khong toan duong!");
			
			break;
		case 5:
			printf(" %c Kiem tra ma tran co duong cheo chinh toan la so 1 khong?", 003);
			if (KiemTraDuongCheoChinh(a, m) == false)
				printf("\n => Ma Tran co duong cheo chinh toan la so 1!");
			else
				printf("\n => Ma tran khong co duong cheo chinh toan la so 1!");
			
			break;
		case 6:
			printf(" %c Kiem tra ma tran doi xung khong? ", 003);
			if (MaTranDoiXung(a, m) == true)
				printf("\n => Ma tran doi xung!");
			else
				printf("\n => Ma tran khong doi xung!");
			
			break;
		case 7:
			printf(" %c Tim phan tu co so lan xuat hien nhieu nhat trong ma tran", 003);
			printf("\n => Gia tri xuat hien nhieu nhat trong ma tran la %d", timGiaTriXuatHienNhieuNhat(a, m));
			printf("\n => Xuat hien %d lan", demsolanxuathien(a, m));
			
			break;
		case 8:
			printf(" %c Tim so nguyen to lon nhat trong ma tran", 003);
			SoNguyenToMax(a, m);
			
			break;
		default:
			printf("\t%c KHONG CO CHUC NANG NAY! VUI LONG CHON LAI!", 234);
			break;
		}
	} while (chon != 0);
}