#include <stdio.h>

#define MAX 30
#define INF 1000000000

int n;
int C[MAX][MAX];
int x[MAX];          
int Visited[MAX];    
int Best[MAX];   
int currCost = 0;
int bestCost = INF;

FILE *fout;

void GhiKetQua() 
{
    fprintf(fout, "TP1");
    for (int i = 2; i <= n; i++)
        fprintf(fout, " -> TP%d", Best[i]);
    fprintf(fout, " -> TP1\n");
    fprintf(fout, "Tong chi phi la: %d\n", bestCost);
}

void Try(int i) 
{
    for (int city = 2; city <= n; city++) 
    {
        if (!Visited[city]) 
        {

            if (C[x[i - 1]][city] == 0) 
                continue;

            x[i] = city;
            Visited[city] = 1;

            currCost += C[x[i - 1]][city];

            if (currCost < bestCost) 
            {
                if (i == n) 
                {
                    if (C[x[n]][1] != 0) 
                    {
                        int total = currCost + C[x[n]][1];
                        if (total < bestCost) 
                        {
                            bestCost = total;
                            for (int k = 1; k <= n; k++)
                                Best[k] = x[k];
                        }
                    }
                } 
                else 
                    Try(i + 1);
            }

            currCost -= C[x[i - 1]][city];
            Visited[city] = 0;
        }
    }
}

int main() 
{
    FILE *f = fopen("DULICH.inp", "r");
    if (!f) 
    {
        printf("Khong mo duoc file!\n");
        return 0;
    }

    fscanf(f, "%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            fscanf(f, "%d", &C[i][j]);

    fclose(f);

    fout = fopen("Dulich.out", "w");

    for (int i = 1; i <= n; i++)
        Visited[i] = 0;

    x[1] = 1;
    Visited[1] = 1;

    Try(2);

    if (bestCost == INF)
        fprintf(fout, "-1\n");
    else
        GhiKetQua();

    fclose(fout);

    return 0;
}
