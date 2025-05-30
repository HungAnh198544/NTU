#include <stdio.h>
#include <string.h>

#define MAX 100

int KTNguyenAm(char s[MAX]) {
  int dem = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == 'a' || s[i] == 'u' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'e' ||s[i] == 'A' ||s[i] == 'U' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'E') {
      dem++;
    }
  }
  return dem;
}

int main() {
  char s[MAX];
  
  printf("Nhap chuoi: ");
  gets(s);

  puts(s);
  printf("Do dai cua chuoi: %d", strlen(s));

  int KQ = KTNguyenAm(s);
  printf("\nSo luong ky tu nguyen am: %d", KQ);

  return 0;
}