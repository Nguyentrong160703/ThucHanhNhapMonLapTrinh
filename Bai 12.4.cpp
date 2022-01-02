#include<stdio.h>
#include<math.h>

void Menu(int argc, char** argv)
{
	printf("\n\t\t ________________________________________________________________\n");
	printf("\t\t %c\t\t\tMENU CHUC NANG\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t1. Tim Uoc chung lon nhat cua 2 so a,b nguyen duong\t%c", 177, 177);
	printf("\n\t\t %c\t2. Chon chuc nang sau ...(chon de xem chi tiet)\t\t%c", 178, 178);
	printf("\n\t\t %c\t3. Nhap n va tinh tong so nguyen duong n\t\t%c", 177, 177);
	printf("\n\t\t %c\t4. Kiem tra xem n co phai la so nguyen to hay khong?\t%c", 178, 178);
	printf("\n\t\t %c\t5. Kiem tra so nguyen n co bao nhieu chu so chan.\t%c", 177, 177);
	printf("\n\t\t %c\t6. Tim Boi chung nho nhat cua 2 so a, b\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t7. Tinh tong cac so tu nhien nho hon n\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t8. Nhap so nguyen lien tuc va dung lai (xem chi tiet)\t%c", 178, 178);
	printf("\n\t\t %c\t9. Lap thao tac nhap 3 so nguyen (xem chi tiep)\t\t%c", 177, 177);
	printf("\n\t\t %c\t10.chon chuc nang (Chon de xem chi tiet)\t\t%c", 178, 178);
	printf("\n\t\t %c\t11.Giai toan co Tram Trau Tram Bo\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t12.Giai phuong trinh ax+b=0\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t13.Kiem tra n co toan chu so chan khong?\t\t%c", 177, 177);
	printf("\n\t\t %c\t14.Kiem tra n co toan chu so le khong?\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t15.Kiem tra so nang dan tu trai qua phai khong?\t\t%c", 177, 177);
	printf("\n\t\t %c\t16.Kiem tra so nang dan tu phai qua trai khong?\t\t%c", 178, 178);
	printf("\n\t\t %c\t17.Tim so nguyen duong m lon nhat\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t18.Tim so nguyen duong m nho nhat\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t19.xuat so dao cua so nguyen duong n, n\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t20.Lai suat ngan hang An gui\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t21.Giai phuong trinh ax^2+bx+c=0\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t22.Giai phuong trinh ax^4+bx^2+c=0\t\t\t%c", 178, 178);
	printf("\n\t\t %c\t23.Tinh cac tong\t\t\t\t\t%c", 177, 177);
	printf("\n\t\t %c\t\t0.THOAT CHUONG TRINH\t\t\t\t%c", 178, 178);
	printf("\n\t\t %c______________________________________________________________%c\n", 177, 177);
}
//Tìm UCLN
void UCLN()
{
	int a, b;
	printf("Nhap a = "); scanf_s("%d", &a);
	printf("Nhap b = "); scanf_s("%d", &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("UCLN la: %d\n", a);
}
//Xây d?ng m?t menu ch??ng trình cho phép ng??i dùng l?a ch?n g?m các yêu c?u sau:
void Menuchucnang1()
{
	int luachon;
	do
	{
		printf("\t*************************************************\n");
		printf("\t*\t\tMENU CHUC NANG\t\t\t*\n");
		printf("\t*\t1. In ra man hinh tu Hello.\t\t*\n");
		printf("\t*\t2. In ra man hinh Vong lap for\t\t*\n");
		printf("\t*\t3. In ra man hinh Vong lap while\t*\n");
		printf("\t*\t4. Thoat chuong trinh\t\t\t*\n");
		printf("\t*************************************************\n");
		printf("Ban chon chuc nang nao: ");
		scanf_s("%d", &luachon);
		switch (luachon)
		{
		case 1: printf("HELLO \n");
			break;
		case 2: printf("Vong lap FOR \n");
			break;
		case 3: printf("Vong lap WHILE \n");
			break;
		case 4: printf("Thoat chuong trinh\n");
			break;
		}
	} while (luachon != 4);
}
//Tính t?ng cac s? nguyên d??ng n
void tongsonguyen()
{
	int n;
	printf("\n Nhap vao 1 so nguyen duong:");
	scanf_s("%d", &n);
	int tong = 0;
	while (n > 0)
	{
		tong = tong + n % 10;
		n = n / 10;
	}
	printf("tong cac chu so trong n la: %d", tong);
}
//Hàm ki?m tra SNT
void KiemtraSNT()
{
	int n;
	printf("Kiem tra so nguyen to");
	printf("\nNhap n = ");
	scanf_s("%d", &n);
	if (n < 2)
		printf("\n%d khong phai so nguyen to", n);
	int uocso = 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			uocso++;
	if (uocso == 0)
		printf("\n%d la so nguyen to", n);
	else
		printf("\n%d khong phai so nguyen to", n);
}
//S? nguyên n co bao nhieu so chan
void SoChan()
{
	int n;
	int SoNguyen = 0;
	do
	{
		printf("Nhap n = "); scanf_s("%d", &n);
	} while (n < 0);
	while (n != 0)
	{
		int giatri = n % 10;
		if (giatri % 2 == 0)
			SoNguyen++;
		n /= 10;
	}
	printf("So luong cac chu so chan la: %d", SoNguyen);
}
//Tìm BCNN
void BCNN()
{
	int i, a, b, max, bcnn = 1;//max: s? l?n nh?t gi?a 2 s?
	printf("Nhap so thu nhat: "); scanf_s("%d", &a);
	printf("Nhap so thu hai: "); scanf_s("%d", &b);
	if (a == 0 || b == 0)
		printf("%d va %d khong co boi chung nho nhat", a, b);
	else
	{
		if (a > b)
			max = a;
		else
			max = b;
		int i = max;
		while (1)
		{
			if (i % a == 0 && i % b == 0)
			{
				bcnn = i;
				break;
			}
			i += max;
		}
		printf("Boi so chung nho nhat cua %d va %d la %d", a, b, bcnn);
	}
}
//Tong cac s? t? nhiên nh? h?n n
void TongNhoHonN()
{
	int n, sum = 0;
	printf("\nNhap vao so nguyen duong n: ");
	scanf_s("%d", &n);
	int i = 0;
	while (i < n)
	{
		sum += i;
		i++;
	}
	printf("Tong cac so tu nhien nho hon %d la %d", n, sum);
}
//Lap thao tac
void Lap()
{
	int n, s = 0;
	printf("\n thuc hien viec lap lai thao tac nhap va xuat mot so nguyen bat ky tu ban  phim.Viec nhap ket thuc khi nguoi dung nhap vao gia tri 0");
	do {
		printf("\nNhap vao so nguyen n: "); scanf_s("%d", &n);
		s += n;
	} while (n != 0);
	printf("Chuong trinh ket thuc!");
	printf("\nTong la: %d", s);
}
//lap nhap 3 sn 
void Lap3SN()
{
	printf("\nthuc hien viec lap lai thao tac nhap va xuat mot so nguyen co dung 3 chu so va cac chu so phai khac nhau tu ban phim");
	int n, dem = 0;
	int tram, chuc, donvi;
	do {
		printf("Nhap vao n: "); scanf_s("%d", &n);
		tram = n / 100;
		chuc = n % 100 / 10;
		donvi = n % 10;
		dem++;
	} while (tram != chuc && chuc != donvi && tram != donvi && n < 1000 && n > 99);
	printf("Da nhap %d so!\n", dem - 1);
}
//Hàm chuc nang
void chucnang()
{
	printf("\nTim chu so hang dau tien cua N; tinh tong cac chu so N; C tim chu so lon nhat trong N; dem chu so N; N co phai chu so doi mot khong");
	long n;
	int max = 0, dem = 0;
	int y = 1, a, s = 0;
	printf("Nhap vao n: "); scanf_s("%ld", &n);
	int x = n % 10;
	int b = n % 10;
	while (n != 0)
	{
		a = n % 10;
		s += a;
		if (a > max)
		{
			max = a;
		}
		if (a >= x)
			x = a;
		dem++;
		if (b != a)
		{
			y++;
			b = a;
		}
		n = n / 10;

	}
	printf("\n+) Chu so dau tien cua N la: %d", a);
	printf("\n+) Tong cac chu so cua N la: %d", s);
	printf("\n+) Chu so lon nhat cua N la: %d", max);
	printf("\n+) So cac chu so la: %d", y);
	if (y == dem)
		printf("\n~~> Cac chu so khac nhau!\n");
	else
		printf("\n~~> Cac chu so khong khac nhau!\n");
}
//Toan co tram trau tram bo
void ToanCo()
{
	printf("\n\tTrau dung an nam\n\tTrau nam an ba\n\tLu khu trau gia\n\tBa con mot bo\n\tTram con an co\n\tTram bo no ne");
	int i, j;
	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j <= 100 - i; j++)
		{
			if (i * 5 + j * 3 + (100 - i - j) / 3 == 100)
			{
				printf("%d trau dung, %d trau nam, %d trau gia\n", i, j, 100 - i - j);
			}
		}
	}
}
//Giair phuong trinhf b?c 1
void PTBac1()
{
	float a, b;
	float x;
	printf("\nNhap a: ");
	scanf_s("%f", &a);
	printf("\nNhap b: ");
	scanf_s("%f", &b);
	if (a == 0)
	{
		if (b == 0)
			printf("\nPT co vo so nghiem");
		else
			printf("\nPT vo nghiem");
	}
	else
	{

		x = -b / a;
		printf("\nPT co 1 nghiem la %.2f", x);
	}
}
//Ki?m tra s? ch?n
void KTSoChan()
{
	int n;
	do
	{
		printf("\nNhap vao so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nSo n phai >= 0, vui long nhap lai !");
		}
	} while (n < 0);
	printf("\n<$> So %d co toan cac chu so chan dung khong?\n", n);
	int Kiemtra = 1;
	while (n > 0)
	{
		if ((n % 10) % 2 == 1)
		{
			Kiemtra = 0;
		}
		n /= 10;
	}
	if (Kiemtra == 1)
	{
		printf("\t\t~~> Dung!\n");
	}
	else
	{
		printf("\t\t~~> Sai!\n");
	}
}
//Ki?m tra s? l?
void KTSoLe()
{
	int n;
	do
	{
		printf("\nNhap vao so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nSo n phai >= 0, vui long nhap lai !");
		}
	} while (n < 0);
	printf("\nSo %d co toan cac chu so le dung khong?\n", n);
	int Kiemtra = 1;
	while (n /= 10)
	{
		if ((n % 10) % 2 == 0)
		{
			Kiemtra = 0;
		}
	}
	if (Kiemtra == 1)
	{
		printf("Dung!\n");
	}
	else
	{
		printf("Sai!\n");
	}
}
//T?ng d?n trái qua ph?i
void TangTraiQuaPhai()
{
	int n;
	do
	{
		printf("\nNhap vao so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("\nSo n phai >= 0, vui long nhap lai! ");
		}
	} while (n <= 0);
	int themang = n;
	int ChuSoCuoi = themang % 10;
	themang /= 10;
	int ChuSoKeCuoi = themang % 10;
	themang /= 10;
	printf("\nCac chu so cua %d co tang dan tu trai sang phai hay khong ?\n ", n);
	while (themang != 0)
	{
		if (ChuSoCuoi > ChuSoKeCuoi)
			printf("Co!\n");
		else
			printf("Khong!\n");
		break;
	}
}
//T?ng d?n ph?i qua trái
void TangPhaiQuaTrai()
{
	int n;
	do
	{
		printf("\nNhap vao so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("\nSo n phai >= 0, vui long nhap lai! ");
		}
	} while (n <= 0);
	int KiemTraGiamDan = 1;
	int themang = n;
	int ChuSoCuoi = themang % 10;
	themang /= 10;

	printf("\nCac chu so cua %d co giam dan tu trai sang phai hay khong ?\n ", n);
	while (themang != 0)
	{
		int ChuSoKeCuoi = themang % 10;
		themang /= 10;
		if (ChuSoCuoi > ChuSoKeCuoi)
		{
			KiemTraGiamDan = 0;
		}
		else
		{
			ChuSoCuoi = ChuSoKeCuoi;
		}
	}
	if (KiemTraGiamDan)
		printf("Co!\n");
	else
		printf("Sai!\n");
}
void TimMmax()
{
	printf("Tim so nguyen duong m lon nhat sao cho 1 + 2 + 3 + … + m < n");
	int m = 0, n;
	int s = 0;
	do {
		printf("\nNhap vao so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("\nSo n phai >= 0, vui long nhap lai! ");
		}
	} while (n <= 0);
	while (s < n) {
		++m;
		s += m;
	}
	printf("\nSo m lon nhat la: %d", m - 1);
}
void TimMmin()
{
	printf("Tim so nguyen duong m nho nhat sao cho 1 + 2 + 3 + … + m > n");
	int m = 0, n;
	int s = 0;
	do {
		printf("\nNhap vao so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("\nSo n phai >= 0, vui long nhap lai! ");
		}
	} while (n <= 0);
	while (s <= n) {
		++m;
		s += m;
	}
	printf("\nSo m nho nhat la: %d\n", m);
}
void swap()
{
	int a, b;
	printf("\nNhap a = "); scanf_s("%d", &a);
	printf("\nNhap b = "); scanf_s("%d", &b);
	printf("a = %d, b = %d", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("\na = %d, b = %d", a, b);
}
void laisuat()
{
	float von;
	float lai;
	int soThang = 0;
	printf("nhap vao so tien von An gui: ");
	scanf_s("%f", &von);
	while (von <= 1000)
	{
		lai = 0.007 * von;
		von = von + lai;
		soThang++;
	}
	printf("Sau %d thang so tien An nhan duoc >= 1000USD\n", soThang);
}
void PTbac2()
{
	float a, b, c;
	printf("Nhap he so bac 2, a = ");
	scanf_s("%f", &a);
	printf("Nhap he so bac 1, b = ");
	scanf_s("%f", &b);
	printf("Nhap so hang tu do, c = ");
	scanf_s("%f", &c);
	if (a == 0)
	{
		if (b == 0)
		{
			printf("Phuong trinh vo nghiem!\n");
		}
		else
		{
			printf("Phuong trinh co mot nghiem: x = %f\n", (-c / b));
		}
	}
	// tinh delta
	float delta = b * b - 4 * a * c;
	float x1, x2;
	// tinh nghiem
	if (delta > 0)
	{
		x1 = (float)((-b + sqrt(delta)) / (2 * a));
		x2 = (float)((-b - sqrt(delta)) / (2 * a));
		printf("Phuong trinh co 2 nghiem la: x1 = %.2f va x2 = %.2f\n", x1, x2);
	}
	else if (delta == 0)
	{
		x1 = (-b / (2 * a));
		printf("Phong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
	}
	else
	{
		printf("Phuong trinh vo nghiem!\n");
	}
}
void PTBac4()
{
	double a, b, c, delta, xa, xb, x1, x2, x3, x4;
	printf("Nhap a: "); scanf_s("%lf", &a);
	printf("Nhap b: "); scanf_s("%lf", &b);
	printf("Nhap c: "); scanf_s("%lf", &c);

	delta = (b * b) - (4 * a * c);

	if (a != 0)
	{
		if (delta > 0)
		{
			xa = (-b + sqrt(delta)) / (2 * a);
			xb = (-b - sqrt(delta)) / (2 * a);

			if (xa > 0)
			{
				printf("x1 = %.2lf ", +sqrt(xa));
				printf("x2 = %.2lf ", -sqrt(xa));
			}
			else if (xa == 0)
				printf("x1 = 0 ");

			if (xb > 0)
			{
				printf("x3 = %.2lf ", +sqrt(xb));
				printf("x4 = %.2lf", -sqrt(xb));
			}
			else if (xb == 0)
				printf("x2 = 0");

			printf("\n");
		}
		else if (delta == 0)
		{
			xa = -b / (2 * a);
			if (xa > 0)
			{
				printf("x1 = %.2lf ", +sqrt(xa));
				printf("x2 = %.2lf ", -sqrt(xa));
			}
			else if (xa == 0)
			{
				printf("x = 0");
			}
			else if (xa < 0)
			{
				printf("Pt vo nghiem");
			}
		}
		else if (delta < 0)
		{
			printf("Pt vo nghiem");
		}
	}
	else if (b != 0)
	{
		x1 = (-c / b);
		if (x1 == 0)
			printf("x = 0\n");
		else if (x1 < 0)
			printf("Pt vo nghiem\n");
		else
		{
			printf("x1 = %.2lf", +sqrt(x1));
			printf("x2 = %.2lf", -sqrt(x1));
		}
	}
	else
	{
		if (c != 0)
			printf("Pt vo nghiem\n");
		else
			printf("Pt co vo so nghiem\n");
	}
}
void GiaiToan()
{
	int n;
	float A = 0, B = 0;
	do {
		printf("\nNhap vao so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("\nSo n phai > 0, vui long nhap lai! ");
		}
	} while (n <= 0);
	for (int i = n - 1; i >= 0; i--)
	{
		A = sqrt((n - i) + A);
	}
	for (int i = n; i > 0; i--)
	{
		B = sqrt(B + i);
	}
	printf("\nTong day 1 la: %.2f", A);
	printf("\nTong day 2 la: %.2f", B);
}
//Hàm g?i
int main(int argc, char** argv)
{
	int chon;
	Menu(argc,argv);
	printf("\t+) Chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1: UCLN();
		break;
	case 2: Menuchucnang1();
		break;
	case 3: tongsonguyen();
		break;
	case 4: KiemtraSNT();
		break;
	case 5: SoChan();
		break;
	case 6: BCNN();
		break;
	case 7: TongNhoHonN();
		break;
	case 8: Lap();
		break;
	case 9: Lap3SN();
		break;
	case 10: chucnang();
		break;
	case 11: ToanCo();
		break;
	case 12: PTBac1();
		break;
	case 13: KTSoChan();
		break;
	case 14: KTSoLe();
		break;
	case 15: TangTraiQuaPhai();
		break;
	case 16: TangPhaiQuaTrai();
		break;
	case 17: TimMmax();
		break;
	case 18: TimMmin();
		break;
	case 19: swap();
		break;
	case 20: laisuat();
		break;
	case 21: PTbac2();
		break;
	case 22: PTBac4();
		break;
	case 23: GiaiToan();
		break;
	case 0: printf("CHUONG TRINH DA KET THUC!");
		break;
	default: printf("KHONG CO CHUC NANG MA BAN DA NHAP!"); break;
	}
}

