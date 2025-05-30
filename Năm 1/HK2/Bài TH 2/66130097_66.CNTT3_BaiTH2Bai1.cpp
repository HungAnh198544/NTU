#include <stdio.h>

void HoanVi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SapXepGiam(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) < *(arr + j))
                HoanVi(&arr[i], &arr[j]);
        }
    }        
}

int main() {
    int arr[5];
    
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    SapXepGiam(arr, 5);

    printf("Cac so sau khi sap xep theo thu tu giam dan:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}