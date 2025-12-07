#include <stdio.h>

#define MAX 20

int n, s;
int t[MAX], x[MAX];
int found = 0;

FILE *fout;

void GhiFile(int t[], int x[], int n)
{
    for (int i = 0; i < n; i++)
        if (x[i] == 1)
            fprintf(fout, "%d ", t[i]);

    fprintf(fout, "\n");
}

int DocFile(char *st, int t[], int *n, int *s)
{
    FILE *f = fopen(st, "r");
    if (!f)
    {
        printf("Khong mo duoc file!\n");
        return 0;
    }

    fscanf(f, "%d %d", n, s);
    for (int i = 0; i < *n; i++)
        fscanf(f, "%d", &t[i]);

    fclose(f);
    return 1;
}

void XuatNghiem(int t[], int x[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i] * t[i];

    if (sum == s)
    {
        found = 1;
        GhiFile(t, x, n);
    }
}

// Cach 1
void ATM1(int i, int t[], int x[], int n)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;

        if (i == n - 1)
            XuatNghiem(t, x, n);
        else
            ATM1(i + 1, t, x, n);
    }
}

// Cach 2
void ATM2(int i, int t[], int x[], int n, int sum)
{
    if (sum > s)     
        return;

    if (i == n)
    {
        if (sum == s)
            XuatNghiem(t, x, n);
        return;
    }

    x[i] = 0;
    ATM2(i + 1, t, x, n, sum);

    x[i] = 1;
    ATM2(i + 1, t, x, n, sum + t[i]);
}

int main()
{
    if (!DocFile("ATM.inp", t, &n, &s))
        return 0;

    fout = fopen("ATM_out.out", "w");

    ATM2(0, t, x, n, 0);   

    if (!found)
        fprintf(fout, "-1\n");

    fclose(fout);

    return 0;
}
