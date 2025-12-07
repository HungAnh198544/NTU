#include <stdio.h>

#define MAX 100

int n, m;
int B[MAX], C[MAX];

void MergeOrder(int i, int j) 
{
  if (i > n) 
  {          
    while (j <= m) 
    {
      printf("c%d ", j);
      j++;
    }
    return;
  }
  if (j > m) 
  {          
    while (i <= n) 
    {
      printf("b%d ", i);
      i++;
    }
    return;
  }

  if (B[i] <= C[j]) 
  {
    printf("b%d ", i);
    MergeOrder(i + 1, j);
  } 
  else 
  {
    printf("c%d ", j);
    MergeOrder(i, j + 1);
  }
}

int main() 
{
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) 
      scanf("%d", &B[i]);
    for (int i = 1; i <= m; i++) 
      scanf("%d", &C[i]);

    MergeOrder(1, 1);

    return 0;
}
