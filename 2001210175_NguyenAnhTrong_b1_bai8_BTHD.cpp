#include <stdio.h>
#include <conio.h>
int main()
{
	float diemTB;
	printf("nhap vao diem trung binh:\n");
	scanf_s("%f", &diemTB);
	if (diemTB>=4)
	{
		printf("Sinh vien da dau");
	}
	else
	{
		printf("sinh vien da rot");
	}
	return 0;
}