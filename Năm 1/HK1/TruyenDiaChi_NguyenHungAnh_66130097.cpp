#include <stdio.h>

void tong0(int, int, int sum);
void tong1(int, int, int *sum);
void tong2(int, int);
int tinhtong;
int main(void) {
	int total;
	
	tong0(3, 4, total);
	printf("Tong theo tham tri = %d \n", total);
	
	tong1(3, 4, &total);
	printf("Tong truyen dia chi = %d \n", total);
	
	tong2(3, 4);
	printf("Tong toan cuc = %d", tinhtong);
	
	return 0;
}

void tong0(int x, int y, int sum) {
	sum = x + y;
}

void tong1(int x, int y, int *t) {
	*t = x + y;
}

void tong2(int x, int y) {
	tinhtong = x + y;
}