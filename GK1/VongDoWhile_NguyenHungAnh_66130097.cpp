#include <stdio.h>
int main(void)
{
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n <= 10 || n >= 50);
	int tong = 0;
	int	i = 1;
	for (; i <= n; i++)
		tong = tong + i;
	printf("Ket qua tong: %d", tong);
	return 0;
}
