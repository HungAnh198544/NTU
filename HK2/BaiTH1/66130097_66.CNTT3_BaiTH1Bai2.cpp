#include <stdio.h>

int main() {
	int n;
	unsigned char a, b, c, d;
	
	printf("Nhap so nguyen co 5 chu so: ");
	scanf("%d", &n);
	
	if (10000 <= n && n <= 99999) {
		a = n / 10000;
		b = (n % 10000) / 1000;
		c = (n % 100) / 10;
		d = n % 10;
		if (a == d && b == c)
			printf("So %d la so doi xung", n);
		else
			printf("So %d khong phai la so doi xung", n);
	}
	else 
		printf("Khong giai quyet vi du lieu khong hop le");
	
	return 0;
}
