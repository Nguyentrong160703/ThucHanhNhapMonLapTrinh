#include"stdio.h"
int main(){
            char tenSanPham; 
            float thue, tongTien,soLuong, donGia, tien;
    printf("nhap ten san pham can mua: ");
    scanf("%s",&tenSanPham);
    printf("Nhap vao so luong va don gia ban da mua:\n");
    scanf("%f%f",&soLuong,&donGia);
        tien=soLuong * donGia;
        thue=tien * 0.1;
        tongTien=tien+thue;
    printf("So tien chua tinh thue la: %0.1f\n",tien);
    printf("So tien thue la: %0.1f\n",thue);
    printf("Tong so tien ban phai tra la: %0.1f",tongTien);
 return 1;
}
