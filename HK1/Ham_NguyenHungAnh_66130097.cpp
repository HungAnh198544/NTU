#include <stdio.h>
#include <math.h>

int tong(int, int);
int hieu(int, int);
int tich(int, int);
void thuong(int, int);
void du(int, int);
int main() {
	int total1, total2;
	int a, b;

	int total = tong(3, 4);
	printf("\nTong = %d", total);

	total1 = hieu(3, 4);
	printf("\nHieu = %d", total1);

	total2 = tich(3, 4);
	printf("\nTich = %d", total2);

	thuong(3, 4);
	du(3, 4);

	printf("\nNhap a, b: ");
	scanf("%d %d", &a , &b);
	int bt1 = tong(a, b) * 10 + sqrt(tong(a, b)) + tong(a, b) / 2 + tong (3, 4);
	printf("\n GT BT1 = %d", bt1);
}

int tong(int x, int y) {
	int tam;
	tam = x + y;
	return tam;
}

int hieu(int x, int y) {
	int tam;
	tam = x - y;
	return tam;
}

int tich(int x, int y) {
	int tam;
	tam = x * y;
	return tam;
}

void thuong(int x, int y) {
	float tam;
	if (y == 0)
		printf("\nLoi chia cho 0");
	else {
		tam = (float) x / y;
		printf("\nThuong %d / %d = %.2f", x, y, tam);
	}
}

void du(int x, int y) {
	int tam;
	if (y == 0)
		printf("\nLoi chia cho 0");
	else {
		tam = x % y;
		printf("\nDu = %d", tam);
	}
}

