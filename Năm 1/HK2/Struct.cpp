#include <stdio.h>
#include <math.h>

struct DIEM {
  int x;
  int y;
};

void NhapDiem(DIEM &d) {
  printf("Nhap toa do x: ");
  scanf("%d", &d.x);
  printf("Nhap toa do y: ");
  scanf("%d", &d.y);
}

void InDiem(DIEM d) {
  printf("Toa do cua diem la: (%d, %d)", d.x, d.y);
}

float TinhKhoangCach(DIEM d1, DIEM d2) {
  return sqrt(pow((d2.x - d1.x), 2) + pow((d2.y - d1.y), 2));
}

int main() {
  DIEM d1, d2;
  
  printf("Nhap diem thu nhat: \n");
  NhapDiem(d1);
  printf("Nhap diem thu 2: \n");
  NhapDiem(d2);

  float kc = TinhKhoangCach(d1, d2);
  printf("Khoang cach giua 2 diem (%d, %d) va (%d, %d): %.1f", d1.x, d1.y, d2.x, d2.y);
}