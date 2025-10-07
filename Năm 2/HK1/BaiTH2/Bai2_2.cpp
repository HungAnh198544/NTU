#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX 30

void GhiFile(char filename[], int a[], int *n) 
{
    FILE *f = fopen(filename, "w");
    if (f == NULL) 
    {
        printf("Khong the mo file de ghi!\n");
        exit(1);
    }

    do 
    {
        printf("Nhap so phan tu (2 <= n <= 30): ");
        scanf("%d", n);
    } while (!(*n >= 2 && *n <= 30));

    srand(time(NULL));
    for (int i = 0; i < *n; i++) 
    {
        a[i] = rand() % 1001; 
    }

    fprintf(f, "%d\n", *n);
    for (int i = 0; i < *n; i++) 
    {
        fprintf(f, "%d ", a[i]);
    }

    fclose(f);
}

void DocFile(char filename[], int a[], int *n) 
{
    FILE *f = fopen(filename, "r");
    fscanf(f, "%d", n);
    for (int i = 0; i < *n; i++)
        fscanf(f, "%d", &a[i]);
    fclose(f);
}

void XuatDaySo(int a[], int n) 
{
    printf("Day so doc tu file:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int TongChan(int a[], int n) 
{
    int tong = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] > 0 && a[i] % 2 == 0)
            tong += a[i];
    }
    return tong;
}


int main() 
{
    int a[MAX], n;
    char filename[] = "DaySo.inp";

    GhiFile(filename, a, &n);
    printf("Da ghi day so vao file %s\n", filename);
    
    DocFile(filename, a, &n);
    
    XuatDaySo(a, n);

    int tongChan = TongChan(a, n);
    printf("Tong cac so chan trong day so: %d\n", tongChan);

    return 0;
}