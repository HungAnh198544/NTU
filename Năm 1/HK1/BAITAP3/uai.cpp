#include <stdio.h>

void NhapSoDuong(int &n) {
  printf("Nhap 1 so nguyen duong bat ky: ");
  scanf("%d", &n);
  while (n <= 0) {
    printf("Nhap lai so nguyen duong: ");
    scanf("%d", &n);
  }
}

int DaoNguocSo(int n) {
    int soDaoNguoc = 0;
    while (n != 0) {
        soDaoNguoc = soDaoNguoc * 10 + (n % 10); 
        n /= 10; 
    }
    return soDaoNguoc;
}

int SoTangDan(int n) {
    int Truoc = n % 10;
    n /= 10;
    while (n > 0) {
        int Sau = n % 10;
        if (Sau > Truoc) {
            return false;
        }
        Truoc = Sau;
        n /= 10;
    }
    return true;
}

int main() {
  int n;

  NhapSoDuong(n);

  int s = DaoNguocSo(n);
  printf("So dao nguoc la: %d\n", s);

  if (SoTangDan(s)) {
    printf("So dao nguoc %d la so tang dan.\n", s);
    } 
    else {
        printf("So dao nguoc %d khong phai la so tang dan.\n", s);
    }

  return 0;
}