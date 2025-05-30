#include <stdio.h>

void MaxMin(int a, int b, int c, int d, int *Max, int *Min) {
    *Max= a;
    if (b > *Max) 
        *Max = b;
    if (c > *Max)  
        *Max = c;
    if (d > *Max)   
        *Max = d;
    
    *Min = a;
    if (b < *Min) 
        *Min = b;
    if (c < *Min) 
        *Min = c;
    if (d < *Min) 
        *Min = d;
}

int main() {
    int a, b, c, d, Max, Min;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    printf("Nhap so nguyen thu ba: ");
    scanf("%d", &c);
    printf("Nhap so nguyen thu tu: ");
    scanf("%d", &d);

    MaxMin(a, b, c, d, &Max, &Min);

    printf("So nguyen lon nhat la: %d \n", Max);
    printf("So nguyen be nhat la: %d \n", Min);
    
    return 0;
}