#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100
void Menu()
{
	char** argv = nullptr;
	printf("\n\t\t ________________________________________________________________\n");
	printf("\t\t %c\t\t\tMENU CHUC NANG\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t1. Tao mot mang 1 chieu chua n so nguyen\t\t%c", 177, 177);
	printf("\n\t\t %c\t2. Xuat mot mang 1 chieu chua n so nguyen\t\t%c", 178, 178);
	printf("\n\t\t %c\t3. Xuat cac so o vi tri chan trong mang\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t4. Dem cac phan tu duong trong mang\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t5. Tong cac phan tu am trong mang\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t6. Tim vi tri cua gia tri x trong mang\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t7. Tim phan tu lon nhat/nho nhat trong mang\t\t%c", 177, 177);
	printf("\n\t\t %c\t8. Kiem tra mang SN co ton tai gia tri x hay khong\t%c", 178, 178);
	printf("\n\t\t %c\t9. Them vao mang mot gia tri x tai vi tri k\t\t%c", 177, 177);
	printf("\n\t\t %c\t10.Tinh tong cac phan tu chan/le\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t11.Kiem tra mang co toan so chan khong?\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t12.Tao mang a chua cac gia tri chan/le ngau nhien\t%c", 178, 178);
	printf("\n\t\t %c\t13.Kiem tra a có chua cac gia tri chan/le xen ke khong?\t%c", 177, 177);
	printf("\n\t\t %c\t14.Xuat cac phan tu tron chuc\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t15.Them phan tu x sau phan tu dau tien\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t16.Them phan tu tao vi tri k\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t17.Them phan tu x sau phan tu max.\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t18.Xoa phan tu co gia tri x (tai vi tri dau tien)\t%c", 178, 178);
	printf("\n\t\t %c\t19.Xoa vao mang mot gia tri x tai vi tri k\t\t%c", 177, 177);
	printf("\n\t\t %c\t20.Xoa tat ca cac phan x co gia tri k\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t\t0.THOAT CHUONG TRINH\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c______________________________________________________________%c\n", 177, 177);
}
//Hàm nhập
void nhap(int a[], int &n)
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
        scanf_s("%d", &a[i]);
    }
}
//Ham xuất
void Xuat(int a[], int &n)
{

	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}
//1. Sinh ra so ngau nhien
void Random(int a[], int& n)
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
		a[i] = rand() % 10;
	}
}
//3. Liet ke cac mang co gia tri chan 
void lietkechan(int a[], int &n)
{
	printf("Cac gia tri chan trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%4d", a[i]);
		}
	}
}
//4. Đếm phần tử dương trong mảng
void demduong(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	printf("\n=> So phan tu DUONG co trong mang: %d\n", dem);
}

//5. Tong phần tử âm trong mảng
void Tongam(int a[], int n)
{
	int s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
		{
			dem++;
			s += a[i];
		}
	printf("\n=> Tong phan tu AM trong mang: %d\n", s);
}
//6. Tim vi tri cua gia tri x xuat hien trong mang
int tim_vi_tri(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x) return i;
	return 0;
}
//7. Giá trị lớn nhất/nhỏ nhất trong mảng
int max(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}
int min(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
		if (min > a[i])
			min = a[i];
	return min;
}
//8. Kiểm tra mảng số nguyên có tồn tại giá trị x hay không?
void kiemtraXtontai(int a[], int n)
{
	int x, dem = 0;
	printf("\n nhap X: ");
	scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
			break;
		}
	}
	if (dem == 0)
	{
		printf("Gia tri %d khong ton tai trong mang!", x);
	}
	else
	{
		printf("Gia tri %d ton tai trong mang!", x);
	}
}
//9. Thêm vào mảng một giá trị x tại vị trí k (nhập từ bàn phím)
void chen(int a[], int n, int &k)
{
	int x;
	printf("nhap so can chen:");
	scanf_s("%d", &x);
	for (int i = n; i >= k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
	n++;
	Xuat(a, n);
}
//10. Tính tổng các phần tử chẵn/lẻ
void Tong(int a[], int& n)
{
	int s_chan = 0, s_le = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			s_chan += a[i];
		else
			s_le += a[i];
	}
	printf("+) Tong cac so chan trong mang la %d", s_chan);
	printf("\n+) Tong cac so le trong mang la %d", s_le);
}
//11. Kiểm tra mảng có toàn chữ số chẵn không?
int KiemTraToanChan(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
		{
			return 1;
			break;
		}
	return 0;
}
//12. Tạo mảng chẵn/lẻ ngẫu nhiên

//13. Kiểm tra mảng có xen kẻ chẳn lẻ không?
int KiemtraXenKe(int a[], int n)
{
	int xenke = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0))
		{
			xenke = 0;
			break;
		}
	}
		if (xenke == 1)
			printf("~~> Mang xen ke chan le");
		else
			printf("~~> Mang khong xen ke chan le");
	return 0;
}
//14. Xuat cac phan tu tron chuc
void SoTronChuc(int a[], int& n)
{
	printf("\ncac phan tu tron chuc la : ");
	for (int i = 0; i < n; i++)
		if (a[i] % 10 == 0)
		{
			printf("%4d", a[i]); 
		}
}
//15. Chen gia tri x vao vi tri dau tien
void chenViTriDauTien(int a[], int n, int x)
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		a[i + 1] = a[i];
	}
	a[0] = x;
	n++;
}
//16. Them phan tu vao vi tri k
void ThemPhanTu(int a[], int n)
{
	int k, x;
	printf("\nnhap vi Tri can them: ");
	scanf_s("%d", &k);
	printf("\nGia tri can them vao: ");
	scanf_s("%d", &x);
	chen(a, n, k);
	Xuat(a, n);
}
//17. Thêm phần tử x sau phần tử max
int Max(int a[], int n)
{
	int m = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] >= m)
			m = a[i];
	return m;
}
void chenMax(int a[], int& n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Max(a, n))
		{
			for (int j = n; j >= i + 2; j--)
				a[j] = a[j - 1];
			a[i + 1] = x;
			n++;
			i++;
		}
	}
}
//18.Xóa phần tử có giá trị x (xuất hiện đầu tiên)
void XoaPTX(int a[], int& n)
{
	int x = 0;
	for (int i = x; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void XoaXdautien(int a[], int n)
{
	int x = 0, temp;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			temp = i;
			break;
		}
	}
	XoaPTX(a, n);
}
//19. Xoa vi tri k trong mang
void XoaViTri(int a[], int n, int k)
{
	printf("nhap vi tri can xoa: ");scanf_s("%d", &k);
	for (int i = 0; i < n; i++)
		a[k] = a[k + 1];
	n = n - 1;
	Xuat(a, n);
}
//20. Xoa Phan Tu x xuất hiện trong mảng
void XoaPT(int a[], int n, int x)
{
	int i;
	int count = 0;

	for (i = 0; i < n; i++) {
		if (a[i] == x)
			count++;
		else
			a[i - count] = a[i];
	}
	n -= count;
}
int main()
{
	int n{}, k{}, x = 0;
	int chon;
	int a[MAX];
	do {
		Menu();
		printf("\t\tMoi Ban Chon Chuc Nang Muon Thuc Hien: "); scanf_s("%d", &chon);
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
			lietkechan(a, n);
			break;
		case 4:
			demduong(a, n);
			break;
		case 5:
			Tongam(a, n);
			break;
		case 6:
			int x;
			printf("\n Nhap x: ");
			scanf_s(" %d", &x);
			if (tim_vi_tri(a, n, x))
				printf("\n vi tri cua %d trong mang la : a[%d]", x, tim_vi_tri(a, n, x));
			else
				printf("\n ko co ");
			break;
		case 7: 
			printf("\nMax = %d", max(a, n));
			printf("\nMin = %d", min(a, n));
			break;
		case 8:
			kiemtraXtontai(a, n);
			break;
		case 9:
			printf("nhap vi tri can chen:");
			scanf_s("%d", &k);
			chen(a, n, k);
			break;
		case 10:
			Tong(a, n);
			break;
		case 11: 
			if (KiemTraToanChan(a, n))
				printf("\nMang khong toan chan");
			else
				printf("\nMang toan la so chan");
			break;
		case 12:
			printf("EM CHUA LAM CO OI :(((");
			break;
		case 13: 
			KiemtraXenKe(a, n);
			break;
		case 14:
			nhap(a, n);
			SoTronChuc(a, n);
			break;
		case 15: 
			printf("Nhap x: "); scanf_s("%d", &x);
			chenViTriDauTien(a, n, x);
			printf("Mang sau khi chen la: ");
			Xuat(a, n);
			break;
		case 16:
			ThemPhanTu(a, n);
			break;
		case 17: 
			printf("Nhap x: "); scanf_s("%d", &x);
			chenMax(a, n, x);
			printf("Mang sau khi chen la: ");
			Xuat(a, n);
			break;
		case 18:
			printf("Nhap x: "); scanf_s("%d", &x);
			XoaXdautien(a, n);
			printf("Mang sau khi xoa la: ");
			Xuat(a, n);
			break;
		case 19:
			XoaViTri(a, n, k);
			break;
		case 20: 
			printf("Nhap x: "); scanf_s("%d", &x);
			XoaPT(a, n, x);
			printf("Mang sau khi xoa la: ");
			Xuat(a, n);
			break;
		}
	} while (chon != 0);
}