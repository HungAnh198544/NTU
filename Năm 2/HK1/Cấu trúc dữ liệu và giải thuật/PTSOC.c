#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int stack[20]; 
    int top = -1;

    int i = 2;
    while (i <= sqrt(n)) 
    {
        while (n % i == 0) 
        {
            stack[++top] = i;
            n /= i;
        }
        i++;
    }

    if (n > 1) 
        stack[++top] = n; 

    for (int i = top; i >= 0; i--) 
    {
        printf("%d", stack[i]);
        if (i > 0) 
          printf("*");
    }

    printf("\n");
    return 0;
}
