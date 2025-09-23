#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  if (3 < argc && argc <= 20)
  {
    float s = 0;
    for (int i = 1; i < argc; i++)
    {
      s += atof(argv[i]);
    }

    int n = argc - 1;
    printf("TBC cua %d so thuc la: %.2f\n", n, s / n);
  }

  return 0;
}