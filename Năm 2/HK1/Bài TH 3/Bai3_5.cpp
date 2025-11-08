#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int DocFile(int a[], int *n) 
{ 
  FILE *f = fopen("DaySo35.inp", "r"); 
  if (f == NULL) 
  { 
    printf("Khong the mo tap tin!\n"); 
    return 0; 
  } 
  else 
  { 
    fscanf(f, "%d", n); 
    if (!(2 <= *n && *n <= MAX)) 
    { 
      printf("Khong hop le!\n"); 
      fclose(f); 
      return 0; 
    }
    
    for (int i = 0; i < *n; i++) 
      if (fscanf(f, "%d", &a[i]) != 1) 
      { 
        printf("ERROR!\n"); 
        fclose(f); 
        return 0; 
      } 
    fclose(f); 
    return 1; 
  } 
}

void InDaySo(int a[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d", a[i]);
  printf("\n");
}

float TimMin_Lap(int a[], int n)
{
  int min = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] < min)
      min = a[i];
  return min;
}

float TimMin_DeQuy(float a[], int n)
{
    if (n == 1)
        return a[0];
    float minCon = TimMin_DeQuy(a, n - 1);
    return (a[n - 1] < minCon) ? a[n - 1] : minCon;
}

float Tong_DeQuyDau(float a[], int n)
{
    if (n == 0)
        return 0;
    return a[n - 1] + Tong_DeQuyDau(a, n - 1);
}

float Tong_DeQuyDuoi(float a[], int n, float tong)
{
    if (n == 0)
        return tong;
    return Tong_DeQuyDuoi(a, n - 1, tong + a[n - 1]);
}

int main()
{
  float a[MAX];
  int n;

  if (!DocFile(a, &n, "DaySo35.inp"))
        return 1;

  InDaySo(a, n);

  printf("Day so doc duoc tu file:\n");
  InDaySo(a, n);
  
  float MinLap = TimMin_Lap(a, n);
  float MinDeQuy = TimMin_DeQuy(a, n);
  printf("So nho nhat (lap): %d\n", MinLap);
  printf("So nho nhat (de quy): %d\n", MinDeQuy);

  float TongDau = Tong_DeQuyDau(a, n);
  float TongDuoi = Tong_DeQuyDuoi(a, n, 0);
  printf("Tong day so (de quy dau): %.2f\n", TongDau);
  printf("Tong day so (de quy duoi): %.2f\n", TongDuoi);
  
  return 0;
}