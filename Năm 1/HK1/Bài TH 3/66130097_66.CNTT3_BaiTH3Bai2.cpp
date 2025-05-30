#include <stdio.h>

void NhapSoDuong(int &n) {
  printf("Nhap 1 so nguyen duong bat ky: ");
  scanf("%d", &n);
  while (n <= 0) {
    printf("Nhap lai so nguyen duong: ");
    scanf("%d", &n);
  }
}

void InKSL(int n) {
    printf("Cac ky so le trong so %d la: ", n);
    while (n != 0) {
      if (n % 10 % 2 != 0) { 
            printf("%d ", n % 10);
        }
        n /= 10; 
    }
    printf("\n");
}

int TimKSLMax(int n) {
    int max = -1; 
    while (n != 0) {
      if (n % 10 % 2 != 0) { 
        if (n % 10 > max) {
          max = n % 10; 
        }
      }
    n /= 10; 
    }
    return max;
}

int main() {
    int n;

    NhapSoDuong(n);

    InKSL(n);

    int kslMax = TimKSLMax(n);
    if (kslMax == -1) {
        printf("So %d khong co ky so le nao.\n", n);
    } else {
        printf("Ky so le lon nhat trong so %d la: %d\n", n, kslMax);
    }

    return 0;
}