#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int stack[1000];
    int top = -1;

    for (int i = 2; i * i <= n; i++) 
    {
        while (n % i == 0) 
        {
            stack[++top] = i;   
            n /= i;
        }
    }

    if (n > 1) stack[++top] = n;

    for (int i = top; i >= 0; i--) 
    {
        printf("%d", stack[i]);
        if (i != 0) printf("*");
    }

    return 0;
}
