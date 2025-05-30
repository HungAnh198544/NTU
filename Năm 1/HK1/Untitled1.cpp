#include <stdio.h>
int main()
{
	int Thang, Nam;
	printf("Nhap nam: ");
	scanf("%d", &Nam);
	if (((Nam % 4 == 0) && (Nam % 100!= 0)) || (Nam%400 == 0))
      printf("%d la mot nam nhuan \n", Nam); 
    else
      printf("%d khong phai la nam nhuan \n", Nam); 
	printf("Nhap thang: ");
	scanf("%d", &Thang);
	switch(Thang)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12: printf("Thang nay co 31 ngay"); break;
		case 4:
		case 6:
		case 9:
		case 11: printf("Thang nay co 30 ngay"); break;
		case 2: printf("Thang nay co 28 ngay"); break;
	}
}
