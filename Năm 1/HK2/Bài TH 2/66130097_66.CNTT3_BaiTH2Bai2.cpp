#include <stdio.h>

char KiemTraNT(int n) {
    if (n <= 1) 
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int TinhTongNT(int n) {
    int tong = 0;
    for (int i = 2; i <= n; i++) {
        if (KiemTraNT(i)) {
            tong += i;  
        }
    }
    return tong;
}

int main() {
    int n, s;
    printf("Nhap 1 so nguyen duong co gia tri 5 <= n <= 30: ");
    scanf("%d", &n);
    
    while (!(5 <= n && n <= 30)) {
        printf("Nhap lai: ");
        scanf("%d", &n);
    }

    s = TinhTongNT(n);
    printf ("Tong cac so nguyen to tu 1 den %d: %d", n, s);

    return 0;
}