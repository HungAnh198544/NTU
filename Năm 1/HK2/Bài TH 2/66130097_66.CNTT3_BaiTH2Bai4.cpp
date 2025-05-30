#include <stdio.h>

void KySo(int n, int *KySoLon, int *KySoBe) {
    *KySoLon = n % 10;  
    *KySoBe = *KySoLon;

    while (n > 0) {
        int a = n % 10;  
        if (a > *KySoLon) 
            *KySoLon = a;  
        if (a < *KySoBe)
            *KySoBe = a;   
        n /= 10;  
    }
}

int main() {s
    int n, KySoLon, KySoBe;

    printf("Nhap 1 so nguyen duong: ");
    scanf("%d", &n);

    while(n <= 0) {
        printf("Nhap lai: ");
        scanf("%d", &n);
    }

    KySo(n, &KySoLon, &KySoBe);

    printf("Ky so lon nhat la: %d \n", KySoLon);
    printf("Ky so be nhat la: %d \n", KySoBe);
    
    return 0;
}
