#include <stdio.h>

int main() {
	int n;
	unsigned char b0, b1, b2, b3, b4, b5, b6, b7;
	
	printf("Nhap so nguyen tu 0 den 255: ");
	scanf("%d", &n);
	
	if (0 < n && n <= 255) {
		b0 = n % 2; n /= 2;
		b1 = n % 2; n /= 2;
		b2 = n % 2; n /= 2;
		b3 = n % 2; n /= 2;
		b4 = n % 2; n /= 2;
		b5 = n % 2; n /= 2;
		b6 = n % 2; n /= 2;
		b7 = n % 2;
		printf("Ket qua chuyen doi sang nhi phan: %d%d%d%d%d%d%d%d", b7, b6, b5, b4, b3, b2, b1, b0);
	}
	else 
		printf("Khong thuc hien chuyen doi");
	
	return 0;
}
