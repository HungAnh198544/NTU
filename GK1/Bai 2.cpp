#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	if (a > b && a > c)
		printf("%d", a);
	else  
		if (b > a && b > c)
			printf("%d", b);
		else 
			printf("%d", c);
}
