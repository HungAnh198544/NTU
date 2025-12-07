#include <stdio.h>

#define MAX 1000

int a[MAX], dp[MAX], trace[MAX];
int n;

int DaySo_QHD(int i) 
{
    if (dp[i] != -1) 
        return dp[i];  

    dp[i] = 1;       
    trace[i] = -1;   

    for (int j = 0; j < i; j++) 
    {
        if (a[j] < a[i]) {
            int len = DaySo_QHD(j) + 1;
            if (len > dp[i]) 
            {
                dp[i] = len;
                trace[i] = j;
            }
        }
    }

    return dp[i];
}

int main() 
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) 
        dp[i] = -1;

    int maxLen = 0, pos = 0;
    for (int i = 0; i < n; i++) 
    {
        int len = DaySo_QHD(i);
        if (len > maxLen) 
        {
            maxLen = len;
            pos = i;
        }
    }

    int QHD[maxLen];
    int idx = maxLen - 1;
    while (pos != -1) 
    {
        QHD[idx--] = a[pos];
        pos = trace[pos];
    }

    printf("Do dai QHD: %d\n", maxLen);
    printf("Day con tang dai nhat: ");
    for (int i = 0; i < maxLen; i++) 
        printf("%d ", QHD[i]);

    return 0;
}
