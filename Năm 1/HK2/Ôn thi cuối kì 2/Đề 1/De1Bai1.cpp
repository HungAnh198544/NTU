#include <stdio.h>

#define MAX 10

void NhapMT(int a[MAX][MAX], int n) 
{
  printf("Nhap cac phan tu cua ma tran %d x %d:\n", n, n);
  
	for (int i = 0; i < n; i++) 
	{
    for (int j = 0; j < n; j++) 
	{
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
}

void XuatMT(int a[MAX][MAX], int n) 
{
  printf("Ma tran a:\n");
  for (int i = 0; i < n; i++) 
	{
    for (int j = 0; j < n; j++) 
		{
      printf("%4d ", a[i][j]);
    }
    printf("\n");
  }
}

void MinTamGiacTren(int a[MAX][MAX], int n) 
{
  if (n <= 1) {
    printf("Khong co tam giac tren de tim gia tri.\n");
    return;
  }

  int min = a[0][1];
  int dem = 0;

  for (int i = 0; i < n; i++) 
	{
    for (int j = 0; j < n; j++) 
		{
      if (i < j) {
        if (a[i][j] < min) 
				{
          min = a[i][j];
          dem = 1;
        } else if (a[i][j] == min) 
				{
          dem++;
        }
      }
    }
  }

  printf("Phan tu nho nhat nam o tam giac tren duong cheo chinh la: %d\n", min);
  printf("So lan xuat hien cua phan tu do: %d\n", dem);
}

int KTGiamDan(int a[MAX][MAX], int n, int d) 
{
  for (int i = 0; i < n - 1; i++) 
	{
    if (a[d][i] < a[d][i + 1])
		{
      return 0;
		}
  }
  return 1;
}

int main() 
{
  int n;
  int a[MAX][MAX];
  int d;

  do 
	{
    printf("Nhap kich thuoc ma tran vuong (2 < n <= 10): ");
    scanf("%d", &n);
  } while (!(n > 2 || n <= 10));

  NhapMT(a, n);
  
	XuatMT(a, n);
  
	MinTamGiacTren(a, n);

  do 
	{
    printf("Nhap chi so hang d (0 <= d <= %d): ", n - 1);
    scanf("%d", &d);
  } while (!(0 <= d && d < n));

  if (KTGiamDan(a, n, d)) 
	{
    printf("Cac phan tu tren hang %d sap xep theo thu tu giam dan\n", d);
  } else 
	{
    printf("Cac phan tu tren hang %d khong sap xep theo thu tu giam dan\n", d);
  }

  return 0;
}
