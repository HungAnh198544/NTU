#include <stdio.h>

#define MAX 15

void NhapMaTran(int A[][MAX], int n) {
  printf("Nhap cac phan tu cua ma tran %d x %d:\n", n, n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("A[%d][%d] = ", i, j);
        scanf("%d", &A[i][j]);
      }
  }
}

void XuatMaTran(int A[][MAX], int n) {
    printf("Ma tran A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }
}

int MinTamGiacDuoi(int A[][MAX], int n) {
  int min = 999;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j > n - 1) {
        if (A[i][j] < min) {
          min = A[i][j];
        }
      }
    }
  }
  return min;
}

int SoHoanHao(int a) {
  int tong = 0;
  for (int i = 1; i < a; i++) {
    if (a % i == 0) {
      tong = tong + i;
    }
  }
  if (tong == a) {
    return 1;
  } else
    return 0;
}

void KiemTraSoHoanHao(int A[][MAX], int n) {
  int dem = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i % 2 == 0 && j % 2 != 0) {
       if (SoHoanHao(A[i][j])) {
         printf("%d", A[i][j]);
         dem++;
       }
      }
    }
  }
  if (dem == 0) {
    printf("Khong tim thay");
  }
}

int main() {
  int n;
  int A[MAX][MAX];

  do {
    printf("Nhap kich thuoc ma tran vuong (2 < n <= 15): ");
    scanf("%d", &n);
    } while (!(n > 2 || n <= 15));

  NhapMaTran(A, n);

  XuatMaTran(A, n);

  int kq = MinTamGiacDuoi(A, n);
  printf("Gia tri nho nhat nam o tam giac duoi duong cheo chinh: %d", kq);

  printf("\nSo hoan hao tai vi tri hang chan cot le: ");
  KiemTraSoHoanHao(A, n);

  return 0;
}