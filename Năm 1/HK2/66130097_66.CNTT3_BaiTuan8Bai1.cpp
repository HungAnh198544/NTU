#include <stdio.h>
#include <string.h>

#define MLTH 50
#define MLMSSV 10
#define MLL 10
#define MLNS 11

struct SINHVIEN
{
    char HoVaTen[MLTH];
    char MSSV[MLMSSV];
    char MaLop[MLL];
    char NgaySinh[MLNS];
    float DiemTB;
};

// 1. Hàm nhập thông tin sinh viên
void NhapSV(SINHVIEN &sv)
{
    printf("Nhap ho va ten: ");
    fflush(stdin);
    gets(sv.HoVaTen);

    printf("Nhap ma so sinh vien: ");
    fflush(stdin);
    gets(sv.MSSV);

    printf("Nhap ma lop: ");
    fflush(stdin);
    gets(sv.MaLop);

    printf("Nhap ngay sinh (dd/mm/yyyy): ");
    fflush(stdin);
    gets(sv.NgaySinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &sv.DiemTB);
}

// 2. Hàm in thông tin sinh viên
void XuatSV(SINHVIEN sv)
{
    printf("Ho va ten: %s\n", sv.HoVaTen);
    printf("Ma so sinh vien: %s\n", sv.MSSV);
    printf("Ma lop: %s\n", sv.MaLop);
    printf("Ngay sinh: %s\n", sv.NgaySinh);
    printf("Diem trung binh: %.2f\n", sv.DiemTB);
}

// 3. Hàm nhập danh sách sinh viên
void NhapDSSV(SINHVIEN ds[], int &siso)
{
    do
    {
        printf("Nhap so luong sinh vien: ");
        scanf("%d", &siso);
    } while (siso <= 0 || siso > 100);
    for (int i = 0; i < siso; i++)
    {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        NhapSV(ds[i]);
    }
}

// 4. Hàm in danh sách sinh viên
void XuatDSSV(SINHVIEN ds[], int siso)
{
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < siso; i++)
    {
        printf("\nThong tin sinh vien thu %d:\n", i + 1);
        XuatSV(ds[i]);
    }
}

// 5. Hàm tìm sinh viên theo mã số
int TimSVTheoMS(char mstim[], SINHVIEN ds[], int siso, SINHVIEN &sv)
{
    for (int i = 0; i < siso; i++)
    {
        if (strcmp(ds[i].MSSV, mstim) == 0)
        {
            sv = ds[i];
            return 1;
        }
    }
    return 0;
}

// 6. Hàm tìm sinh viên theo tên
int TimSVTheoTen(char ten[], SINHVIEN ds[], int siso, SINHVIEN &sv)
{
    for (int i = 0; i < siso; i++)
    {
        if (strstr(ds[i].HoVaTen, ten) != NULL)
        {
            sv = ds[i];
            return 1;
        }
    }
    return 0;
}

// 7. Hàm sắp xếp danh sách sinh viên tăng dần theo lớp, giảm dần theo điểm TB
void SapXepDS(SINHVIEN ds[], int siso)
{
    for (int i = 0; i < siso - 1; i++)
    {
        for (int j = i + 1; j < siso; j++)
        {
            if (strcmp(ds[i].MaLop, ds[j].MaLop) > 0 ||
                (strcmp(ds[i].MaLop, ds[j].MaLop) == 0 && ds[i].DiemTB < ds[j].DiemTB))
            {
                SINHVIEN tam = ds[i];
                ds[i] = ds[j];
                ds[j] = tam;
            }
        }
    }
}

// 8. Hàm lọc và trả về danh sách sinh viên theo lớp
int LocSVTheoLop(char malop[], SINHVIEN ds[], int siso, SINHVIEN kq[])
{
    int dem = 0;
    for (int i = 0; i < siso; i++)
    {
        if (strcmp(ds[i].MaLop, malop) == 0)
        {
            kq[dem++] = ds[i];
        }
    }
    return dem;
}

int main()
{
    SINHVIEN ds[100], sv, kq[100];
    int siso;
    char mstim[MLMSSV], ten[MLTH], malop[MLL];

    NhapDSSV(ds, siso);
    XuatDSSV(ds, siso);

    // Tìm theo mã số
    printf("\nNhap ma so sinh vien can tim: ");
    fflush(stdin);
    gets(mstim);
    if (TimSVTheoMS(mstim, ds, siso, sv))
    {
        printf("Tim thay sinh vien voi ma so %s:\n", mstim);
        XuatSV(sv);
    }
    else
    {
        printf("Khong tim thay sinh vien voi ma so %s.\n", mstim);
    }

    // Tìm theo tên
    printf("\nNhap ten sinh vien can tim: ");
    fflush(stdin);
    gets(ten);
    if (TimSVTheoTen(ten, ds, siso, sv))
    {
        printf("Tim thay sinh vien co ten %s:\n", ten);
        XuatSV(sv);
    }
    else
    {
        printf("Khong tim thay sinh vien co ten %s.\n", ten);
    }

    // Sắp xếp danh sách
    SapXepDS(ds, siso);
    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    XuatDSSV(ds, siso);

    // Lọc theo lớp
    printf("\nNhap ma lop can loc: ");
    fflush(stdin);
    gets(malop);
    int dem = LocSVTheoLop(malop, ds, siso, kq);
    if (dem > 0)
    {
        printf("\nDanh sach sinh vien thuoc lop %s:\n", malop);
        XuatDSSV(kq, dem);
    }
    else
    {
        printf("Khong co sinh vien nao thuoc lop %s.\n", malop);
    }

    return 0;
}