#include <stdio.h> 

#define MAX 10000

int main() 
{ 
  int n;
  
  //nhập số n
  do
  {
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
  } while (n <= 0 || n > MAX);
  
  long sum = n * (n + 1) / 2;
  printf("Tong = %ld\n", sum); 
  
  return 0; 
} 