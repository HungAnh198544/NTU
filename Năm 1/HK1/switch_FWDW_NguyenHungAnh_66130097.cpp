#include <stdio.h>

int main() {
    int n;
    char dk;
    unsigned short tong = 0;
    unsigned char i;

    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (!(n >= 10 && n <= 20));

    printf("Nhap ky tu dieu khien (f/w/d): ");
    fflush(stdin);
    scanf(" %c", &dk); 

    switch (dk) {
        case 'f': // Dung for
            for (i = 1; i <= n; i++) {
                tong += i;
            }
            printf("Tong (for) 1 -> %d = %d\n", n, tong);
            break;

        case 'w': // Dung while
            i = 1;
            while (i <= n) {
                tong += i;
                i++;
            }
            printf("Tong (while) 1 -> %d = %d\n", n, tong);
            break;

        case 'd': // Dung do-while
            i = 1;
            do {
                tong += i;
                i++;
            } while (i <= n);
            printf("Tong (do-while) 1 -> %d = %d\n", n, tong);
            break;

        default: 
            printf("Khong phai gia tri can dieu khien.\n");
            break;
    }

    return 0;
}
