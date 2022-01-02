#include<stdio.h>
#include<math.h>

void Menu()
{
	char** argv = nullptr;
	printf("\n\t\t ________________________________________________________________\n");
	printf("\t\t %c\t\t\tMENU CHUC NANG\t\t\t\t%c", 179, 179);
	printf("\n\t\t %c\t1. tinh diem trung binh cuoi nam cua sinh vien\t\t%c", 179, 179);
	printf("\n\t\t %c\t2. Nhap so nguyen a,b va 1 phep toan bat ki va tinh\t%c", 179, 179);
	printf("\n\t\t %c\t3. Nhap 1 thang bat ki và in ra bang tieng anh\t\t%c", 179, 179);
	printf("\n\t\t %c\t4. Nhap nam va kiem tra do co phai nam nhuan khong?\t%c", 179, 179);
	printf("\n\t\t %c\t5. Chon chuc nang chuvi & dientich HV, HCN, HT\t\t%c", 179, 179);
	printf("\n\t\t %c\t6. Chon chuc nang xuat, doi nhiet do, tinh cv&dt HT\t%c", 179, 179);
	printf("\n\t\t %c\t7. Tinh diem thi THPT Quoc Gia\t\t\t\t%c", 179, 179);
	printf("\n\t\t %c\t8. Tinh tong va xuat cac so nguyen (xem chi tiet)\t%c", 179, 179);
	printf("\n\t\t %c\t9. Giai cac bai toan sau (chon de xem chi tiet)\t\t%c", 179, 179);
	printf("\n\t\t %c\t10.Ve cac hinh sau (Chon de xem chi tiet)\t\t%c", 179, 179);
	printf("\n\t\t %c\t11.Tinh diem hoc ki cua sinh vien CNTT HuFi\t\t%c", 179, 179);
	printf("\n\t\t %c\t12.Nhap so tu 0 -> 9 bat ki va in ra cach doc\t\t%c", 179, 179);
	printf("\n\t\t %c\t13.nhap vao ky tu so va in ra ki tu thap luc phan\t%c", 179, 179);
	printf("\n\t\t %c\t14.Tinh S(n) = 1 + 1/2 + 1/3 + ... + 1/n\t\t%c", 179, 179);
	printf("\n\t\t %c\t15.Tinh T(x,n)=x^n\t\t\t\t\t%c", 179, 179);
	printf("\n\t\t %c\t16.Chon chuc nang ...(Chon de xem chi tiet)\t\t%c", 179, 179);
	printf("\n\t\t %c\t\t0.THOAT CHUONG TRINH\t\t\t\t%c", 179, 179);
	printf("\n\t\t %c______________________________________________________________%c\n", 179, 179);
}
//Tính điểm tb của sinh viên
void TinhDiemSV()
{
	float tieuluan, giuaki, cuoiki, tb;
	printf("Diem tieu luan: ");
	scanf_s("%f", &tieuluan);
	printf("Diem giua ki: ");
	scanf_s("%f", &giuaki);
	printf("Diem cuoi ki: ");
	scanf_s("%f", &cuoiki);
	tb = 0.2 * tieuluan + 0.3 * giuaki + 0.5 * cuoiki; //Cong thuc tinh diem trung binh
	printf("diem tb cua sinh vien la %.2f\n", tb);
	if (tb >= 8.5)
	{
		printf("diem chu cua sinh vien la %c\n", '\x41');
	}
	else if (tb >= 7)
	{
		printf("diem chu cua sinh vien la %c\n", '\x42');
	}
	else if (tb >= 5.5)
	{
		printf("diem chu cua sinh vien la %c\n", '\x43');
	}
	else if (tb >= 4)
	{
		printf("diem chu cua sinh vien la %c\n", '\x44');
	}
	else if (tb < 4)
		printf("diem chu cua sinh vien la %c\n", '\x46');
}
//Nhập vào 2 số nguyên a và b, nhập vào một phép toán +, -, *, /. Hãy in ra màn hình kết quả của phép toán vừa nhập với 2 số hạng là a, b đã nhập
void PhepToan()
{
	int a, b, ketqua = 0;
	printf("Moi nhap so A: "); scanf_s("%d", &a);
	printf("Moi nhap so B: "); scanf_s("%d", &b);
	_flushall();
	char pt;
	printf("Moi nhap phep tinh (+,-,x,/): "); 
	scanf_s("%c", &pt);
	switch (pt)
	{
	case '+':
		ketqua = a + b;
		break;
	case '-':
		ketqua = a - b;
		break;
	case '*':
		ketqua = a * b;
		break;
	case '/':
		ketqua = (float)a / (float)b;
		break;
	}
	printf("\nKet qua cua phep toan la %d", ketqua);
}
//Nhập một tháng (nhập bằng số), in ra màn hình tháng đó bằng tiếng Anh
void ThangEng()
{
	int thang;
	printf("nhap vao thang:");
	scanf_s("%d", &thang);
	switch (thang)
	{
	case 1:
		printf("Thang %d tieng anh doc la January", thang);
		break;
	case 2:
		printf("Thang %d tieng anh doc la February", thang);
		break;
	case 3:
		printf("Thang %d tieng anh doc la March", thang);
		break;
	case 4:
		printf("Thang %d tieng anh doc la April", thang);
		break;
	case 5:
		printf("Thang %d tieng anh doc la May", thang);
		break;
	case 6:
		printf("Thang %d tieng anh doc la June", thang);
		break;
	case 7:
		printf("Thang %d tieng anh doc la July", thang);
		break;
	case 8:
		printf("Thang %d tieng anh doc la August", thang);
		break;
	case 9:
		printf("Thang %d tieng anh doc la September", thang);
		break;
	case 10:
		printf("Thang %d tieng anh doc la October", thang);
		break;
	case 11:
		printf("Thang %d tieng anh doc la November", thang);
		break;
	case 12:
		printf("Thang %d tieng anh doc la December", thang);
		break;
	default:
		printf("Month is invalid"); break;
	}
}
//Hàm kiểm tra năm nhuận
void KiemtraNamNhuan()
{
	int nam;
	printf("Nhap vao nam ban muon kiem tra: "); scanf_s("%d", &nam);
	if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
		printf("%d la mot nam nhuan", nam);
	else
		printf("%d khong phai la nam nhuan", nam);
}
//Hàm Viết một chương trình tính chu vi, diện tích theo dạng menu
void MenuToan()
{
	printf("******************************************");
	printf("\nHay lua chon cac hinh sau de tinh chu vi va dien tich:\n");
	printf("\t1.Hinh vuong\n\t2.Hinh chu nhat\n\t3.Hinh tron\n");
	printf("******************************************");
	int chon;
	printf("\nLua chon cua ban la (1-3): ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
	{
		int x;
		printf("Ban da lua chon hinh vuong\n");
		printf("\tHay nhap vao do dai canh hinh vuong: ");
		scanf_s("%d", &x);
		int dientich_hv = x * x;
		int chuvi_hv = 4 * x;
		printf("\tKet qua:\n\t\tChu vi hinh vuong: %d\n", chuvi_hv);
		printf("\tKet qua:\n\t\tDien tich hinh vuong: %d", dientich_hv);
		break;
	}
	case 2:
	{
		int a, b;
		printf("Ban da lua chon hinh chu nhat\n");
		printf("\tHay nhap vao do dai hai canh hinh chu nhat: ");
		scanf_s("%d%d", &a, &b);
		int dientich_hcn = a * b;
		int chuvi_hcn = 2 * (a + b);
		printf("\tKet qua:\n\t\tChu vi hinh chu nhat: %d\n", chuvi_hcn);
		printf("\tKet qua:\n\t\tDien tich hinh chu nhat: %d", dientich_hcn);
		break;
	}
	case 3:
	{
		int r;
		const int pi = 3.14;
		printf("Ban da lua chon hinh tron\n");
		printf("\tHay nhap vao ban kinh hinh tron: ");
		scanf_s("%d", &r);
		int chuvi_tron = r * pi;
		int dientich_tron = 2 * pi * r * r;
		printf("\tKet qua:\n\t\tChu vi hinh tron: %d\n", chuvi_tron);
		printf("\tKet qua:\n\t\tDien tich hinh tron: %d\n", dientich_tron);
		break;
	}
	default:printf("Lua chon khong hop le");
	}
}
//Hàm viết chương trình chức năng dạng menu
void MenuChucNang()
{
	int choose;
	printf("******************************************");
	printf("\nChon 1 trong 3 lua chon sau\n");
	printf("\t1.In ra man hinh Xin chao cac ban\n");
	printf("\t2.Chuc nang doi do C sang do F\n");
	printf("\t3.Chuc nang tinh chu vi dien tich hinh tron\n");
	printf("******************************************");
	printf("\nLua chon cua ban la: ");
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:printf("Xin chao cac ban"); break;
	case 2:
	{
		int c;
		printf("\tBan da chon chuc nang doi do C sang do F\n");
		printf("\tHay nhap gia tri nhiet do (do C): ");
		scanf_s("%d", &c);
		int f = (c * 1.8) + 32;
		printf("\t\tGia tri do F la: %d", f);
		break;
	}
	case 3:
	{
		int r;
		const int pi = 3.14;
		printf("Ban da chon chuc nang tinh chu vi dien tich hinh tron\n");
		printf("\tHay nhap vao ban kinh hinh tron: ");
		scanf_s("%d", &r);
		int chuvi_tron = r * pi;
		int dientich_tron = 2 * pi * r * r;
		printf("\tKet qua:\n\t\tChu vi hinh tron: %d", chuvi_tron);
		printf("\tKet qua:\n\t\tDien tich hinh tron: %d", dientich_tron);
		break;
	}
	default:printf("Lua chon khong hop le");
	}
}
//Hàm Tính điểm thi tốt nghiệp THPT
void TinhDiemThi()
{
	float toan, van, anh, su, li, hoa, heso = 10;
	float tb;
	printf("\nNhap diem mon toan: ");
	scanf_s("%f", &toan);
	printf("\nNhap diem mon li: ");
	scanf_s("%f", &li);
	printf("\nNhap diem mon hoa: ");
	scanf_s("%f", &hoa);
	printf("\nNhap diem mon van: ");
	scanf_s("%f", &van);
	printf("\nNhap diem mon anh: ");
	scanf_s("%f", &anh);
	printf("\nNhap diem mon su: ");
	scanf_s("%f", &su);
	printf("\nHe so diem: ");
	scanf_s("%f", &heso);
	heso = heso * 6;
	tb = (float)((toan)+(li)+(hoa)+(van)+(anh)+(su)) / 6;
	printf("\n\nDiem trung binh cua 6 mon la: %.2f\n", tb);
	if (tb >= 8.0 && toan > 6.5 && li > 6.5 && hoa > 6.5 && van > 6.5 && anh > 6.5 && su > 6.5)
		printf("Loai Gioi");
	else if (tb >= 7.0 && toan > 5 && li > 5 && hoa > 5 && van > 5 && anh > 5 && su > 5)
		printf("Loai Kha");
	else if (tb >= 5.0 && toan > 3.5 && li > 3.5 && hoa > 3.5 && van > 3.5 && anh > 3.5 && su > 3.5)
		printf("Loai Trung binh");
	else
		printf("Loai Yeu");
}
//Hàm viết chương trình tính toán menu
void MenuToan1()
{
	printf("******************************************");
	printf("\nMenu chon chuc nang: ");
	printf("\n 1. Tong cac so nguyen 1 den 100\t\n 2. Tong cac so nguyen tu 1 den n\t\n 3. Xuat cac so chan nam trong [m,n]");
	printf("\n******************************************");
	int tong = 0, chon;
	printf("\n Moi ban chon chuc nang: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		for (int i = 1; i <= 100; i++)
		{
			tong = tong + i;
		}
		printf("\n Tong cac so nguyen tu 1 den 100 = %d", tong);
		break;
	case 2:
		int n;
		printf("\n Nhap vao n: "); scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			tong = tong + i;
		} printf("\n Tong cac so nguyen tu 1 den %d =%d", n, tong);
		break;
	case 3:
		int M, N;
		printf("\n Nhap vao m, n: "); scanf_s("%d%d", &M, &N);
		printf("\n Cac so chan nam trong doan tu m den n la: ");
		if (M > N) {
			printf("\n Khong hop le!");
		}
		else {
			for (int i = M; i <= N; i++)
			{
				if (i % 2 == 0)
				{
					printf("%3d", i);
				}
			}
		}
		break;
	default:
		printf("\n Moi ban chon lai!");
		break;
	}
}
//Hàm viết menu toán 
void MenuToan2()
{
	int i = 0;
	printf("\t*************************************");
	printf("\n\t\t\t CHUONG TRINH TINH\n\n");
	int chon, n, s = 1, s1 = 0;
	float s2 = 0;
	printf("\tmoi ban chon nhung chuc nang sau:\n");
	printf("\t\t1.s=1*2*3**4*5*...*n\n");
	printf("\t\t2.s=2+4+6+8+...20\n");
	printf("\t\t3.s=1*2+2*3+3*4+...+n(n+1)\n");
	printf("\t\t4.s=1/1*2*3+1/2*3*4+...1/n(n+1)(n+2)\n");
	printf("\t\t5.s=1-2+3-4+...+(-1)^n-1*n\n");
	printf("\t*************************************");
	printf("\n\nMoi ban chon: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1: printf("ban da chon 1\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
			s *= i;
		{
			printf("s=%d\n", s);
		}
		break;
	case 2: printf("ban da chon 2\n");
		for (int i = 2; i <= 20; i++)
		{
			if (i % 2 == 0)
			{
				s1 += i;
			}
		}
		printf("s=%d", s1);
		break;
	case 3: printf("ban da chon 3\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			s1 += i * (i + 1);
		}
		printf("s=%d", s1);
		break;
	case 4: printf("ban da chon 4\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			s2 += (float)1 / (i * (i + 1) * (i + 2));
		}
		printf("s = %.2f", s2);
		break;
	case 5: printf("ban da chon 5\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			s1 += pow(-1, i - 1) * i;
		}
		printf("s=%d", s1);
		break;

	default: printf("chuong trinh ket thuc\n");
		break;
	}
}
//Hàm vẽ
void vehinh()
{
	printf("Hay chon mot trong cac chuc nang ben duoi: \n");
	printf("==========================================\n");
	printf("\t1.Hinh tam giac\n\t2.Hinh kim tu thap\n\t3.Hinh tam giac nguoc");
	printf("\n==========================================");
	int chon;
	printf("\nLua chon cua ban la (1-3): ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
	{
		int sodong;
		printf("Ban da lua chon Hinh tam giac\n");
		printf("Nhap so dong: ");
		scanf_s("%d", &sodong);
		for (int i = 0; i < sodong; i++)
		{
			for (int j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	break;
	case 2:
	{
		int sodong;
		printf("Ban da lua chon Hinh kim tu thap\n");
		printf("Nhap so dong: ");
		scanf_s("%d", &sodong);
		for (int i = 0; i < sodong; i++) {
			for (int j = 0; j < sodong - i - 1; j++) {
				printf(" ");
			}
			for (int k = 0; k < 2 * i + 1; k++) {
				printf("*");
			}
			printf("\n");
		}
		break;
	}
	case 3:
	{
		int sodong;
		printf("Ban da lua chon Hinh tam giac nguoc\n");
		printf("Nhap so dong: ");
		scanf_s("%d", &sodong);
		for (int i = 0; i < sodong; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int k = 0; k < sodong - i; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;
	default:
		printf("\n Moi ban chon lai!");
		break;
	}
	}
}
//Điểm HK1 ngành cntt
void DiemHK()
{
	float d1, d2, d3, d4, tb;
	int hs1, hs2, hs3, hs4;

	printf("\nNhap diem mon 1= "); scanf_s("%f", &d1);
	printf("\nNhap diem mon 2= "); scanf_s("%f", &d2);
	printf("\nNhap diem mon 3= "); scanf_s("%f", &d3);
	printf("\nNhap diem mon 4= "); scanf_s("%f", &d4);
	printf("\nSo tin chi mon 1 la: "); scanf_s("%d", &hs1);
	printf("\nSo tin chi mon 2 la: "); scanf_s("%d", &hs2);
	printf("\nSo tin chi mon 3 la: "); scanf_s("%d", &hs3);
	printf("\nSo tin chi mon 4 la: "); scanf_s("%d", &hs4);

	tb = (d1 * hs1 + d2 * hs2 + d3 * hs3 + d4 * hs4) / (hs1 + hs2 + hs3 + hs4);
	printf("\nDiem trung binh he 10 la: %.1f\n", tb);
	if (tb >= 8.5) {
		printf("He diem 4 la: 4");
		printf("\nHe diem chu la: A");
	}
	else if (tb >= 8) {
		printf("He diem 4 la: 3.5");
		printf("\nHe diem chu la: B+");
	}
	else if (tb > 7) {
		printf("He diem 4 la: 3");
		printf("\nHe diem chu la: B");
	}
	else if (tb >= 6.5) {
		printf("He diem 4 la: 2.5");
		printf("\nHe diem chu la: C+");
	}
	else if (tb >= 5.5) {
		printf("He diem 4 la: 2");
		printf("\nHe diem chu la: C");
	}
	else if (tb >= 5) {
		printf("He diem 4 la: 1.5");
		printf("\nHe diem chu la: D+");
	}
	else if (tb >= 4) {
		printf("He diem 4 la: 1");
		printf("\nHe diem chu la: D");
	}
	else {
		printf("He diem 4 la: 0");
		printf("\nHe diem chu la: F");
	}
}
//Nhập số từ 0-9 bất kì in ra cách đọc
void DocSo()
{
	int a;
	printf("Nhap vao so tu nhien bat ki (0-9): ");
	scanf_s("%d", &a);
	switch (a)
	{
	case 0:printf("Cach doc so vua nhap: Khong"); break;
	case 1:printf("Cach doc so vua nhap: Mot"); break;
	case 2:printf("Cach doc so vua nhap: Hai"); break;
	case 3:printf("Cach doc so vua nhap: Ba"); break;
	case 4:printf("Cach doc so vua nhap: Bon"); break;
	case 5:printf("Cach doc so vua nhap: Nam"); break;
	case 6:printf("Cach doc so vua nhap: Sau"); break;
	case 7:printf("Cach doc so vua nhap: Bay"); break;
	case 8:printf("Cach doc so vua nhap: Tam"); break;
	case 9:printf("Cach doc so vua nhap: Chin"); break;
	default:printf("Gia tri khong hop le");
	}
}
//Nhập hệ thập lục phân
void HeThapLucPhan()
{
	int i, n, x, s = 0;
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("Nhap x: "); scanf_s("%d", &x);
	for (i = 1; i <= n; i++)
		s = s + pow(x, i);
	printf("\nS(%d,%d)=x+x^2+ x^3 + ... +x^n = %3d", x, n, s);
}
//Tính S(n) = 1 + 1/2 + 1/3 + ... + 1/n
void GiaiToan()
{
	int n;
	float s = 0;
	printf("Moi nhap n: "); scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		s += 1 / (float)i;
	}
	printf("\n S(n) = 1 + 1/2 + 1/3 + ... + 1/n = %.2f", s);
}
//Tính T(x,n)=x^n
void GiaiToan1()
{
	int i, n, x, t = 1;
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("Nhap x: "); scanf_s("%d", &x);
	for (i = 1; i <= n; i++)
		t = t * x;
	printf("\n Tich (x,n) = %3d", x,n,t);
}
//Chức Năng đếm xuất
void MenuChucNang1()
{
	int chon;
	int n, m = 0, a = 0, b = 0, c, dem = 0, tinh = 0;
	printf("\t\t******************************************");
	printf("\n\t\t\tCHON 1 TRONG 7 LUA CHON SAU\n");
	printf("\t1. Dem cac so chan tu 1 den n, voi n duoc nhap vao.\n	");
	printf("2. Xuat cac so co hang chuc la so 2 nam trong [m,n] voi m va n duoc nhap vao. \n");
	printf("\t3. Tong cac so chan co 2 chu so va nho hon 100. \n");
	printf("\t5. Xuat cac uoc so cua N va nam trong khoang [a,b] voi N, a,b duoc nhap vao.\n");
	printf("\t4. Dem cac so la boi cua 3 va co dung 2 chu so. \n");
	printf("\t6. Xuat cac so co dung 3 chu so sao cho tong cac chu so la chan. \n");
	printf("\t7. Xuat cac so co dung 3 chu so sao cho cac chu so phai khac nhau.\n ");
	printf("\t\t******************************************");
	printf("\nLua chon cua ban la: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		printf("Nhap vao so n: "); scanf_s("%d", &n);
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				dem++;
			}
		}
		printf("Cac so tu 1 den %d chan la: %d\n", n, dem);
		break;
	case 2:
		do
		{
			printf("Nhap vao hai so m,n: "); scanf_s("%d%d", &m, &n);
			printf("Cac so co hang chuc la 2: ");
		} while (m > n);
		for (int i = m; i <= n; i++)
		{
			if (i % 100 / 10 == 2)
			{
				printf("%d, ", i);
			}
		}
		break;
	case 3:
		for (int i = 10; i <= 99; i++) {
			if (i % 2 == 0) {
				a += i;
			}
		}
		printf("Tong la: %d", a);
		break;
	case 4:
		for (int i = 10; i <= 99; i++) {
			if (i % 3 == 0) {
				tinh++;
			}
		}
		printf("Co %d so la boi cua ba va co hai chu so", tinh);
		break;
	case 5:
		do {
			printf("Nhap vao a: "); scanf_s("%d", &a);
			printf("Nhap vao b: "); scanf_s("%d", &b);
		} while (a > b);
		printf("Nhap vao c: "); scanf_s("%d", &c);
		printf("Cac so la uoc cua c trong khoang [a,b] la: ");
		for (int i = a; i <= b; i++) {
			if (c % i == 0) {
				printf("%d, ", i);
			}
		}
		break;
	case 6:
		printf("Cac so co ba chu so va tong cac chu so la so chan la: ");
		for (int a = 100; a <= 999; a++) {
			int x = a / 100;
			int y = a % 100 / 10;
			int z = a % 10;
			if ((x + y + z) % 2 == 0) {
				printf("%d, ", a);
			}
		}
		break;
	case 7:
		printf("Cac so co ba chu so va co cac chu so khac nhau la: ");
		for (int a = 100; a <= 999; a++) {
			int x = a / 100;
			int y = a % 100 / 10;
			int z = a % 10;
			if (x != y && x != z && y != z) {
				printf("%d, ", a);
			}
		}
		break;
	}
}
//Hàm gọi
int main()
{
	int chon;
	Menu();
	printf("\n\t+) Moi Ban Chon Chuc Nang Ban Muon Thuc Hien: "); scanf_s("%d", &chon);
	switch (chon)
	{
	case 1: TinhDiemSV();
		break;
	case 2: PhepToan();
		break;
	case 3: ThangEng();
		break;
	case 4: KiemtraNamNhuan();
		break;
	case 5: MenuToan();
		break;
	case 6: MenuChucNang();
		break;
	case 7: TinhDiemThi();
		break;
	case 8: MenuToan1();
		break;
	case 9: MenuToan2();
		break;
	case 10: vehinh();
		break;
	case 11: DiemHK();
		break;
	case 12: DocSo();
		break;
	case 13: HeThapLucPhan();
		break;
	case 14: GiaiToan();
		break;
	case 15: GiaiToan1();
		break;
	case 16: MenuChucNang1();
		break;
	case 0: printf("CHUONG TRINH DA KET THUC!\n");
		break;
	default: printf("KHONG CO CHUC NANG MA BAN DA NHAP!\n"); break;
	}
}