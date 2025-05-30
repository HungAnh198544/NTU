#include <stdio.h>

#define MAXN 10
#define MAXM 25

void nhapMaTran(int A[MAXN][MAXM], int n, int m) {
    printf("Nhap cac phan tu > 0 cho ma tran %d x %d:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            do {
                printf("A[%d][%d] = ", i, j);
                scanf("%d", &A[i][j]);
                if (A[i][j] <= 0)
                    printf("Phai nhap so > 0. Nhap lai!\n");
            } while (A[i][j] <= 0);
        }
    }
}

void xuatMaTran(int A[MAXN][MAXM], int n, int m) {
    printf("Ma tran A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}

void inPhanTuChan(int A[MAXN][MAXM], int n, int m) {
    printf("Cac phan tu chan (phan tu le de trong):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] % 2 == 0)
                printf("%4d", A[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }
}

void hoanDoiHaiCot(int A[MAXN][MAXM], int n, int m, int c1, int c2) {
    if (c1 < 0 || c1 >= m || c2 < 0 || c2 >= m) {
        printf("Chi so cot khong hop le!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        int temp = A[i][c1];
        A[i][c1] = A[i][c2];
        A[i][c2] = temp;
    }
}

void xoaDong(int A[MAXN][MAXM], int n, int m, int d) {
    if (d < 0 || d >= n) {
        printf("Chi so dong khong hop le!\n");
        return;
    }

    for (int j = 0; j < m; j++) {
        A[d][j] = 0;
    }
}

int main() {
    int A[MAXN][MAXM];
    int n, m;

    do {
        printf("Nhap so dong n (2 <= n <= 10): ");
        scanf("%d", &n);
    } while (n < 2 || n > 10);

    do {
        printf("Nhap so cot m (2 <= m <= 25): ");
        scanf("%d", &m);
    } while (m < 2 || m > 25);

    nhapMaTran(A, n, m);
    
    xuatMaTran(A, n, m);

    inPhanTuChan(A, n, m);

    int cot1, cot2;
    printf("Nhap hai chi so cot muon hoan doi (0 -> %d): ", m - 1);
    scanf("%d %d", &cot1, &cot2);
    hoanDoiHaiCot(A, n, m, cot1, cot2);
    printf("Ma tran sau khi hoan doi cot:\n");
    xuatMaTran(A, n, m);

    int dong;
    printf("Nhap chi so dong can xoa (0 -> %d): ", n - 1);
    scanf("%d", &dong);
    xoaDong(A, n, m, dong);
    printf("Ma tran sau khi xoa dong %d:\n", dong);
    xuatMaTran(A, n, m);

    return 0;
}
