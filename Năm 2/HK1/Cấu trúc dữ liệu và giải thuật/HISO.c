#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[100000]; 
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    long long Min = a[0];
    long long Max = a[1] - a[0];

    for (int i = 1; i < n; i++) {
        if (Max < a[i] - Min)
            Max = a[i] - Min;
        if (Min > a[i])
            Min = a[i];
    }

    printf("%lld\n", Max);
    return 0;
}
