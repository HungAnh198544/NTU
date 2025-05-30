#include <stdio.h>
int main()
{
	float a, tien;
	int x = 1500, y = 1750, z = 2000;
	printf("Nhap so kWh tieu thu: ");
	scanf("%f", &a);
	if (a<=50)
	  printf("So tien phai tra: %.2f", tien = a * x);
	else if (a<=100)
	  printf("So tien phai tra: %.2f", tien = (50 * x) + ((a - 50) * y)); 
	else if (a>=101)
	  printf("So tien phai tra: %.2f", tien = (50 * x) + (50 * y) + (a - 100) * z);  
}
