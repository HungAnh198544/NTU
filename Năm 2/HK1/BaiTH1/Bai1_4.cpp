#include <stdio.h>

#define Swap(x, y) (x = x + y, y = x - y, x = x - y)
#define Swap1(x, y) (x = x + y, y = x - y, x = x - y)
#define Print_Arr(a, n) \
  printf("Day so la: "); \
  for (int i = 0; i < n; i++) \
    printf("%d ", a[i]); \
  printf("\n");
#define Min(x, y) ((x < y) ? x : y)

int main()
{
  int a = 2, b = 4, c = 6, d = 8;
  printf("%d, %d", a, b);
  Swap(a, b);
  printf("\nSau hoan doi la: %d, %d\n", a, b);
  printf("%d, %d", c, d);
  Swap1(c, d);
  printf("\nSau hoan doi la: %d, %d\n", c, d);

  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  Print_Arr(arr, n);

  int min = arr[0];
  for (int i = 1; i < n; i++)
    min = Min(min, arr[i]);
  printf("Phan tu nho nhat la: %d\n", min);

  return 0;
}