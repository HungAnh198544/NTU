#include <stdio.h>

void nhapMaTran(int n, int maTran[100][100]) {
  printf("Nhap cac phan tu cua ma tran: \n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Nhap phan tu [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &maTran[i][j]);
    }
  }
}

void xuatMaTran(int n, int maTran[100][100]) {
  printf("Ma tran da nhap la:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", maTran[i][j]);
    }
    printf("\n");
  }
}

int tongDuongCheoChinh(int n, int maTran[100][100]) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        tong += maTran[i][i];
      }
    }
  }
  return tong;
}

int tongPhanTuChan(int n, int maTran[100][100]) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (maTran[i][j] % 2 == 0) {
        tong += maTran[i][j];
      }
    }
  }
    return tong;
}

int tongPhanTuDongChanCotLe(int n, int maTran[100][100]) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < n; j++) {
        if (j % 2 != 0) {
          tong += maTran[i][j];
        }
      }
    }
  }
  return tong;
}

int main() {
  int n;
  int maTran[100][100];

  printf("Nhap kich thuoc n cua ma tran vuong (n x n): ");
  scanf("%d", &n);

  nhapMaTran(n, maTran);
  xuatMaTran(n, maTran);

  int tongDuongCheo = tongDuongCheoChinh(n, maTran);
  printf("Tong cac phan tu nam o duong cheo chinh: %d\n", tongDuongCheo);

  int tongChan = tongPhanTuChan(n, maTran);
  printf("Tong cac phan tu chan trong ma tran: %d\n", tongChan);

  int tongDongChanCotLe = tongPhanTuDongChanCotLe(n, maTran);
  printf("Tong cac phan tu thuoc dong chan cot le: %d\n", tongDongChanCotLe);

  return 0;
}
