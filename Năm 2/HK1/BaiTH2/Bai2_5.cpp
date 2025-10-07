#include <stdio.h>

#define MAX 50

struct HocPhan
{
    char maHP[10];
    char tenHP[50];
    int soTC;
};

void DocFile(HocPhan ds[], int &n)
{
    FILE *f = fopen("HocPhan.txt", "r");
    if (f == NULL)
    {
        int i = 0;
        fscanf(f, "%d", &n);

        if (n < 2 || n > MAX)
            {
              printf("So luong hoc phan khong hop le!");
              return 0;
            }
        for (int i = 0; i < n; i++)
        {
            fscanf(f, "%s", ds[i].maHP);
            fgets(ds[i].maHP, sizeof(ds[i].maHP), f);
            fgets(ds[i].tenHP, sizeof(ds[i].tenHP), f);
            fscanf(f, "%d", &ds[i].soTC);
        }
        fclose(f);
        return 1;
    }
    else
    {
        printf("Khong the mo file!");
        return 0;
    }
}

void inDS(HocPhan ds[], int n)
{
    printf("Danh sach hoc phan:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Ma hoc phan: %s\n", ds[i].maHP);
        printf("Ten hoc phan: %s\n", ds[i].tenHP);
        printf("So tin chi: %d\n", ds[i].soTC);
    }
}

int main()
{
    HocPhan ds[MAX];
    int n = 0;

    if (DocFile(ds, n))
    {
        inDS(ds, n);
    }

    return 0;
}