#include <stdio.h>

inline int TimLN(int a, int b, int c)
{
  int max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;
  return max;
}

unsigned int TinhHP(unsigned int sotc, unsigned int dgia = 550000) 
{
  return sotc * dgia;
}

float TinhHB(float hso = 1.0f, unsigned int coso = 600000)
{
  return hso * coso;
}

int main()
{
  int a = 12, b = 20, c = 15;
  printf("So lon nhat trong 3 so la: %d\n", TimLN(a, b, c));

  printf("Nhap so tin chi cua HP: ");
  unsigned int tc;
  scanf("%u", &tc);
  printf("Tong hoc phi cua HP la: %u\n", TinhHP(tc));

  printf("Nhap diem TB cua HK: ");
  float dtb;
  scanf("%f", &dtb);

  float tienHB = 0.0f;
  
  if (7 <= dtb && dtb < 8)
    tienHB = TinhHB(1.0f, 600000);
  else if (8 <= dtb && dtb < 9)
    tienHB = TinhHB(1.3f, 600000);
  else if (9 <= dtb)
    tienHB = TinhHB(1.5f, 600000);
  else
    printf("Khong duoc hoc bong!\n");

  if (tienHB > 0)
    printf("Hoc bong cua HK la: %.1f\n", tienHB);

  return 0;
}
