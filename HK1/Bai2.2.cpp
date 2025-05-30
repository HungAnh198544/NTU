#include <stdio.h>
int main()
{
	float a, b, c;
	printf("Nhap so a: ");
	scanf("%f", &a);
	printf("Nhap so b: ");
	scanf("%f", &b);
	printf("Nhap so c: ");
	scanf("%f", &c);
	if (a > b && a > c)
		printf("So lon nhat la: %.2f", a);
	else
		if (b > a && b > c)
			printf("So lon nhat la: %.2f", b);
		else 
			if (c > a && c > b)
				printf("So lon nhat la: %.2f", c);
	return 0;
}
