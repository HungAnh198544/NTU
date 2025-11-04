#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int TinhTongChan(int n)
{
  if (n == 2)
    return 0;
  else 
    return TinhTongChan(n - 2) + n;
}

int TongNguyen(int n)
{
  if (n == 0)
    return 0;
  else
    return TongNguyen(n / 10) + n % 10;
}

double TongDSHinhHoc(int a, int r, int n)
{
  if (n == 0)
    return a;
  else
   return a * pow(r, n) + TongDSHinhHoc(a, r, n - 1);
}

int TongChiaHet3(int n)
{
  if (n < 3)
    return 0;
  if (n % 3 == 0)
    return TongChiaHet3(n - 3) + n;
  else
    return TongChiaHet3(n - 1);
}

double TongBieuThucPS(int n)
{
  if (n == 1)
   return 1.0;
  else
    return TongBieuThucPS(n - 1) + 1.0 / n;
}

int main()
{
  int n, a, r, k;
  
  printf("Nhap n: ");
  scanf("%d", &n);
  
  printf("Tong chan tu 2 den %d la: %d\n", n, TinhTongChan(n));
  
  printf("Tong cac chu so cua %d la: %d\n", n, TongNguyen(n));
  
  printf("Nhap a, r, k: ");
  scanf("%d%d%d", &a, &r, &k);
  
  printf("Tong day so hinh hoc la: %.2f\n", TongDSHinhHoc(a, r, k));
  
  printf("Tong cac so chia het cho 3 tu 3 den %d la: %d\n", n, TongChiaHet3(n));
  
  printf("Tong bieu thuc phan so tu 1 den 1/%d la: %.2f\n", n, TongBieuThucPS(n));
  
  return 0;
}