#include <stdio.h>

int tong(int, int);
int hieu(int, int);
int tich(int, int);
void thuong(int, int);
void du(int, int);
int main() {
	int a, b;
	char pheptoan;
	printf("Nhap 2 so a va b: ");
	scanf("%d %d", &a, &b);
	printf("Nhap phep toan: ");
	fflush(stdin);
	scanf("%c", &pheptoan);
	if (pheptoan == '+') {
		tong(a, b);
	}
	else if (pheptoan == '-') {
			hieu(a, b);
		}
    	else if (pheptoan == '*') {
    			tich(a, b);
			}
			else if (pheptoan == '/') {
					thuong(a, b);
				}
				else if (pheptoan == '%') {
						du(a, b);
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