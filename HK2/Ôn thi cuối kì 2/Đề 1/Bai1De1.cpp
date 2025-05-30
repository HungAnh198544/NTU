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

void InMT(int a[MAX][MAX], int n) {
  printf("Ma tran vua nhap:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d", a[i][j]);
    }
  
  printf("\n");
  }
}

void TimMinVaDem(int a[MAX][MAX], int n) {
  int min = a[0][0];
  int dem = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (a[i][j] < min) {
        dem = 1;
      } else if (a[i][j] == min) {
          dem++;
      }
    }
  }

  printf("Gia tri nho nhat trong tam giac tren duong cheo chinh: %d\n", min);
  printf("So lan xuat hien: %d\n", dem);
}

int KTGiamDan(int a[MAX][MAX], int n, int d) {
  if (d < 0 || d >= n) {
    printf("Chi so hang khong hop le!\n");
    return 0;
  }

  for (int j = 0; j < n - 1; j++) {
    if (a[d][j] < a[d][j + 1]) {
      return 0;
    }
  }
  return 1;
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
  
  InMT(a, n);

  TimMinVaDem(a, n);

  int d;
  printf("Nhap chi so hang d (0 <= d < %d): ", n);
  scanf("%d", &d);
  if (KTGiamDan(a, n, d)) {
    printf("Hang %d duoc sap xep giam dan.\n", d);
  } else {
    printf("Hang %d KHONG duoc sap xep giam dan.\n", d);
  }

  return 0;
}
