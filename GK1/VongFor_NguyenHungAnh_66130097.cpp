#include <stdio.h>
int main(void)
{
	int n;
	for (;!(n > 10 && n < 50);)
		{
			printf("Nhap n: ");
			scanf("%d", &n);
		}
	int tong = 0;
	int	i = 1;
	for (; i <= n; i++)
		tong = tong + i;
	printf("Ket qua tong: %d", tong);
	return 0;
}
