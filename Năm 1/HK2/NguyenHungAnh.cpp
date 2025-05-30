#include <stdio.h>

void NhapMang(int *n, int a[]) {
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", n);
    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int n, int a[]) {
    printf("Mang da nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

float TrungBinhCong(int n, int a[]) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return (float)tong / n;
}

int Max(int n, int a[]) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int n, a[100];

    NhapMang(&n, a); 

    XuatMang(n, a);

    float TB = TrungBinhCong(n, a);
    printf("Trung binh cong mang la: %.2f\n", TB);

    int max = Max(n, a);
    printf("Phan tu lon nhat trong mang la: %d", max);

    return 0;
}



