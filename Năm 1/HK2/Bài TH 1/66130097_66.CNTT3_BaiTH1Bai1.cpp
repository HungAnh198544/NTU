#include <stdio.h>

int main() {
	int n;
	unsigned char a, b, c, d, max;
	
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &n);
	
	if (1000 <= n && n <= 9999) {
		a = n / 1000;
		b = (n % 1000) / 100;
		c = (n % 100) / 10;
		d = n % 10;
		max = a;
		if (max < b)
			max = b;
		else
			max = max;
		if (max < c)
			max = c;
		else
			max = max;
		if (max < d)
			max = d;
		else
			max = max;
		printf("Ki so lon nhat cua %d la: %d", n, max);
	}
	else 
		printf("Khong giai quyet vi du lieu khong hop le");
	
	return 0;
}