#include <stdio.h>

int tong(int, int);
int hieu(int, int);
int tich(int, int);
void thuong(int, int);
void du(int, int);
int main() {
	int x, y;
	char pheptoan;
	printf("Nhap 2 so x va y: ");
	scanf("%d %d", &x, &y);
	printf("Nhap phep toan: ");
	fflush(stdin);
	scanf("%c", &pheptoan);
	if (pheptoan == '+') {
		tong(x, y);
		printf("Tong = %d", tong(x, y));
	}
	else if (pheptoan == '-') {
		hieu(x, y);
		printf("Hieu = %d", hieu(x, y));
	}
	 	else if (pheptoan == '*') {
  		tich(x, y);
   		printf("Tich = %d", tich(x, y));
   	}
			else if (pheptoan == '/') {
				thuong(x, y);
			}
				else if (pheptoan == '%') {
					du(x, y);
				}
	return 0;
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