#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long x = *(long long *)a;
    long long y = *(long long *)b;
    if (x > y) return 1;
    if (x < y) return -1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    long long a[100000];  
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    qsort(a, n, sizeof(long long), cmp);

    long long kq = a[1] - a[0];
    for (int i = 1; i < n; i++) 
    {
        long long hieu = a[i] - a[i - 1];
        if (hieu < kq)
            kq = hieu;
    }

    printf("%lld\n", kq);
    return 0;
}
