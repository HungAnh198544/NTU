#include <stdio.h>

void SelectionSort(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[k])
                k = j;
        }

        if (k != i) {
            int temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }

        for (int t = 0; t < n; t++) {
            if (t == i) 
              printf("[%d] ", a[t]);
            else 
              printf("%d ", a[t]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    SelectionSort(a, n);

    return 0;
}
