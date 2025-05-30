#include <stdio.h>
#include <math.h>

int tongFor(int);
int tongWhile(int);
int tongDoWhile(int);
int main() {
    int sum = tongFor(3); // 1 + 2 + 3 = 6
    printf("Tong sum = %d", sum);

    int bt1 = 5 * tongFor(3) + sqrt(tongFor(4)) + tongFor(10) / 2;
    printf("\nBT1 = %d \n", bt1);

    int n;
    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (!(n >= 10 && n <= 20));

    int tongnFor = tongFor(n);
    printf("Tong n (For) = %d\n", tongnFor);

    int tongnWhile = tongWhile(n);
    printf("Tong n (While) = %d\n", tongnWhile);

    int tongnDoWhile = tongDoWhile(n);
    printf("Tong n (Do-While) = %d\n", tongnDoWhile);

    return 0;
}

int tongFor(int x) {
    int tam = 0;
    for (int i = 1; i <= x; i++) {
        tam += i;
    }
    return tam;
}

int tongWhile(int x) {
    int tam = 0;
    int i = 1;
    while (i <= x) {
        tam += i;
        i++;
    }
    return tam;
}

int tongDoWhile(int x) {
    int tam = 0;
    int i = 1;
    do {
        tam += i;
        i++;
    } while (i <= x);
    return tam;
}
