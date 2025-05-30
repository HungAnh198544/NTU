#include <stdio.h>

#define MAX 10

void nhapMaTran(int A[MAX][MAX], int n) {
    printf("Nhap cac phan tu cua ma tran %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

void xuatMaTran(int A[MAX][MAX], int n) {
    printf("Ma tran A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}

int timMaxDuongCheoChinh(int A[MAX][MAX], int n) {
    int max = A[0][0];
    for (int i = 1; i < n; i++) {
        if (A[i][i] > max) {
            max = A[i][i];
        }
    }
    return max;
}

void inTamGiacTrenDuongCheoChinh(int A[MAX][MAX], int n) {
    printf("Cac phan tu thuoc tam giac nua tren duong cheo chinh:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }
}

void xoaCot(int A[MAX][MAX], int n, int c) {
    if (c < 0 || c >= n) {
        printf("Chi so cot khong hop le!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        A[i][c] = 0;
    }
}

int main() {
    int n;
    int A[MAX][MAX];
    int cotCanXoa;

    do {
        printf("Nhap kich thuoc ma tran vuong (2 <= n <= 10): ");
        scanf("%d", &n);
        if (n < 2 || n > 10) {
            printf("Kich thuoc khong hop le. Vui long nhap lai!\n");
        }
    } while (n < 2 || n > 10);

    nhapMaTran(A, n);
    
    xuatMaTran(A, n);
    
    int maxCheoChinh = timMaxDuongCheoChinh(A, n);
    printf("Gia tri lon nhat tren duong cheo chinh la: %d\n", maxCheoChinh);
    
    inTamGiacTrenDuongCheoChinh(A, n);

    printf("Nhap chi so cot can xoa (0 -> %d): ", n - 1);
    scanf("%d", &cotCanXoa);

    xoaCot(A, n, cotCanXoa);
    printf("Ma tran sau khi xoa cot %d:\n", cotCanXoa);
    xuatMaTran(A, n);

    return 0;
}

