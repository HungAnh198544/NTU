#include <stdio.h> 

int main() 
{ 
  //nhập số n
  int n;
  long sum = 0; 
  
  for (int i = 1; i <= n; i++) 
  { 
    sum += i; 
  } 
  printf("Tong = %ld\n", sum); 
  
  return 0; 
} 