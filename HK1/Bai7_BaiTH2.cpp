#include <stdio.h>

void nhap_mang(int mang[], int n) {
  printf("Nhap vao %d phan tu cua mang: \n", n);
  for (int i = 0; i < n; i++) {
    printf("Phan tu thu %d: ", i + 1);
    scanf("%d", &mang[i]);
  }
}

void chen_phan_tu(int mang[], int *n, int x, int i) {
  if (i < 0 || i > *n) {
    printf("Vi tri khong hop le\n");
    return;
  }

  for (int j = *n; j > i; j--) {
    mang[j] = mang[j - 1];
  }

  mang[i] = x;

  (*n)++;
}

void in_mang(int mang[], int n) {
  printf("Mang sau khi chen phan tu la: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", mang[i]);
  }
  printf("\n");
}

int main() {
  int n, x, i;

  printf("Nhap vao so phan tu cua mang: ");
  scanf("%d", &n);

  int mang[n + 1];

  nhap_mang(mang, n);

  printf("Nhap phan tu x can chen: ");
  scanf("%d", &x);
  printf("Nhap vi tri i (0 <= i <= %d) de chen phan tu: ", n);
  scanf("%d", &i);

  chen_phan_tu(mang, &n, x, i);

  in_mang(mang, n);

  return 0;
}