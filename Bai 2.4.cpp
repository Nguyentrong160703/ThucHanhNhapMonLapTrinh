#include<stdio.h>
#include<math.h>

int KT_SNT(int n)
{
	int demuoc = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			demuoc++;
	if (demuoc == 2)
		return 1; 
	return 0; 
}
int main()
{
	int so;
	printf("\n nhap vao so nguyen muon kiem tra:");
	scanf_s("%d", &so);
	int kq = KT_SNT(so);
	if (kq == 1)
		printf("\n Day la so nguyen to\n");
	else
		printf("\n Day khong phai la so nguyen to\n");
}