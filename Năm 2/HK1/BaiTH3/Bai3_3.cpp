#include <stdio.h>

#define MAX 51

void NhapMang(int a[], int n, int i) 
{
    if (i == n) 
      return;
    printf("Nhap a[%d]: ", i);
    scanf("%d", &a[i]);
    NhapMang(a, n, i + 1);
}

int DemPTChan(int a[], int n, int i) 
{
    if (i == 0) 
      return 0;
    if (a[i - 1] % 2 == 0) 
      return DemPTChan(a, n, i - 1) + 1;
    else 
      return DemPTChan(a, n, i - 1);
}

int SoNT(int x)
{
  if (x < 2)
    return 0;
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
      return 0;
  }
  return 1;
}

int KTSoNguyenTo(int a[], int n)
{
  if (n == 0)
    return 0;
  if (SoNT(a[n - 1]))
    return 1;
  else
    return KTSoNguyenTo(a, n - 1);
}

int TimVT(int a[], int n, int x, int i)
{
  if (i >= n)
    return -1;
  if (a[i] == x)
    return i;
  else
    return TimVT(a, n, x, i + 1);
}

int main() 
{
    int a[MAX], n, x;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    NhapMang(a, n, 0);

    int dem = DemPTChan(a, n, n);
    printf("So luong phan tu chan trong mang la: %d\n", dem);

    if (KTSoNguyenTo(a, n))
      printf("Mang co chua so nguyen to.\n");
    else
      printf("Mang khong chua so nguyen to.\n");
    
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int vt = TimVT(a, n, x, 0);
    if (vt != -1)
      printf("Gia tri %d tim thay tai vi tri %d.\n", x, vt);
    else
      printf("Gia tri %d khong tim thay trong mang.\n", x);

    return 0;
}