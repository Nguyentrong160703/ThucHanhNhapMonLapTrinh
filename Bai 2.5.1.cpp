#include<stdio.h>
#define MAX_SIZE 100

void NhapMang(int a[], int &n)
{
	do
	{
		printf("So phan tu cua mang: ");
		scanf_s("%d", &n);
		if (n <= 0)
			printf("\nMoi ban nhap lai!(n>0)\n");
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap mang a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int &n)
{
	printf("+) Mang vua nhap la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}
void LietKeChan(int a[], int &n)
{
	printf("\n+) Cac so chan trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%4d", a[i]);
		}
	}
}
int TongMang(int a[], int &n)
{
	int i, s=0;
	for (i = 0; i < n; i++) 
		s = s + a[i];
	return s;
}
int TongChan(int a[], int &n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			continue;
		}
		sum += a[i];
	}
	return sum;
}
int main()
{
	int n = 0, a[MAX_SIZE];
	NhapMang(a, n);
	XuatMang(a, n);
	LietKeChan(a, n);
	int t = TongMang(a, n);
	printf("\n+) Tong cua mang la:%d", t);
	int tc = TongChan(a, n);
	printf("\n+) Tong cua cac gia tri chan trong mang la:%d\n", tc);
}