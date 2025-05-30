#include <stdio.h>

void NhapMang(int n, int mang[]) {
  for (int i = 0; i < n; i++) {
      printf("A[%d] = ", i);
      scanf("%d", &mang[i]);
  }
}

void XuatMang(int n, int mang[]) {
  printf("Cac phan tu cua mang:\n");
  for (int i = 0; i < n; i++) {
    printf("A[%d] = %d\n", i, mang[i]);
  }
}

void TimSoAmMax(int n, int mang[]) {
  int max = mang[0];
  for (int i = 1; i < n; i++) {
    if (mang[i] < 0 && mang[i] > max) {
      max = mang[i];
    }
  }
}

int main() {
  int n;

  printf("Nhap so phan tu cua mang: ");
  scanf("%d", &n);

  int mang[n];
  NhapMang(n, mang);

  XuatMang(n, mang);

  TimSoAmMax(n, mang);
  printf("So am co gia tri nho nhat trong mang la: %d\n", n);

  return 0;
}