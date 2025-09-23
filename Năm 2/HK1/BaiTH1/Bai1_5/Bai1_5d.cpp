#include <stdio.h>

float TinhDT(float d, float r)
{
  return d * r;
}

float TinhDT(float bk)
{
  return 3.14f * bk * bk;
}

int main()
{
  float d, r;
  printf("Nhap chieu dai va chieu rong: ");
  scanf("%f%f", &d, &r);
  printf("Dien tich hinh chu nhat la: %.2f\n", TinhDT(d, r));

  float bk;
  printf("Nhap ban kinh: ");
  scanf("%f", &bk);
  printf("Dien tich hinh tron la: %.2f\n", TinhDT(bk));

  return 0;
}