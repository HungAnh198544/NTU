#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    if (n == 0) 
    {
        printf("0\n");
        return 0;
    }

    int stack[32]; 
    int top = -1;

    while (n > 0) 
    {
        stack[++top] = n % 2;
        n /= 2;
    }

    while (top >= 0) 
    {
        printf("%d", stack[top--]);
    }

    printf("\n");
    return 0;
}
