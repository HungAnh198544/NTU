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
  printf("\nIn moi tu tren 1 dong: \n");
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
			printf("\n");
		else printf("%c",s[i]);
	}
}

char InTuMAX(char s[MAX])
{
  int Maxlen = 0;
  char Max[MAX];
  
}

int main() {
  char s[MAX];

  printf("Nhap chuoi: ");
  gets(s);
  printf("Chuoi vua nhap: %s\n", s);

  int KQ = DemKyTuChuCai(s);
  printf("So luong ky tu chu cai: %d", KQ);

  InTuNamTren1Dong(s);

  return 0;
}