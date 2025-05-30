#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	printf("Nhap 3 canh a, b, c: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	if ((a + b > c) || (a + c > b) || (b + c > a))
	{
		printf("Day la tam giac \n");
		if(a == b && b == c)
			printf("Day la tam giac deu");
		else 
			if (a == b || b == c || a == c) 
				printf("Day la tam giac can");
			else 
				if(pow(a,2) + pow(b,2) == pow(c,2) || pow(b,2) + pow(c,2) == pow(a,2) || pow(a,2) + pow(c,2) == pow(b,2))
					printf("Day la tam giac vuong");
				else 
					printf("Day la tam giac thuong");
	}
	else
		printf("Day khong phai la tam giac \n");
}
