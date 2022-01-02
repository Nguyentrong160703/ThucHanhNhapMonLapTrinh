#include<stdio.h>
#define MAX_SIZE 100

void NhapMang1C_SoNguyen(int a[], int& n)
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
		printf("Gia tri phan tu a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang1C_SoNguyen(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%4d", a[i]);
}
void main()
{
	int A[MAX_SIZE];
	int N;
	NhapMang1C_SoNguyen(A, N);
	printf("\nNoi dung cua mang la: ");
	XuatMang1C_SoNguyen(A, N);
}