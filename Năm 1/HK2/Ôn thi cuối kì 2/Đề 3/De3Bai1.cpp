#include <stdio.h>
#include <math.h>

#define MAX 10

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

float TinhTBC(int A[][MAX], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j == n - 1) {
        if (A[i][j] % 2 == 0) {
          sum += A[i][j];
        }
      }
    }
  }
  return (float)sum / n;
}

int SoChinhPhuong(int a) {
  int sqrt_a = (int)sqrt(a);
  return (sqrt_a * sqrt_a == a);
}

int TongSoChinhPhuongTamGiacDuoiCheoPhu(int A[][MAX], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1 && SoChinhPhuong(A[i][j])) {
                sum += A[i][j];
            }
        }
    }
    return sum;
}

int TongSoDoiXungTamGiacDuoiCheoPhu(int A[][MAX], int n) {
  int tmp = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j > n - 1) {
        int num = A[i][j];
        while (num > 0) {
        tmp = tmp * 10 + num % 10;
          num /= 10;
        }
      }
    }
  }
  return tmp;
}

int main() {
  int n;
  int A[MAX][MAX];

  do {
    printf("Nhap kich thuoc ma tran vuong (2 < n <= 10): ");
    scanf("%d", &n);
    } while (!(n > 2 || n <= 10));

  NhapMaTran(A, n);

  XuatMaTran(A, n);

  float tb = TinhTBC(A, n);
  printf("Trung binh cong cac phan tu chan tren duong cheo phu la: %.2f\n", tb);

  int KQ = TongSoChinhPhuongTamGiacDuoiCheoPhu(A, n);
  printf("Tong cac phan tu la so chinh phuong nam o tam giac duoi tren duong cheo phu: %d\n", KQ);

  int KQ2 = TongSoDoiXungTamGiacDuoiCheoPhu(A, n);
  printf("Tong cac phan tu la so doi xung nam o tam giac duoi tren duong cheo phu: %d\n", KQ2);
  
  return 0;
}