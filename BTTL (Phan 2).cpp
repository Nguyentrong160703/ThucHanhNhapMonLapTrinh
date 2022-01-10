#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Menu()
{
	printf("\n************************************************");
	printf("\n*\t\t MENU ");
	printf("\n*-----------------------------------------------");
	printf("\n* 1. Xuat noi dung cua ma tran ");
	printf("\n* 2. Tong gia tri cac phan tu cua ma tran ");
	printf("\n* 3. Gia tri phan tu lon nhat, nho nhat ");
	printf("\n* 4. Sap xep ma tran tang dan ");
	printf("\n* 0. Thoat chuong trinh ");
	printf("\n***********************************************\n");
}
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
void SinhMang(int a[100][100], int& m, int& n)
{
	printf("Nhap so hang m: "); scanf_s("%d", &m);
	printf("Nhap so cot n: "); scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
}
void Tong(int a[100][100], int& m, int& n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
	}
	printf("+) Tong ma tran = %d", sum);
}
int Max(int a[100][100], int& m, int& n)
{
	int max = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
	}
	return  max;
}
int Min(int a[100][100], int& m, int& n)
{
	int min = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
	}
	return  min;
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y; 
	y = temp;
}
void SapXepMaTranTang(int a[100][100], int m, int n)
{
	int sopt = m * n;
	for (int i = 0; i < sopt - 1; i++)
		for (int j = i + 1; j < sopt; j++)
			if (a[i / n][i % n] > a[j / n][j % n])
				HoanVi(a[i / n][i % n], a[j / n][j % n]);
	xuat(a, m, n);
}
int main()
{
	int a[100][100], m, n, chon;
	do{
		Menu();
		printf("+) Moi ban chon chuc nang: "); scanf_s("%d", &chon);
		switch (chon)
		{
		case 0: printf("CHUONG TRINH KET THUC!\n"); break;
		case 1:
			printf("\n+) Sinh mang 2 chieu la: \n");
			SinhMang(a, m, n);
			xuat(a, m, n);
			break;
		case 2:
			Tong(a, m, n);
			break;
		case 3:
			printf("\n+) Phan tu lon nhat trong ma tran la %d", Max(a, m, n));
			printf("\n+) Phan tu nho nhat trong ma tran la %d\n", Min(a, m, n));
			break;
		case 4:
			printf("\n+) Ma tran tang dan: \n");
			SapXepMaTranTang(a, m, n);
			break;
		default:
			printf("\nKHONG CO CHUC NANG NAY!");
			break;
		}
	} while (chon != 0);
}