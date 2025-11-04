#include <stdio.h>

#define MAX 40

void TaoFile() 
{
    FILE *f = fopen("DaySo2_4.txt", "w");
    if (!f) 
    {
        printf("Khong mo duoc file de ghi!\n");
        return;
    }

    int n;
    printf("Nhap so luong phan tu (3 <= n <= 40): ");
    scanf("%d", &n);

    fprintf(f, "%d\n", n);

    printf("Nhap %d so thuc:\n", n);
    for (int i = 0; i < n; i++) 
    {
        float x;
        scanf("%f", &x);
        fprintf(f, "%.2f ", x);
    }

    fclose(f);
}

int DocFile(float a[]) 
{
    FILE *f = fopen("DaySo2_4.txt", "r");
    if (!f) 
    {
        printf("Khong mo duoc file de doc!\n");
        return 0;
    }

    int n;
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%f", &a[i]);
    }

    fclose(f);
    return n;
}

void XuatDay(float a[], int n) 
{
    printf("Day so trong file la:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

int DemPhanTuNhoHonX(float a[], int n, float x) 
{
    int dem = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] < x)
            dem++;
    }
    return dem;
}

int main() 
{
    float a[MAX];
    int n;
    float x;

    TaoFile();

    n = DocFile(a);

    XuatDay(a, n);

    printf("Nhap gia tri x: ");
    scanf("%f", &x);

    int dem = DemPhanTuNhoHonX(a, n, x);
    printf("Co %d phan tu nho hon %.2f\n", dem, x);

    return 0;
}
