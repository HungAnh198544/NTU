#include <stdio.h>
int main()
{
	char a;
	printf("Nhap mot chu cai: ");
	scanf("%c", &a);
	if (a >= 'A'&& a <= 'Z')
		a += 32;
	else
		a -= 32;
	printf("%c", a);
}
