#include <stdio.h>

int so_hoan_thien(int n) 
{
    int so = 0, toan_bo = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) 
            toan_bo += i;
    }
    if (toan_bo == n && n != 0) 
        so = 1;

    return so;
}
int main() 
{
    int n;

    printf("nhap mot so: ");
    scanf_s("%d", &n);

    int kq = so_hoan_thien(n);

    if (kq == 1) printf("%d la so hoan thien\n", n);
    else printf("%d khong phai la so hoan thien\n", n);
    return 0;
}