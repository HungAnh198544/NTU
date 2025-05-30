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

int KiemTraDoiXung(int n) {
    int soDaoNguoc = DaoNguocSo(n); 
    return (n == soDaoNguoc); 
}

int main() {
    int n;

    NhapSoDuong(n);

    if (KiemTraDoiXung(n)) {
        printf("So %d la so doi xung.\n", n);
    } else {
        printf("So %d khong phai la so doi xung.\n", n);
    }

    return 0;
}