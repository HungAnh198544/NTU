#include <stdio.h>

int main() 
{
    FILE *fp;
    float num;

    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Khong the mo tap tin!\n");
        return 1;
    }

    if (fscanf(fp, "%f", &num) == 1) {
        printf("Gia tri doc duoc tu tap tin: %f\n", num);
    } else {
        printf("Khong doc duoc so thuc tu tap tin!\n");
    }

    fclose(fp);
    return 0;
}