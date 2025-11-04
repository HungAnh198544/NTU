#include <stdio.h>
#include <stdlib.h>

struct BaoLiXi 
{
    int SoTien;
    int SoBaoTiepTheo;
};

int HamSoSanh(const void *a, const void *b) 
{
    const struct BaoLiXi *x = (const struct BaoLiXi *)a;
    const struct BaoLiXi *y = (const struct BaoLiXi *)b;

    if (x->SoBaoTiepTheo != y->SoBaoTiepTheo)
        return (y->SoBaoTiepTheo - x->SoBaoTiepTheo);  
    return (y->SoTien - x->SoTien);                    
}

int main() 
{
    struct BaoLiXi a[100000];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d %d", &a[i].SoTien, &a[i].SoBaoTiepTheo);

    qsort(a, n, sizeof(struct BaoLiXi), HamSoSanh);

    int MaxS = 0;
    int SLTui = 1;  

    for (int i = 0; i < n && SLTui > 0; i++) 
    {
        MaxS += a[i].SoTien;
        SLTui = SLTui - 1 + a[i].SoBaoTiepTheo;  
    }

    printf("%d\n", MaxS);
    return 0;
}
    