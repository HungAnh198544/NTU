#include <stdio.h>
#include <string.h>

#define MAX 100

typedef char Chuoi[MAX + 1];

void NhapChuoi(Chuoi s) {
  do {
    printf("Nhap vao 1 chuoi ky tu can xu ly: ");
    fgets(s);
  } while(!((strlen(s) <= MAX)) && (s[0] != ' ' && s[strlen(s)-1] != ' ' && strstr(s," ") == NULL) && (strstr(s," ") != NULL));
}

char KTChuoiDX(Chuoi s){
  Chuoi st;
  strcpy(st, s);
  strrev(st);
  if(strcmp(s, st) == 0) {
    return 1;
  }

  return 0;
}

void XoaKT(Chuoi s) {
  int vtktdt = 0;

  for (int i = 0; i < strlen(s); i++) {
    if(s[i] == ' ') {
      vtktdt = i + 1;
      break;
    }
  }
  if(vtktdt != 0) {
    strcpy(s, &s[vtktdt]);
  }
}

void XoaTuCuoi(Chuoi s) {
  int vtktcc = 0;

  for (int i = strlen(s) - 1; i >= 0; i--) {
    if(s[i] == ' ') {
      vtktcc = i + 1;
      break;
    }
  }
  if(vtktcc != 0) {
    s[vtktcc] = NULL;
  }
}

int main() {
  char s[MAX];

  NhapChuoi(s);
  printf("Chuoi ky tu vua nhap: ");
  puts(s);

  if(KTChuoiDX(s) == 1) {
    printf("\n Chuoi <%s> la chuoi doi xung", s);
  } else
    printf("\n Chuoi <%s> la chuoi khong doi xung", s);

  XoaKT(s);
  printf("\n Chuoi ky tu sau khi xoa tu dau tien: ");
  puts(s);

  XoaTuCuoi(s);
  printf("\n Chuoi ky tu sau khi xo tu cuoi cung: ");
  puts(s);

  return 1;
}