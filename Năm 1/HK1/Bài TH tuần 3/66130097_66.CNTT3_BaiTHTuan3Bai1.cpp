#include <stdio.h>

void NhapMang(int *n, int a[]) {
  printf("Nhap so luong phan tu cua mang (3 <= n <= 50): ");
  scanf("%d", n);
  while (!(3 <= *n && *n <= 50)) {
    printf("Vui long nhap lai so luong phan tu cua mang: ");
    scanf("%d", n);
  }
  
  printf("Nhap cac phan tu cua mang: \n");
  for (int i = 0; i < *n; i++) {
    printf("Nhap phan tu [%d]: ", i + 1);
    scanf("%d", &a[i]);
  }
}

void InMang(int n, int a[]) {
  printf("Mang da nhap la:\n");
  for (int i = 0; i < n; i++) {
      printf("%d ", a[i]);
  }
  printf("\n");
}

void InMangSoNguyenDuong(int n, int a[]) {
  printf("Cac phan tu duong trong mang la:\n");
  int SoDuong = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      printf("%d ", a[i]);
      SoDuong = 1;
    }
  }
  if (!SoDuong) {
    printf("Khong co phan tu duong.\n");
  }
  printf("\n");
}

char DemPTChan(int n, int a[]) {
  char DemChan = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0 && a[i] % 2 == 0) {
      DemChan++;
    }
  }
  return DemChan;
}

int KTSoNguyen(int n) {
  if (n <= 1) 
    return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) 
      return 0;
  }
  return true;
}

int TinhTongPTNT(int n, int a[]) {
  int Tong = 0;
  for (int i = 0; i < n; i++) {
    if(KTSoNguyen(a[i]) == 1)
      Tong += a[i];
  }
  return Tong;
}

int main() {
  int n, a[50];

  NhapMang(&n, a);

  InMang(n, a);

  InMangSoNguyenDuong(n, a);

  int Chan = DemPTChan(n, a);
  printf("So phan tu trong day la so chan: %d\n", Chan);

  int Tong = TinhTongPTNT(n, a);
  printf("Tong cac phan tu la so nguyen to: %d", Tong);

  return 0;
}