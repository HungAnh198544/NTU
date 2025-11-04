#include <stdio.h>
#include <math.h>

int kiemTraNguyenTo(int n)
{
   if (n < 2) return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int UCLN(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int Armstrong(int n)
{
  int original = n, sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return sum == original; 
}

int main()
{
  int a, b, arm;

  printf("Nhap so nguyen a: ");
  scanf("%d", &a);
  printf("Nhap so nguyen b: ");
  scanf("%d", &b);
  printf("Nhap so nguyen Armstrong: ");
  scanf("%d", &arm);

  if (kiemTraNguyenTo(a))
    printf("%d la so nguyen to\n", a);
  else
    printf("%d khong phai la so nguyen to\n", a);
  
  printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, UCLN(a, b));

  if (Armstrong(arm))
    printf("%d la so Armstrong\n", arm);
  else
    printf("%d khong phai la so Armstrong\n", arm);

  return 0;
}
    
