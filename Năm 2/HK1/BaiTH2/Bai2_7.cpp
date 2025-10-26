#include <stdio.h>
#include <math.h>

#define MAX 50

void TaoFile() 
{
    FILE *f = fopen("DaySoNguyen.txt", "w");
    if (!f) {
        printf("Khong mo duoc file de ghi!\n");
        return;
    }

    int n;
    printf("Nhap so luong phan tu (2 <= n < 50): ");
    scanf("%d", &n);

    fprintf(f, "%d\n", n);
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        fprintf(f, "%d ", x);
    }

    fclose(f);
}

int DocFile(int a[]) 
{
    FILE *f = fopen("DaySoNguyen.txt", "r");
    if (!f) 
    {
        printf("Khong mo duoc file de doc!\n");
        return 0;
    }

    int n;
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++) 
        fscanf(f, "%d", &a[i]);

    fclose(f);
    return n;
}

void XuatMang(int a[], int n) 
{
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) 
        printf("%d ", a[i]);
    printf("\n");
}

int LaSoNguyenTo(int n) 
{
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int TongNguyenTo(int a[], int n) 
{
    int tong = 0;
    for (int i = 0; i < n; i++) 
        if (LaSoNguyenTo(a[i]))
            tong += a[i];
    return tong;
}

int main() 
{
    int a[MAX];
    int n;

    TaoFile();

    n = DocFile(a);

    XuatMang(a, n);

    int tong = TongNguyenTo(a, n);
    printf("Tong cac so nguyen to trong day la: %d\n", tong);

    return 0;
}
