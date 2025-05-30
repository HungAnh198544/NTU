#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);	
	if (a == 0)
		{	
			if (b == 0)
				{
					if (c == 0) 
						printf("Phuong trinh co vo so nghiem");
					else
						printf("Phuong trinh vo nghiem");
				}
		}
	else 
		if (a != 0) 
			{
				printf("Day la phuong trinh bac hai \n");
				printf("%dx^2 + %dx + %d = 0 \n", a, b, c);
				float(delta) = (float) pow(b,2) - (4 * a * c);
				printf("Delta = %.2f \n", delta);
				if (delta > 0)
					{
						float(x1) = (float) (-b + sqrt(delta)) / (2 * a);
						float(x2) = (float) (-b - sqrt(delta)) / (2 * a);
						printf("Phuong trinh co 2 nghiem phan biet: \n");
            			printf("x1 = %.2f \n", x1);
            			printf("x2 = %.2f", x2);
					}
				else
					if (delta == 0)
						{
							printf("Phuong trinh co nghiem kep \n");
							float(x_kep) = (float) -b / (2 * a);
							printf("Nghiem kep la x = %.2f", x_kep);
						}
					else
						printf("Phuong trinh vo nghiem"); 
		 	}
		else
			{ 
				printf("Day la phuong trinh bac 1 \n");
				printf("%dx + %d = 0 \n", b, c);
				float(x) = (float) - (c / b);
				printf("Nghiem cua phuong trinh la x = %.2f", x);
			}
	return 0;
} 
