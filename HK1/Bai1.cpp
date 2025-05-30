#include <stdio.h>
int main()
{
	int x, y;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap y: ");
	scanf("%d", &y);
	int(tong) = x + y;
	printf("Tong = %d \n", tong);
	int(hieu) = x - y;
	printf("Hieu = %d \n", hieu);
	int(tich) = x * y;
	printf("Tich = %d \n", tich);
	float(thuong) = (float) x / y;
	if (y != 0)
		printf("Thuong = %.2f \n", thuong);
	else
		printf("Loi chia cho 0");
	int(du) = x % y;
	if (y != 0)
		printf("Du %d", du);
	else
		printf("Loi chia cho 0");
	return 0;	
}
