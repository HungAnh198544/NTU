#include <stdio.h>

#define MAX 50

FILE *fout;

void XuatNghiem(int k, int x[])
{
    for (int i = 1; i <= k; i++)
    {
        if (i != k)
            fprintf(fout, "%d + ", x[i]);
        else
            fprintf(fout, "%d", x[i]);
    }
    fprintf(fout, "\n");
}

void PhanTichSo(int i, int x[], int n, int s[])
{
    for (int j = x[i - 1]; j <= n - s[i - 1]; j++)
    {
        x[i] = j;
        s[i] = s[i - 1] + j;

        if (s[i] == n)         
            XuatNghiem(i, x);
        else
            PhanTichSo(i + 1, x, n, s); 
    }
}

int main()
{
    int x[MAX], s[MAX];
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    fout = fopen("Lab4_3.out", "w");
    if (!fout) return 1;

    if (n <= 0 || n >= 20) {
        fprintf(fout, "-1\n");
        fclose(fout);
        return 0;
    }

    x[0] = 1;  
    s[0] = 0;

    PhanTichSo(1, x, n, s);

    fclose(fout);
    return 0;
}
