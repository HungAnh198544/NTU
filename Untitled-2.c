#include <stdio.h>

void ThapHN(int n, char A, char B, char C) 
{
  if (n == 1) 
  {
    printf("%c->%c\n", A, B);
  }
  else
  {
    ThapHN(n - 1, A, C, B);
    printf("%c->%c\n", A, B);
    ThapHN(n - 1, C, B, A);
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  ThapHN(n, 'A', 'B', 'C');
  return 0;
}
