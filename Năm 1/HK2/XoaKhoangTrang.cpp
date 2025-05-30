#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
  char s[MAX];
	
  printf("Nhap chuoi: ");
  fgets(s, MAX , stdin);

  for (int i = 0; i < strlen(s); i++) {
    if(s[i] != ' ') {
      printf("%c", s[i]);
      }
  }

  return 0;
}
