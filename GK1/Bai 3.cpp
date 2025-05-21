#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Nhap thang: ");
	scanf("%d", &a);
	if (a >= 1 && a <= 12)
	{
		switch(a)
		{
			case 1: 
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: printf("Thang %d co 31 ngay", a); break;
			case 4:
			case 6:
			case 9:
			case 11: printf("Thang %d co 30 ngay", a); break;
			case 2: printf("Thang 2 co 28 ngay, neu la nam nhuan thi thang 2 co 29 ngay"); break;
    	}
	}
	else printf("Moi ban nhap lai thang");
}
	
