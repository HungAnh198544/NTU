#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20
#define MAX2(a, b) ((a) > (b) ? (a) : (b))  

void GhiMaTran(char filename[], int a[][MAX], int *n) {
    FILE *f = fopen(filename, "w");
    if (f == NULL) {
        printf("Khong the mo file de ghi!\n");
        exit(1);
    }

    do {
        printf("Nhap so phan tu n (2 <= n <= 20): ");
        scanf("%d", n);
    } while (!(*n >= 2 && *n <= 20));

    srand(time(NULL));
    fprintf(f, "%d\n", *n);
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            a[i][j] = rand() % 1000; 
            fprintf(f, "%d ", a[i][j]);
        }
        fprintf(f, "\n");
    }

    fclose(f);
}

void DocMaTran(char filename[], int a[][MAX], int *n) {
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        printf("Khong the mo file de doc!\n");
        exit(1);
    }

    fscanf(f, "%d", n);
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            fscanf(f, "%d", &a[i][j]);
        }
    }

    fclose(f);
}

void XuatMaTran(int a[][MAX], int n) {
    printf("Ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}

void GhiTongDuongCheo(char filename[], int a[][MAX], int n) {
    FILE *f = fopen(filename, "w");
    if (f == NULL) {
        printf("Khong the mo file KetQua.out de ghi!\n");
        exit(1);
    }

    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i][i];
    }

    fprintf(f, "Tong duong cheo chinh: %d\n", tong);
    fclose(f);
}

void GhiSoLonNhat(char filename[], int a[][MAX], int n) {
    FILE *f = fopen(filename, "a"); 
    if (f == NULL) {
        printf("Khong the mo file KetQua.out de ghi tiep!\n");
        exit(1);
    }

    int max = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            max = MAX2(max, a[i][j]); 
        }
    }

    fprintf(f, "Gia tri lon nhat trong ma tran: %d\n", max);
    fclose(f);
}

int main() {
    int a[MAX][MAX], n;
    char inputFile[] = "MaTran.inp";
    char outputFile[] = "KetQua.out";

    GhiMaTran(inputFile, a, &n);       
    DocMaTran(inputFile, a, &n);       
    XuatMaTran(a, n);                  

    GhiTongDuongCheo(outputFile, a, n); 
    GhiSoLonNhat(outputFile, a, n);     

    printf("\nDa ghi ket qua vao file %s\n", outputFile);
    return 0;
}
