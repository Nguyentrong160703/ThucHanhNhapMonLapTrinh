#include<stdio.h>
#include<math.h>

int KiemTraSoChinhPhuong(int n)
{
    int i = sqrt(n);
    if (i * i == n)
    {
        return 1;
    }
    return 0;
}
void LietKeSoChinhPhuong(int n)
{
    printf("So chinh phuong nho hon %d: ", n);
    for (int i = 1; i <= sqrt(n); i++)
        printf(" %d ", i * i);
}
int DemSoChinhPhuong(int n)
{
    int dem = 0, i;
    for (i = 1; i < n; i++)
        if (KiemTraSoChinhPhuong(i) == 1)
            dem++;
    return dem;
}
int main()
{
    int n;
    printf(" Enter n: "); scanf_s("%d", &n);
    int kt = KiemTraSoChinhPhuong(n);
    if (kt == 1) {
        printf("%d la so chinh phuong!\n", n);
    }
    else {
        printf("%d khong la so chinhg phuong\n", n);
    }
    LietKeSoChinhPhuong(n);
    printf("\nCo %d so chinh phuong nho hon %d\n", DemSoChinhPhuong(n), n);
}