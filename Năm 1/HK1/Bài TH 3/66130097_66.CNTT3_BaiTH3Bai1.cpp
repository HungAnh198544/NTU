#include <stdio.h> 

void NhapSoDuong(int &n) {
  printf("Nhap 1 so nguyen duong bat ky: ");
  scanf("%d", &n);
  while (n <= 0) {
    printf("Nhap lai so nguyen duong: ");
    scanf("%d", &n);
  }
}

char SoLuongKSC(int n) {
  char demksc = 0;
  while (n != 0) {
    if (n % 10 > 0 && n % 10 % 2 == 0)
      demksc++;
    n /= 10;  
  }
  return demksc;
}

char TimVTKSC(int n) {
  char VT, slks = 0;
  while (n != 0) {
    slks++;
    if (n % 10 > 0 && n % 10 % 2 == 0)
      VT = slks;
    n /= 10;
  }

  return slks - VT + 1;
}

int main() {
  int n, slksc;
  
  NhapSoDuong(n);
  slksc = SoLuongKSC(n);
  if (slksc == 0)
    printf("So nguyen %d khong chua bat ky so chan nao", n);
  else {
    int kqtim = TimVTKSC(n);
    printf("So nguyen %d co ky so chan dau tien xuat hien tai vi tri %d", n, kqtim);
  }

  return 0; 
}