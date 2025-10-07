<<<<<<< HEAD
#include <stdio.h>

#define MAX 51

void NhapDaySo(int a[], int *n) 
{
    do
    {
        printf("Nhap so luong phan tu trong day so (3 < n < 50): ");
        scanf("%d", n);
    } while (!(*n > 3 && *n < 50));

    for (int i = 0; i < *n; i++) 
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void SoAmDauTien(int a[], int n) 
{
    int i = 0;
    a[n] = 1; 
    while (a[i] >= 0)
        i++;

    if (i == n) 
        printf("Khong co so am trong day!\n");
    else
        printf("So am dau tien la %d tai vi tri a[%d]\n", a[i], i);
}

void TimX(int a[], int n, int x) 
{
    int i = 0;
    a[n] = x; 
    while (a[i] != x)
        i++;

    if (i == n)
        printf("Khong tim thay %d trong day!\n", x);
    else
        printf("Tim thay %d tai vi tri a[%d]\n", x, i);
}

void SoGiamDan(int a[], int n)
{
    int flag = 1;
    for (int i = 1; i < n; i++) 
    {
        if (a[i - 1] < a[i]) 
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Day so giam dan!\n");
    else
        printf("Day so khong giam dan!\n");
}

void SoNguyenDuong(int a[], int n) 
{
    int flag = 1;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] <= 0) 
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Day so nguyen duong!\n");
    else
        printf("Day so khong nguyen duong!\n");
}

int main() 
{
    int a[MAX], n, x;

    NhapDaySo(a, &n);

    SoAmDauTien(a, n);

    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
    TimX(a, n, x);

    SoGiamDan(a, n);

    SoNguyenDuong(a, n);

    return 0;
}
=======
#include<stdio.h> 

#define Square(x) (x)*(x) 

int main() { 
  int a = 2; 
  printf("%d",Square(a)); 
}
>>>>>>> fdaf0ffad2fc7746a46289e01deb3a4c17dffe05
