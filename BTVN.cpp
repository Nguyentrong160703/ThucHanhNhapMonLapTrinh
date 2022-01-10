#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<conio.h>

void Menu()
{
	char** argv = nullptr;
	printf("\n\t\t ________________________________________________________________\n");
	printf("\t\t %c\t\t\tMENU CHUC NANG\t\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t1. Nhap xuat ma tran\t\t\t\t\t%c", 174, 175);
	printf("\n\t\t %c\t2. Xuat cac phan tu tren duong cheo phu\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t3. Xuat cac phan tu thuoc tam giac tren\t\t\t%c", 174, 175);
	printf("\n\t\t %c\t4. Tim cot co tong lon nhat trong ma tran.\t\t%c", 178, 178);
	printf("\n\t\t %c\t5. Tim dong co tong chan nho nhat trong ma tran.\t%c", 174, 175);
	printf("\n\t\t %c\t6. Tinh tong cac phan tu tren duong cheo chinh.\t\t%c", 178, 178);
	printf("\n\t\t %c\t7. Tinh tong cac phan tu chan thuoc tam giac tren.\t%c", 174, 175);
	printf("\n\t\t %c\t8. Tinh tong cac phan tu le thuoc tam giac duoi.\t%c", 178, 178);
	printf("\n\t\t %c\t9. Xuat cac phan tu thuoc cac duong bien cua ma tran.\t%c", 174, 175);
	printf("\n\t\t %c\t10. Xuat cac dong tang dan\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t11. Xuat cac cot giam dan\t\t\t\t%c", 174, 175);
	printf("\n\t\t %c\t12. Chuyen doi vi tri 2 dong k va l trong ma tran.\t%c", 178, 178);
	printf("\n\t\t %c\t13. Chuyen doi vi tri 2 cot k va l trong ma tran.\t%c", 174, 175);
	printf("\n\t\t %c\t14. Xep ma tran theo quy tac ptu tren dong sap tang dan\t%c", 178, 178);
	printf("\n\t\t %c\t15. Sap xep ma tran theo quy tac tong cac dong tang dan\t%c", 174, 175);
	printf("\n\t\t %c\t16. Dem so phan tu cuc dai trong ma tran.\t\t%c", 178, 178);
	printf("\n\t\t %c\t\t0.THOAT CHUONG TRINH\t\t\t\t%c", 174, 175);
	printf("\n\t\t %c______________________________________________________________%c\n", 177, 177);
}
//Nhap mang 2 chieu
void nhap(int a[100][100], int& m)
{
	do {
		printf("+) Kich thuoc ma tran vuong: "); scanf_s("%d", &m);
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
	srand(time(0));
	do {
		printf("+) Kich thuoc ma tran vuong: "); scanf_s("%d", &m);
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
//Xuat cac phan tu tren duong cheo phu
void DuongCheoPhu(int a[][100], int& m)
{
	for (int i = 0; i < m; i++)
	{
		if(a[i][i] != 2)
			printf("%4d", a[i][m-1-i]);
	}
}
//Xuat cac phan tu tren duong cheo chinh
void DuongCheoChinh(int a[][100], int& m)
{
	for (int i = 0; i < m; i++)
	{
		printf("%4d", a[i][i]);
	}
}
//Xuat cac phan tu thuoc tam giac tren duong cheo phu
void xuatCacPhanTuThuocTamGiacTrenTheoCheoPhu(int a[][100], int &m) 
{
	for (int i = 0; i < m - 1; i++) 
	{
		for (int j = 0; j < m - 1 - i; j++) 
		{
			printf("%d\t", a[i][j]);
		}
	}
}
//Tim cot co tong lon nhat trong ma tran
int tongcot(int a[100][100], int& m)
{
	for (int i = 0; i < m; i++)
	{
		int tong = 0;
		for (int j = 0; j < m; j++)
		{
			tong += a[j][i];
		}
		return tong;
	}
}
void cotcotonglonnhat(int a[100][100], int& m)
{
	int max = tongcot(a, m);
	int cot = 0, dem = 0;
	for (int i = 0; i < m; i++)
	{
		int tong = 0;
		for (int j = 0; j < m; j++)
		{
			tong += a[j][i];
			if (max < tong)
			{
				max = tong;
				cot = j;
			}
		}
		dem++;
		printf("\n - Tong cua cot thu %d la %d", dem, tong);
	}
	printf("\n => cot co tong lon nhat la %d\n", cot+1);
}
//Tim dong co tong chan nho nhat
int tongDong(int a[100][100], int& m)
{
	for (int i = 0; i < m; i++)
	{
		int tong = 0;
		for (int j = 0; j < m; j++)
		{
			tong += a[i][j];
		}
		return tong;
	}
}
void dongcotongchannhonhat(int a[100][100], int& m)
{
	int min = tongDong(a, m);
	int dong = 0, dem = 0, tong = 0;
	for (int i = 0; i < m; i++)
	{
		tong = 0;
		for (int j = 0; j < m; j++)
			tong += a[i][j];
		if (tong % 2 == 0)
		{
			if (min > tong)
			{
				min = tong;
				dong = i;
			}
		}
		dem++;
		printf("\n - Tong cua dong thu %d la %d", dem, tong);
	}
	printf("\n => Dong co tong chan nho nhat la %d\n", dong + 1);
}
//Tong cac phan tu tren duong cheo chinh
int TongCheoChinh(int a[100][100], int& m)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		printf("%4d", a[i][i]);
		sum += a[i][i];
	}
	return sum;
}
//Tong phan tu chan tam giac tren duong cheo chinh
int TamGiacTren(int a[100][100], int& m)
{
	int tong = 0;
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				printf("%4d", a[i][j]);
				tong += a[i][j];
			}
		}
	}
	return tong;
}
//Tong phan tu le tam giac duoi duong cheo chinh
int TamGiacDuoi(int a[100][100], int& m)
{
	int tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0 ; j < i; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				printf("%4d", a[i][j]);
				tong += a[i][j];
			}
		}
	}
	return tong;
}
//Xuat duong bien cua ma tran
void DuongBien(int a[100][100], int& m)
{
	for (int i = 0; i < m; i++)
	{
		printf("%4d", a[i][0]);
		printf("%4d", a[i][m - 1]);
	}
	for (int j = 0; j < m; j++)
	{
		printf("%4d", a[0][j]);
		printf("%4d", a[m - 1][j]);
	}
}
//Xuat cac dong tang dan
void DongTang(int a[100][100], int &m)
{
	for (int k = 0; k < m; k++)
		for (int i = 0; i < m - 1; i++)
			for (int j = m - 1; j > i; j--)
				if (a[k][j] < a[k][j - 1])
				{
					int temp = a[k][j];
					a[k][j] = a[k][j - 1];
					a[k][j - 1] = temp;
				}
}
void CotGiam(int a[][100], int& m)
{
	for (int j = 0; j < m; j++)
		for (int i = 0; i < m - 1; i++)
		{
			int h = i;
			for (int k = i; k < m; k++)
			{
				if (a[h][j] < a[k][j]) 
					h = k;
			}
			if (h != i)
			{
				int tmp = a[h][j];
				a[h][j] = a[i][j];
				a[i][j] = a[h][j];
			}
		}
}
//Chuyen doi vi tri 2 dong k va l trong ma tran.
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Doi2Dong(int a[][100], int &m, int &k, int &l)
{
	if ((k >= 0 && k < m) && (l >= 0 && l < m))
	{
		for (int j = 0; j < m; j++)
		{
			HoanVi(a[k][j], a[l][j]);
		}
	}
}
//Doi vi tri 2 cot k va l
void Doi2Cot(int a[][100], int &m, int &k, int &l)
{
	if ((k >= 0 && k < m) && (l >= 0 && l < m))
	{
		for (int i = 0; i < m; i++)
		{
			HoanVi(a[i][k], a[i][l]);
		}
	}
}
//Sap xep cac phan tu tren 1 dong tang dan
void SapXepPhanTuTren1DongTangDan(int a[][100], int &m, int x)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[x][i] > a[x][j])
			{
				HoanVi(a[x][i], a[x][j]);
			}
		}
	}
}
//Sap xep tang dan theo tong dong
void TinhTongCacDong(int a[][100], int &m, int b[])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			b[i] += a[i][j];
		}
	}
}
void HoanVi2Dong(int a[][100], int m, int dong1, int dong2)
{
	for (int j = 0; j < m; j++)
	{
		HoanVi(a[dong1][j], a[dong2][j]);
	}
}
void SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(int a[][100], int& m)
{
	int b[100] = {};
	TinhTongCacDong(a, m, b);
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (b[i] > b[j])
			{
				HoanVi2Dong(a, m, i, j);
				HoanVi(b[i], b[j]);
			}
		}
	}
}
//Dem phan tu cuc dai
int KiemTraPhanTuCucDai(int a[][100], int &m, int dong, int cot)
{
	int flag = 1;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			if (dong + i >= 0 && cot + j >= 0 && dong + i < m && cot + j < m && !(i == 0 && j == 0))
			{
				if (a[dong][cot] <= a[dong + i][cot + j])
				{
					flag = 0;
				}
			}
		}
	}
	return flag;
}
void DemSoPhanTuCucDai(int a[][100], int &m)
{
	int dem = 0;
	printf("\n - Cac phan tu cuc dai la: ");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (KiemTraPhanTuCucDai(a, m, i, j) == 1)
			{
				printf("%3d", a[i][j]);
				dem++;
			}
		}
	}
	printf("\n => So phan tu cuc dai = %d", dem);
}
int main()
{
	int chon, a[100][100], m, k, l, x;
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
			printf(" %c Xuat cac phan tu tren duong cheo phu", 003);
			printf("\n => Cac phan tu tren duong cheo phu la: ");
			DuongCheoPhu(a, m);
			
			break;
		case 3:
			printf(" %c Xuat cac phan tu thuoc tam giac tren.", 003);
			printf("\n => Cac phan tu thuoc tam giac tren la: ");
			xuatCacPhanTuThuocTamGiacTrenTheoCheoPhu(a, m);
			
			break;
		case 4:
			printf(" %c Tim cot co tong lon nhat trong ma tran.", 003);
			cotcotonglonnhat(a, m);
			
			break;
		case 5:
			printf(" %c Tim dong co tong chan nho nhat trong ma tran.", 003);
			dongcotongchannhonhat(a, m);
			
			break;
		case 6:
			printf(" %c Tinh tong cac phan tu tren duong cheo chinh.", 003);
			printf("\n => Cac phan tu tren duong cheo chinh la: ");
			printf("\n => Tong cac phan tu tren duong cheo chinh = %d", TongCheoChinh(a, m));
			
			break;
		case 7:
			printf(" %c Tinh tong cac phan tu chan thuoc tam giac tren.", 003);
			printf("\n => Cac phan tu chan thuoc tam giac tren la: ");
			printf("\n => Tong cac phan tu chan thuoc tam giac tren = %d", TamGiacTren(a, m));
			
			break;
		case 8:
			printf(" %c Tinh tong cac phan tu le thuoc tam giac duoi.", 003);
			printf("\n => Cac phan tu le thuoc tam giac duoi la: ");
			printf("\n => Tong cac phan tu le thuoc tam giac duoi = %d", TamGiacDuoi(a, m));
			
			break;
		case 9:
			printf(" %c Xuat cac phan tu thuoc cac duong bien cua ma tran", 003);
			printf("\n => cac phan tu thuoc bien la: ");;
			DuongBien(a, m);
			
			break;
		case 10:
			printf(" %c Xuat cac dong tang dan", 003);
			printf("\n => Cac dong tang dan la: \n");
			DongTang(a, m);
			xuat(a, m);
			
			break;
		case 11:
			printf(" %c Xuat cac cot giam dan", 003);
			printf("\n => Cac cot giam dan la:\n");
			CotGiam(a, m);
			xuat(a, m);
			
			break;
		case 12:
			printf(" %c Chuyen doi vi tri 2 dong k va l trong ma tran.", 003);
			printf("\n+) Nhap dong k: "); scanf_s("%d", &k);
			printf("+) Nhap dong l: "); scanf_s("%d", &l);
			Doi2Dong(a, m, k, l);
			printf(" => Ma tran sau khi doi vi tri dong %d va dong %d \n", k, l);
			xuat(a, m);
			
			break;
		case 13:
			printf(" %c Chuyen doi vi tri 2 cot k va l trong ma tran.", 003);
			printf("\n+) Nhap cot k: "); scanf_s("%d", &k);
			printf("+) Nhap cot l: "); scanf_s("%d", &l);
			Doi2Cot(a, m, k, l);
			printf(" => Ma tran sau khi doi vi tri cot %d va cot %d \n", k, l);
			xuat(a, m);
			
			break;
		case 14:
			printf(" %c Sap xep ma tran theo quy tac cac phan tu tren dong duoc sap tang dan", 003);
			printf("\n +) Nhap dong muon sap xep: "); scanf_s("%d", &x);
			SapXepPhanTuTren1DongTangDan(a, m, x);
			printf(" => Ma tran sau khi sap xep: \n");
			xuat(a, m);
			
			break;
		case 15:
			printf(" %c Sap xep ma tran theo quy tac tong cac dong tang dan", 003);
			SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(a, m);
			printf("\n => Ma tran sau khi sap xep: \n");
			xuat(a, m);
			
			break;
		case 16:
			printf(" %c Dem so phan tu cuc dai trong ma tran.", 003);
			DemSoPhanTuCucDai(a, m);
			
			break;

		default:
			printf("\t%c KHONG CO CHUC NANG NAY! VUI LONG CHON LAI!", 234);
			break;
		}
	} while (chon != 0);
}