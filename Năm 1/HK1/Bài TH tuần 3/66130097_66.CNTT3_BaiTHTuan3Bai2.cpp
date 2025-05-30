#include <stdio.h>

void NhapMang(int a[], int *n) {
  printf("Nhap so luong phan tu trong mang (5 <= n <= 100): ");
  do {
    printf("Vui long nhap lai so luong phan tu cua mang: ");
    scanf("%d", n);
  } while (*n < 5 || *n > 100);

  printf("Nhap cac phan tu trong mang (so nguyen duong):\n");
  for (int i = 0; i < *n; i++) {
    do {
      printf("Nhap phan tu a[%d] = ", i + 1);
      scanf("%d", &a[i]);
      if (a[i] <= 0) {
          printf("Vui long nhap lai\n");
      }
    } while (a[i] <= 0); 
}
}

void InMang(int a[], int n) {
  printf("Mang da nhap la:\n");
  for (int i = 0; i < n; i++) {
      printf("%d ", a[i]);
  }
  printf("\n");
}

int SoLe(int a[], int n) {
  for (int i = n - 1; i >= 0; i--) {
      if (a[i] % 2 != 0) {  
          return a[i];
      }
  }
  return 0; 
}

float TBCSoLe(int a[], int n) {
  int tong = 0, dem = 0;
  for (int i = 0; i < n; i++) {
      if (a[i] % 2 != 0) { 
          tong += a[i];
          dem++;
      }
  }
  if (dem == 0) {
      return 0; 
  }
  return (float)tong / dem;
}

int PhanTuMin(int a[], int n) {
  int min = a[0];
  for (int i = 1; i < n; i++) {
      if (a[i] < min) {
          min = a[i];
      }
  }
  return min;
}

int DemPhanTuMin(int a[], int n) {
  int min = PhanTuMin(a, n);
  int dem = 0;
  for (int i = 0; i < n; i++) {
      if (a[i] == min) {
          dem++;
      }
  }
  return dem;
}

int main() {
  int n, a[100];

  NhapMang(a, &n);

  InMang(a, n);

  int Le = SoLe(a, n);
  if (Le == 0) {
      printf("Khong co phan tu le trong mang\n");
  } else {
      printf("Gia tri phan tu le cuoi cung trong mang: %d\n", Le);
  }

  float TBC = TBCSoLe(a, n);
    if (TBC == 0) {
        printf("Khong co phan tu le trong mang, khong the tinh TBC\n");
    } else {
        printf("TBC cua phan tu le: %.2f\n", TBC);
    }

    int Min = PhanTuMin(a, n);
    printf("Phan tu nho nhat trong mang: %d\n", Min);

    int DemMin = DemPhanTuMin(a, n);
    printf("So phan tu nho nhat trong mang: %d\n", DemMin);

  return 0;
}