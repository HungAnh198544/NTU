#include <stdio.h>

#define N 10

void InKQ(int x[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d", x[i]);
    printf("\n");
}

// Cach 1
void ChuoiNhiPhan1(int i, int x[], int n)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n - 1)
            InKQ(x, n);
        else
            ChuoiNhiPhan1(i + 1, x, n);
    }
}

// Cach 2
void ChuoiNhiPhan2(int i, int x[], int n)
{
    if (i == n)
    {
        InKQ(x, n);
        return;
    }

    x[i] = 0;
    ChuoiNhiPhan2(i + 1, x, n);

    x[i] = 1;
    ChuoiNhiPhan2(i + 1, x, n);
}

int main()
{
    int n, x[N];
    printf("Nhap vao do dai chuoi nhi phan: ");
    scanf("%d", &n);

    printf("Cach 1:\n");
    ChuoiNhiPhan1(0, x, n);

    printf("Cach 2:\n");
    ChuoiNhiPhan2(0, x, n);

    return 0;
}
