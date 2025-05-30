#include <stdio.h>
int main()
{
	printf("Cac so nguyen to tu 2 den 100 la: \n");
	for(int i = 2; i <= 100; i++)
	{
		int cnt = 0;
		for(int j = 2; j < i; j++)
		{
			if(i % j == 0) 
				cnt = 1;
		}
	if(cnt == 0)
		printf("%d ", i);
	}
	return 0;			
}
