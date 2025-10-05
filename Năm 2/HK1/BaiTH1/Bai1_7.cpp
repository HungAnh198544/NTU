#include <stdio.h>

#define In_Range(x, min, max) ((x) >= (min) && (x) <= (max))

#define Arr_Min(arr, n, kq)       \
    {                             \
        kq = arr[0];              \
        for (int i = 1; i < n; i++) { \
            if (arr[i] < kq)      \
                kq = arr[i];      \
        }                         \
    }

int main() {
    int n;
    do {
        printf("Nhap so luong phan tu (2 < n < 10): ");
        scanf("%d", &n);
    } while (!In_Range(n, 3, 9)); 

    float arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%f", &arr[i]);
    }

    float min;
    Arr_Min(arr, n, min);
    printf("Gia tri nho nhat trong mang la: %.2f\n", min);

    return 0;
}

