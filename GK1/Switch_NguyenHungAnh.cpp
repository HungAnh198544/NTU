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
	switch(pheptoan)
	{
		case '+':
			{
				c = a + b;
				printf("Ket qua: %d + %d = %d", a, b, c); break;
			}
		case '-':
			{
				c = a - b;
				printf("Ket qua: %d - %d = %d", a, b, c); break;
			}
		case '*':
			{
				c = a * b;
    			printf("Ket qua: %d * %d = %d", a, b, c); break;
			}
		case '/':
			{
				if (b != 0)
					{
						thuong = a / b;
    					printf("Ket qua: %d * %d = %.2f", a, b, thuong);	
					} 
				else
					printf("Loi chia cho 0");
				break;
			}
	}
	return 0;
}
