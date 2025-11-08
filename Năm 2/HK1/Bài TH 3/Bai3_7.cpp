#include <stdio.h>

#define MAX 50

void NhapMang(float a[], int n, int i)
{
    if (i == n)
        return;
    printf("a[%d] = ", i);
    scanf("%f", &a[i]);
    NhapMang(a, n, i + 1);
}

void XuatMang(float a[], int n, int i)
{
    if (i == n)
        return;
    printf("%.2f ", a[i]);
    XuatMang(a, n, i + 1);
}

float TongViTriLe(float a[], int n, int i)
{
    if (i >= n)
        return 0;
    if (i % 2 == 1)
        return a[i] + TongViTriLe(a, n, i + 1);
    else
        return TongViTriLe(a, n, i + 1);
}

float TichDay(float a[], int n, int i)
{
    if (i == n - 1)
        return a[i];
    return a[i] * TichDay(a, n, i + 1);
}

int DemLonHonX(float a[], int n, int i, float x)
{
    if (i == n)
        return 0;
    return (a[i] > x) + DemLonHonX(a, n, i + 1, x);
}

int ToanDuong(float a[], int n, int i)
{
    if (i == n)
        return 1; 
    if (a[i] <= 0)
        return 0;
    return ToanDuong(a, n, i + 1);
}

int main()
{
    int n;
    float a[MAX], x;

    do
    {
        printf("Nhap so phan tu n (2 <= n < 50): ");
        scanf("%d", &n);
    } while (n < 2 || n >= 50);

    printf("Nhap day so thuc:\n");
    NhapMang(a, n, 0);

    printf("\nDay vua nhap: ");
    XuatMang(a, n, 0);
    printf("\n");

    float tongLe = TongViTriLe(a, n, 0);
    printf("Tong cac phan tu o vi tri le = %.2f\n", tongLe);

    float tich = TichDay(a, n, 0);
    printf("Tich cac phan tu trong day = %.2f\n", tich);

    printf("Nhap gia tri x: ");
    scanf("%f", &x);
    int dem = DemLonHonX(a, n, 0, x);
    printf("So phan tu lon hon %.2f la: %d\n", x, dem);

    if (ToanDuong(a, n, 0))
        printf("Day toan so duong.\n");
    else
        printf("Day khong phai toan so duong.\n");

    return 0;
}
