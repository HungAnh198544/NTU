#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc == 4)
  {
    int a = atoi(argv[1]);
    char pheptinh = argv[2][0];
    int b = atoi(argv[3]);

    switch (pheptinh)
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
  }
  else

  return 0;
}
