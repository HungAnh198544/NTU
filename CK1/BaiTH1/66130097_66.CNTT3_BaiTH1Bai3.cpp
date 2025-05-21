#include <stdio.h>

int main() {
	char k;
	
	printf("Nhap vao 1 ky tu: ");
	scanf("%c", &k);
	
	if ('0' <= k && k <= '9')
		printf("%c thuoc nhom ky so", k);
	else 
		if (('a' <= k && k <= 'z')|| ('A' <= k && k <= 'Z'))
			printf("%c thuoc nhom chu cai", k);
		else 
			if ((k == '+' || k == '-' || k == '*' || k == '/'))
				printf("%c thuoc nhom phep toan so hoc", k);
	else 
		printf("%c thuoc nhom ky tu dac biet", k);
	
	return 0;
}
