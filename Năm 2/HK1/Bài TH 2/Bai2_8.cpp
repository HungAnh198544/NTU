#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef struct 
{
    char maSV[10];
    char hoTen[50];
    int namSinh;
} SinhVien;

void GhiFile(SinhVien sv[], int n) 
{
    FILE *f = fopen("SinhVien.inp", "wb");
    if (!f) 
    {
        printf("Khong the mo file de ghi!\n");
        return;
    }

    fwrite(&n, sizeof(int), 1, f);          
    fwrite(sv, sizeof(SinhVien), n, f);     

    fclose(f);
}

void DocSinhVienThuP(int p) 
{
    FILE *f = fopen("SinhVien.inp", "rb");
    if (!f) 
    {
        printf("Khong the mo file de doc!\n");
        return;
    }

    int n;
    fread(&n, sizeof(int), 1, f); 

    if (p < 1 || p > n) 
    {
        printf("Vi tri p khong hop le (1 <= p <= %d)\n", n);
        fclose(f);
        return;
    }

    SinhVien sv;
    for (int i = 1; i <= n; i++) 
    {
        fread(&sv, sizeof(SinhVien), 1, f);
        if (i == p) 
        {
            printf("\nThong tin sinh vien thu %d:\n", p);
            printf("Ma SV   : %s\n", sv.maSV);
            printf("Ho ten  : %s\n", sv.hoTen);
            printf("Nam sinh: %d\n", sv.namSinh);
            break;
        }
    }

    fclose(f);
}


void NhapDanhSach(SinhVien sv[], int *n) 
{
    do 
    {
        printf("Nhap so luong sinh vien (2 <= n < 50): ");
        scanf("%d", n);
    } while (*n < 2 || *n >= 50);

    for (int i = 0; i < *n; i++) 
    {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ma SV: ");
        scanf("%s", sv[i].maSV);
        getchar(); 
        printf("Ho ten: ");
        gets(sv[i].hoTen);
        printf("Nam sinh: ");
        scanf("%d", &sv[i].namSinh);
    }
}

int main() 
{
    SinhVien sv[MAX];
    int n, p;

    NhapDanhSach(sv, &n);

    GhiFile(sv, n);

    printf("\nNhap vi tri sinh vien can doc (p): ");
    scanf("%d", &p);

    DocSinhVienThuP(p);

    return 0;
}
