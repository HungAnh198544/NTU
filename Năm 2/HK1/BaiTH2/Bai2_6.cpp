#include <stdio.h>

#define MAX 50

void NhapMang(int a[], int *n) 
{
    do 
    {
        printf("Nhap so luong phan tu (3 < n < 50): ");
        scanf("%d", n);
    } while (*n <= 3 || *n >= 50);

    printf("Nhap %d phan tu cua day so:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}

int SoChanDauTien(int a[], int n) 
{
    a[n] = 0;  
    int i = 0;
    while (a[i] % 2 != 0) 
        i++;
    if (i == n)
        return -1;
    else
        return a[i];
}

int KiemTraGiamDan(int a[], int n) 
{
    int flag = 1; 
    for (int i = 0; i < n - 1; i++) 
    {
        if (a[i] < a[i + 1]) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() 
{
    int a[MAX + 1]; 
    int n;

    NhapMang(a, &n);

    int sc = SoChanDauTien(a, n);
    if (sc == -1)
        printf("Day khong co so chan.\n");
    else
        printf("So chan dau tien trong day la: %d\n", sc);

    if (KiemTraGiamDan(a, n))
        printf("Day la day giam dan.\n");
    else
        printf("Day khong giam dan.\n");

    return 0;
}
