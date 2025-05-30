#include <stdio.h>

int main(void) {
	int x = 5;
	int y = x++^x << 3;
	printf("x = %d y = %d", x, y);
	return 0;
}