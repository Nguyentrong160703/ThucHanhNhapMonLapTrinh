#include <stdio.h>
#include <conio.h>
int main()
{
	int ngayDen, ngayDi, ngayDaO;
	int tuan = 650;
	int ngay = 100;
	printf("nhap ngay den va ngay di (1-31)\n");
	scanf("%d%d", &ngayDen, &ngayDi);
	ngayDaO = ngayDi - ngayDen;
	int sotuan=ngayDaO/7;
	int songayle=ngayDaO%7;
	int thanhTien = (ngayDaO / 7 * 650) + (ngayDaO % 7 * 100);
	printf("so tien can phai tra la %d\n", thanhTien);
	printf("SoTuan  GiaTuan  TienTuan  SoNgayLe  GiaNgay   TienNgay   TongTien\n");
	printf("%7d %8d %9d %9d %8d %9d %9d", sotuan, tuan, sotuan*tuan, songayle, ngay, ngay*songayle, thanhTien );

	return 0;
	
}
