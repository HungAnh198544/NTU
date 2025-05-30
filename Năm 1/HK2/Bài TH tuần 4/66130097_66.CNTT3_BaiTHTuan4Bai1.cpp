#include <stdio.h>
#include <stdlib.h>

void NhapMang(int a[], int *n) {
  do {
    printf("Nhap so luong phan tu trong mang (3 <= n <= 50): ");
    scanf("%d", n);
  } while (3 <= *n && n* <= 50)

  printf("Nhap cac phan tu trong mang sao cho hai phan tu lien ke co gia tri khac nahu:\n");
  for (int i = 0; i < *n; i++) {
    do {
      printf("Nhap phan tu a[%d] = ", i);
      scanf("%d", &a[i]);
           
      if (i > 0 && (*a)[i] == (*a)[i - 1]) {
        printf("Vui long nhap lai\n");
      }
    } while (i > 0 && (*a)[i] == (*a)[i - 1]); /
  }
}

void InMang(int a, int n) {
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Hàm main
int main() {
    int *a = NULL; // Con trỏ mảng
    int n;

    // Nhập mảng
    inputArray(&a, &n);

    // In mảng
    printArray(a, n);

    // Giải phóng bộ nhớ sau khi sử dụng
    free(a);

    return 0;
}
