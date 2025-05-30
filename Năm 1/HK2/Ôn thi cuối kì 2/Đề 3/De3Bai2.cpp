#include <stdio.h>
#include <string.h>

#define MAX 100

int DemKyTuChuCai(char s[MAX]) {
  int dem = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
      dem++;
    }
  }
  return dem;
}

char InTuNamTren1Dong(char s[MAX]) {
  
}

int main() {
  char s[MAX];

  printf("Nhap chuoi: ");
  gets(s);
  printf("Chuoi vua nhap: %s\n", s);

  int KQ = DemKyTuChuCai(s);
  printf("So luong ky tu chu cai: %d", KQ);



  return 0;
}