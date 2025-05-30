#include <stdio.h>

int UocChung(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }    
    return a;
}

int BoiChung(int a, int b) {
    return a * b / UocChung(a, b);
}

void NhapPhanSo(int *tu, int *mau) {
    do {
        printf("\nNhap tu so: ");
        scanf("%d", tu);
        printf("Nhap mau so: ");
        scanf("%d", mau);
    } while (*mau == 0);
}

void InPhanSo(int tu, int mau) {
    printf("%d/%d", tu, mau);
}

void RutGonPhanSo(int *tu, int *mau) {
    int u = UocChung(*tu, *mau);
    *tu /= u;
    *mau /= u;
}

void TongPhanSo(int tu1, int tu2, int mau1, int mau2, int *tuKQ, int *mauKQ) {
    *tuKQ = (tu1 * mau2) + (tu2 * mau1);
    *mauKQ = mau1 * mau2;
    RutGonPhanSo(tuKQ, mauKQ);
}

void HieuPhanSo(int tu1, int tu2, int mau1, int mau2, int *tuKQ, int *mauKQ) {
    *tuKQ = (tu1 * mau2) - (tu2 * mau1);
    *mauKQ = mau1 * mau2;
    RutGonPhanSo(tuKQ, mauKQ);
}

int main() {
    int tu1, tu2, mau1, mau2, tuKQ, mauKQ;

    printf("Nhap phan so thu nhat: ");
    NhapPhanSo(&tu1, &mau1);
    printf("Nhap phan so thu hai: ");
    NhapPhanSo(&tu2, &mau2);

    TongPhanSo(tu1, tu2, mau1, mau2, &tuKQ, &mauKQ);
    printf("Tong 2 phan so la: ");
    InPhanSo(tuKQ, mauKQ);
    printf("\n");

    HieuPhanSo(tu1, tu2, mau1, mau2, &tuKQ, &mauKQ);
    printf("Hieu 2 phan so la: ");
    InPhanSo(tuKQ, mauKQ);
    printf("\n");

    return 0;
}