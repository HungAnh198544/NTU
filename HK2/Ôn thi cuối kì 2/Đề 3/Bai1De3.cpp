#include <stdio.h>

#define MAX 10

void NhapMT(int a[MAX][MAX], int n) {
  printf("Nhap cac phan tu cua MT %d x %d:\n", n, n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
}

void XuatMT(int a[MAX][MAX], int n) {
  printf("Ma tran %d x %d:\n", n, n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d ", a[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n;
  int a[MAX][MAX];

  do {
    printf("Nhap kich thuoc ma tran vuong (2 <= n <= 10): ");
    scanf("%d", &n);
    
    if (n < 2 || n > 10) {
      printf("Kich thuoc khong hop le. Vui long nhap lai!\n");
    }
  } while (n < 2 || n > 10);

  NhapMT(a, n);

  XuatMT(a, n);

  return 0;
}