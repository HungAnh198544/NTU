#include <stdio.h>

int main(int c, char *v[])
{
  if (c == 4)
  {
    int a = atoi(v[1]);
    char c = v[2][0];
    int b = atoi(v[3]);
  }

  switch (c)
  {
  case '+':
    printf("%d + %d = %d\n", a, b, a + b);
    break;
  case '-':
    printf("%d - %d = %d\n", a, b, a - b);
    break;
  case '*':
    printf("%d * %d = %d\n", a, b, a * b);
    break;
  case '/':
    if (b != 0)
      printf("%d / %d = %.2f\n", a, b, (float)a / b);
    else
      printf("Khong the chia cho 0\n");
    break;
  default:
    printf("Phep tinh khong hop le!\n");
    break;
  }
  else
    {
        printf("Cu phap: %s so1 toantu so2\n", v[0]);
    }

  return 0;
}
