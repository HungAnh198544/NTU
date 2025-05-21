#include <stdio.h>
#include <math.h>
int main()
{
	int x, a, b, c, y1, y2;
	float z1, z2, s;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap 3 so a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
//	y1 = x ++ & x;
//  y2 = ++ x & x; //x = 8 ma tien to ne x = 8 + 1 = 9 & 9 roi gan cho y = 9
//	printf("Ket qua: x = %d, y1 = %d", x, y1);
	y2 = ++ x & x << 3; //x la tien to x = x + 1 = 8 + 1 tiep theo phep dich trai 3 bit x = x * 2^3 = 9 * 2^3 = 72 tiep theo
	/*72 nhi phan 8 bit 0100 1000 & 9 doi nhi phan
						0000 1001
						0000 1000 = 8
						*/
	printf("Ket qua: x = %-5d, y2 = %d \n", x, y2);
	z1 = sqrt(x * sqrt(x - 2));
	printf("Ket qua: x = %5d \t z1 = %.2f", x, z1);
	s = (float)(a + b + c) / 2; //a = 8, b = 9, c = 6 => s = (8 + 9 + 6) / 2 = 11,5
	z2 = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("Ket qua s = %.2f \t z2 = %0.2f \n", s, z2);
	return 0;
}
