#include <stdio.h>

int main() 
{
    FILE *fp;
    float num;

    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Khong the mo tap tin!\n");
        return 1;
    }

    printf("Nhap so thuc: ");
    scanf("%f", &num);

    fprintf(fp, "%f\n", num);

    fclose(fp);

    printf("Da ghi so thuc vao tap tin output.txt\n");
    return 0;
}