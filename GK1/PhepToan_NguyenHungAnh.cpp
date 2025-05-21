#include <stdio.h>
int main()
{
	int a, b, c;
	char pheptoan;
	float thuong;
	printf("Nhap 2 so a va b: ");
	scanf("%d %d", &a, &b);
	printf("Nhap phep toan: ");
	fflush(stdin);
	scanf("%c", &pheptoan);
	if (pheptoan == '+')
		{
			c = a + b;
			printf("Ket qua: %d + %d = %d", a, b, c);
		}
	else if (pheptoan == '-')
			{
				c = a - b;
				printf("Ket qua: %d - %d = %d", a, b, c);
			}
    	else if (pheptoan == '*')
    			{
    				c = a * b;
    				printf("Ket qua: %d * %d = %d", a, b, c);
				}
			else if (pheptoan == '/')
					{
						thuong = a / b;
    					printf("Ket qua: %d * %d = %.2f", a, b, thuong);
					}
				else printf("Loi chia cho 0");
	return 0;
}

