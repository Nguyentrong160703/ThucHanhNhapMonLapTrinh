#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100
void Menu()
{
	char** argv = nullptr;
	printf("\n\t\t ________________________________________________________________\n");
	printf("\t\t %c\t\t\tMENU CHUC NANG\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t1. Tao mot mang 1 chieu chua n so thuc.\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t2. Xuat mot mang 1 chieu chua n so thuc.\t\t%c", 178, 178);
	printf("\n\t\t %c\t3. Tinh gia tri trung binh cac phan tu trong mang.\t%c", 177, 177);
	printf("\n\t\t %c\t4. Tinh tong cac gia tri duong trong mang.\t\t%c", 178, 178);
	printf("\n\t\t %c\t5. Dao nguoc cac gia tri mang.\t\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t6. Kiem tra mang co tinh doi xung hay khong?\t\t%c", 178, 178);
	printf("\n\t\t %c\t7. Kiem tra mang co phai la mang tang khong?\t\t%c", 177, 177);
	printf("\n\t\t %c\t8. Tim gia tri phan tu xuat hien nhieu nhat trong mang.\t%c", 178, 178);
	printf("\n\t\t %c\t9. Dem so nguyen to trong mang.\t\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t10.Tim so chan lon nhat trong mang.\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t11.Tim so nguyen to nho nhat trong mang.\t\t%c", 177, 177);
	printf("\n\t\t %c\t12.Dem so nguyen to trong mang.\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t13.Tim vi tri cua gia tri chan dau tien trong mang\t%c", 177, 177);
	printf("\n\t\t %c\t14.Tim <so chan cuoi cung> cua mang.\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t15.Dao nguoc cac gia tri mang.\t\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t16.Xuat cac phan tu lon hon cac phan tu xung quanh no.\t%c", 178, 178);
	printf("\n\t\t %c\t17.Tim so lon thu 2 trong mang.\t\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t18.Tim so chan lon nhat.\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t19.Dem xem mang co bao nhieu so lon nhat.\t\t%c", 177, 177);
	printf("\n\t\t %c\t20.Xoa phan tu max/min\t\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t\t0.THOAT CHUONG TRINH\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c______________________________________________________________%c\n", 177, 177);
}
//Hàm nhập
void nhap(float a[], int& n)
{
	do
	{
		printf("Nhap vao so phan tu: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop li");
		}
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}
}
//Ham xuất
void Xuat(float a[], int& n)
{

	for (int i = 0; i < n; i++)
	{
		printf("    %.2f", a[i]);
	}
}
//1. Sinh ra so ngau nhien
void Random(float a[], int& n)
{
	do
	{
		printf("Nhap vao so phan tu: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop li");
		}
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; ++i)
	{
		a[i] = 5 - rand() / (float)RAND_MAX;
	}
}
//3. Tinh gia tri trung binh cac phan tu trong mang. 
void TrbinhPT(float a[], int &n)
{
	float s = 0;
	float tb = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i];
		tb = s / n;
	}
	printf(" => Gia tri trung binh cua mang = %.2f", tb);
}
//4. Tinh tong cac gia tri duong trong mang.
void TongDuong(float a[], int &n)
{
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			tong += a[i];
		}
	}
	printf(" => Tong cac gia tri duong trong mang = %.2f", tong);
}
//5. Dao nguoc cac gia tri mang.
void DaoNguoc(float a[], int &n)
{
	printf("Mang dao nguoc la: ");
	for (int i = n-1; i >=0; i--)
	{
		printf("    %.2f", a[i]);
	}
}
//6. Kiem tra mang co tinh doi xung hay khong? 
bool DoiXung(float a[], int &n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		if (a[i] != a[n - 1 - i])
		{
			return false;
		}
	}
	return true;
}
//7. Viet ham kiem tra mang co phai la mang tang khong? 
bool MangTang(float a[], int &n) 
{
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i + 1] >= a[i]) 
			dem++;
	}
	if (dem == n - 1) 
		return true;
	else 
		return false;
}
//8. Viet ham  tim gia tri phan tu xuat hien nhieu nhat trong mang, neu co nhieu phan tu co so lan xuat hien bang nhau thi xuat phan tu dau tien.
void kiemtra(float a[], float b[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[j] == a[i])
				b[i]++;
		}
	}
}
//9. Dem so nguyen to
float demSNT(float a[], int& n)
{
	float count = 1;
	for (int i = 1; i <= n; i++)
	{
		if ((int)a[i] % 2 != 0)
		{
			count++;
		}
	}
	return count;
}
//10. tìm so chan lon nhat trong mang
float sochanlonnhat(float a[], int n)
{
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if ((int)a[i] % 2 == 0)
		{
			max = a[i];
			for (int j = 0; j < n; j++)
				if (a[j] > max && (int)a[j] % 2 == 0) max = a[j];
		}
	}
	return max;
}
//12. Dem so nguyen to trong mang
float demNt(float a[], int& n)
{
	float count = 1;
	for (int i = 1; i <= n; i++)
	{
		if ((int)a[i] % 2 != 0)
		{
			count++;
		}
	}
	return count;
}
void chanDau(float a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		if ((int)a[i] % 2 == 0)
		{
			printf("gia tri chan dau tien la %.2f\n", a[i]);
			break;
		}
		else
		{
			printf("khong co gia tri chan nao\n");
		}
	}
}
void chanCuoi(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if ((int)a[i] % 2 == 0)
		{
			printf("gia tri chan cuoi cung la %.2f\n", a[i]);
			break;
		}
		else
		{
			printf("khong co gia tri chan nao\n");
		}
	}
}
//15. Dao nguoc mang
void DaoMang(float a[], int n)
{
	printf("Mang dao nguoc la: ");
	for (int i = n - 1; i >= 0; i--)
	{
		printf("    %.2f", a[i]);
	}
}
//16. Xuat cac phan tu lon hon cac phan tu xung quanh no
void maxXq(float a[], int n)
{
	
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max && a[i] > a[i - 1] && a[i] > a[i + 1])
		{
			max = a[i];
			printf("%.2f\t", a[i]);
		}
	}
}
//17. Tim so lon thu 2 trong mang
void swap(float &a, float &b) {
	float tg = a;
	a = b;
	b = tg;
}
void SapXep(float a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
float FindBySort(float a[], int n) {
	SapXep(a, n);
	return a[1];
}
//18. Tìm số chẵn lớn nhất
float timSoChanMax(float a[], int& n)
{
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if ((int)a[i] % 2 == 0)
			max = a[i];
		for (int j = 0; j < n; j++)
			if (max < a[j] && (int)a[j] % 2 == 0)
				max = a[j];
	}
	return max;
}
//19. Đếm xem trong mảng có bao nhiêu giá trị lớn nhất
float DemSoLuongGiaTriLonNhat(float a[], int n)
{
	float dem = 0;
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max == a[i])
		{
			dem++;
		}
		else if (a[i] > max)
		{
			max = a[i];
			dem = 1;
		}
	}
	return dem;
}
//20. Xoa phan tu lon nhat/nho nhat trong mang
void xoamax(float a[], int& n)
{
	float max = a[0];
	int	i;
	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	for (i = 0; i < n; i++)
		if (a[i] == max)
		{
			for (int j = i; j < n; j++)

				a[j] = a[j + 1];
			n--;
			i--;
		}
	Xuat(a, n);
}
void xoamin(float a[], int& n)
{
	float min = a[0];
	int i;
	for (i = 1; i < n; i++)
		if (a[i] < min)
			min = a[i];
	for (i = 0; i < n; i++)
		if (a[i] == min)
		{
			for (int j = i; j < n; j++)

				a[j] = a[j + 1];
			n--;
			i--;
		}
	Xuat(a, n);
}
int main()
{
	float a[MAX], b[MAX];
	int n{};
	int chon;
	do
	{
		Menu();
		printf("\t\tMoi ban chon chuc nang muon thuc hien: "); scanf_s("%d", &chon);
		switch (chon)
		{
		case 0: printf("CHUONG TRINH KET THUC!\n");
			break;
		case 1:
			printf("Ban da chon chuc nang so 1!");
			int c;
			printf("\nCo 2 phuong phap: \n\t1) Nhap phan tu tu ban phim\n\t2) Sinh so ngau nhien");
			printf("\n\tMoi ban chon phuong phap: "); scanf_s("%d", &c);
			switch (c)
			{
			case 1:
				nhap(a, n);
				printf("Mang vua nhap la: ");
				Xuat(a, n);
				break;
			case 2:
				Random(a, n);
				Xuat(a, n);
				break;
			}
			break;
		case 2:
			nhap(a, n);
			printf("Mang vua nhap la: ");
			Xuat(a, n);
			break;
		case 3:
			TrbinhPT(a, n);
			break;
		case 4:
			TongDuong(a, n);
			break;
		case 5:
			DaoNguoc(a, n);
			break;
		case 6:
			if (DoiXung(a, n))
			{
				printf(" Mang doi xung!");
			}
			else {
				printf(" Mang khong doi xung!");
			}
			break;
		case 7: 
			if (MangTang(a, n))
			{
				printf(" Mang theo thu tu tang dan!");
			}
			else {
				printf(" Mang khong theo thu tu tang dan!");
			}
			break;
		case 8:
		{
			kiemtra(a, b, n);
			float sln = 1;
			for (int i = 0; i < n; i++)
			{
				if (b[i] > sln)
					sln = b[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (b[i] == sln)
					printf("\n Phan tu co gia tri %.2f, xuat hien %.2f lan", a[i], b[i]);
			}
			break;
		}
		case 9:
			printf(" cac so nguyen to trong mang la %.2f\n", demSNT(a, n));
			break;
		case 10:
		{
			float soChanMax = timSoChanMax(a, n);
			printf("So chan lon nhat trong mang la: %.2f\n", soChanMax);
			break;
		}
		case 12: 
			printf(" => So luong cac so nguyen to co trong mang la: %.2f", demNt(a, n));
			break;
		case 13: 
			chanDau(a, n);
			break;
		case 14:
			chanCuoi(a, n);
			break;
		case 15: 
			DaoMang(a, n);
			break;
		case 16:
			nhap(a, n);
			printf("=> Phan tu lon hon cac phan tu xung quanh no la: ");
			maxXq(a, n);
			break;
		case 17:
			printf("So lon thu thu 2 trong mang la: %.2f", FindBySort(a, n));
			break;
		case 18: 
		{
			float soChanMax = timSoChanMax(a, n);
			printf("So chan lon nhat trong mang la: %.2f\n", soChanMax);
			break;
		}
		case 19:
		{
			float dem = DemSoLuongGiaTriLonNhat(a, n);
			printf("\nSo luong gia tri lon nhat = %.0f", dem);
			break;
		}
		case 20:
			printf("=> Mang sau khi xoa phan tu lon nhat la:");
			xoamax(a, n);
			printf("\n=> Mang sau khi xoa phan tu nho nhat la:");
			xoamin(a, n);
			break;
		} 
	} while (chon != 0);
}