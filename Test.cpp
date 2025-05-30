#include <stdio.h>
#include <string.h>

struct HOCSINH
{
    char HoTenHS[50];
    float Van, Toan;
};

void NhapHS(HOCSINH &hs) {
    printf(" - Nhap ho va ten HS: ");
    gets(hs.HoTenHS);
    printf(" - Nhap diem Van: ");
    scanf("%.2f", &hs.Van);
    printf(" - Nhap diem Toan: ");
    scanf("%.2f", &hs.Toan);
}

float TinhDiemTB() {
    return (hs.Van * 1 + hs.Toan * 2) / 3;
}

int main() {
    HOCSINH hs;
    float dtbm;

    printf("Nhap ho va ten HS: ");
    NhapHS(hs);

    dtbm = TinhDiemTB(hs);
    printf("\n Ket qua: ");
    printf("Ho Ten                    Toan     Van     Diem TB");
    printf("%-25s%-9.1f%-8.1f%-7.1f", hs.HoTenHS, hs.Van, hs.Toan, dtbm);

    return 1;
}


