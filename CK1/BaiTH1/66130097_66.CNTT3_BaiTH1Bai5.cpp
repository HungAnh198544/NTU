#include <stdio.h>

int main() {
	int n;
	unsigned char a, b, c, d;
	
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &n);
	
	if (1000 <= n && n <= 9999) {
		a = n / 1000;
		b = (n % 1000) / 100;
		c = (n % 100) / 10;
		d = n % 10;
		printf("So dao nguoc: %d%d%d%d", d, c, b, a);
	}
	else 
		printf("Khong giai quyet");
	
	return 0;
}
