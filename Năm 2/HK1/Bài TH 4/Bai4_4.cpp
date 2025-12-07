#include <stdio.h>
#include <stdlib.h>

#define MAX 30

int n, k;
int x[MAX];
int used[MAX];

void ToHop(int i, int start) 
{
    if (i > k) 
    {
        printf("(");
        for (int j = 1; j <= k; ++j) 
        {
            printf("%d", x[j]);
            if (j < k) printf(",");
        }
        printf(") ");
        return;
    }

    for (int v = start; v <= n - (k - i); ++v) 
    {
        x[i] = v;
        ToHop(i + 1, v + 1);
    }
}

void ChinhHop(int i) 
{
    if (i > k) {
        printf("(");
        for (int j = 1; j <= k; ++j) 
        {
            printf("%d", x[j]);
            if (j < k) printf(",");
        }
        printf(") ");
        return;
    }

    for (int v = 1; v <= n; ++v) 
    {
        if (!used[v]) 
        {
            used[v] = 1;
            x[i] = v;
            ChinhHop(i + 1);
            used[v] = 0;
        }
    }
}

int main() 
{
    printf("Nhap k va n: ");
    if (scanf("%d %d", &k, &n) != 2) 
        return 0;
    if (n <= 0 || k <= 0 || k > n) 
    {
        printf("Tham so khong hop le (0 < k <= n)\n");
        return 0;
    }

    printf("a) To hop chap %d cua %d:\n", k, n);
    ToHop(1, 1);
    printf("\n");

    for (int i = 1; i <= n; ++i) 
        used[i] = 0;

    printf("b) Chinh hop khong lap chap %d cua %d:\n", k, n);
    ChinhHop(1);
    printf("\n");

    return 0;
}
