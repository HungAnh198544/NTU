#include <stdio.h>
#include <stdbool.h>

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
  printf("Ma tran a: \n");

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%4d \n", a[i][j]);
    }
  }
}

void MinDuongCheoChinh(int a[MAX][MAX], int n)
{
  int min = a[0][0];
  int dem = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        if (a[i][i] < min) 
        {
          min = a[i][i];
          dem = 1;
        } else if (a[i][i] == min) 
        {
          dem++;
        }
      }
    }
  }

  printf("Phan tu nho nhat tren duong cheo chinh la %d\n", min);
  printf("So lan xuat hien cua phan tu do tren duong cheo chinh la %d\n", dem);
}

bool SoHoanHao(int a)
{
  int sum = 0;
  
  if (a <= 1)
  {
    return false;
  } 
  for (int i = 1; i < a; i++)
  {
    if (a % i == 0)
    {
      sum += i;
    }
  }

  return sum == a;
}

int TongSoHoanHao(int a[MAX][MAX], int n)
{
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (SoHoanHao(a[i][j]))
      {
        sum += a[i][j];
      }
    }
  }

  return sum;
}

void KTSoTangDan(int a[MAX][MAX], int n)
{
  int k;
  int dem = 0;

  printf("Nhap dong k (0 <= k <= ): ");
  scanf("%d", &k);

  for (int j = 0; j < n; j++)
  {
    if (a[k][j] > a[k][j + 1])
    {
      dem = 0;
      break;
    }
    else
    {
      dem++;
    }
  }

  if (dem == n)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
}

int main()
{
  int n;
  int a[MAX][MAX];

  do 
  {
    printf("Nhap kich thuoc ma tran vuong (2 < n <= 10): ");
    scanf("%d", &n);
  } while (!(n > 2 || n <= 10));

  NhapMT(a, n);

  XuatMT(a, n);

  MinDuongCheoChinh(a, n);

  int KQ = TongSoHoanHao(a, n);
  printf("Gia tri cac phan tu la so hoan hao trong ma tran: %d\n", KQ);

  KTSoTangDan(a, n);

  return 0;
}