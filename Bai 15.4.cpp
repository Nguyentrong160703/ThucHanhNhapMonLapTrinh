#include<stdio.h>
#include<math.h>

int chinhphuong(int n)
{
    int b, i, j = 0;
    i = 2;
    while (j < n)
    {
        b = sqrt(i);
        if (b * b == i)
        {
            printf("%d ", i);
            j++;
        }
        i = i + 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    chinhphuong(n);

}