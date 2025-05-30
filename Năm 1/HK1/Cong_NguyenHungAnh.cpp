#include <stdio.h>
int main()
{
	float hung, kiet, tong, hieu, tich, thuong;
	printf("Nhap hung: ");
	scanf("%f", &hung);
	printf("Nhap kiet: ");
	scanf("%f", &kiet);
	tong = hung + kiet;
	hieu = hung - kiet;
	tich = hung * kiet;
	thuong = hung / kiet;
	printf("Tong cua hung va kiet: %.2f \n", tong);
	printf("Hieu cua hung va kiet: %.2f \n", hieu);
	printf("Tich cua hung va kiet: %.2f \n", tich);
	if (kiet==0)
	  printf("Loi phep chia");
	else
	  printf("Thuong cua hung va kiet: %.2f", thuong);
	return 0;
}
