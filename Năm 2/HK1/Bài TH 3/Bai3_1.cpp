#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int DocFile(int a[], int *n) 
{ 
  FILE *f = fopen("Lap3_1.inp", "r"); 
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

int TimMaxLap(int a[], int n)
{
  int max = a[0];
  for (int i = 1; i < n; i++)
    if (max < a[i])
      max = a[i];
  return max;
}

int TimMaxDeQuy(int a[], int n)
{
  if (n == 1)
    return a[n - 1];
  else
    return a[n - 1] < TimMaxDeQuy(a, n - 1);
}

int main()
{
  int a[MAX], n;
  if (DocFile(a, &n))
  {
    InDaySo(a, n);
    printf("So lon nhat (vong lap): %d\n", TimMaxLap(a, n));
    printf("So lon nhat (de quy): %d\n", TimMaxDeQuy(a, n));
  }
  return 0;
}