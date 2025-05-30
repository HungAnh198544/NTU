#include <stdio.h>
#include <string.h>

#define MAX 30

typedef char Chuoi[MAX + 1];

void NhapChuoiKiTu(Chuoi s) {
  do {
  printf("Nhap vao 1 chuoi ky tu can xu ly (it nhat 1 va toi da 30 ki tu): ");
  gets(s);

  if (strlen(s) == 0 || strlen(s) > MAX) {
    printf("Vui long nhap lai.\n");
  } else {
    break;
  }
  } while (1);
}

int Tim2KhoangTrangDauTien(Chuoi s) {
  for (int i = 0; i < strlen(s) - 1; i++) {
    if (s[i] == ' ' && s[i + 1] == ' ') {
      return i + 1;
    }
  }
  return -1;
}

void XoaKiTu(int vt, Chuoi s) {
  for (int i = vt - 1; i < strlen(s); i++) {
    s[i] = s[i + 1];
  }
}

void ChuanHoa(int vt, Chuoi s) {
  while(s[0] == ' ') {
    XoaKiTu(1, s);
  }
  while(s[strlen(s) - 1] == ' ') {
    XoaKiTu(strlen(s), s);
  }
  while(Tim2KhoangTrangDauTien(s) != -1) {
    XoaKiTu(strlen(s), s);
  }
}

void InKiTuNguyenAm(Chuoi s) {
  int demna = 0;
  for (int i = 0; i < strlen(s); i++) {
    if(s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a', s[i] == 'i' || s[i] == 'U' || s[i] == 'E' || s[i] == 'O' || s[i] == 'A', s[i] == 'I') {
      printf("%c ", s[i]);
      demna++;
    }
  }
  if(demna == 0) {
    printf("Chuoi khong chua ki tu nguyen am");
  }
}

void TrichTuDT(Chuoi s, Chuoi tdt) {
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] != ' ') {
      tdt[i] = s[i];
    } else {
      tdt[i] == NULL;
      break;
    }
  }
}

int main() {
  Chuoi s;
  int kqtim;
  int vt;

  NhapChuoiKiTu(s);
  printf("Chuoi ky tu vua nhap: ");
  puts(s);

  kqtim = Tim2KhoangTrangDauTien(s);
  printf("Vi tri 2 khoang trang lien tiep dau tien: %d", kqtim);

  do {
    printf("\nCho biet vi tri ku tu can xoa: ");
    scanf("%d", &vt);
  } while (!(vt >= 1 && vt <= strlen(s)));
  
  XoaKiTu(vt, s);
  printf("Chuoi ki tu sau khi xoa tai vi tri %d: ", vt);
  puts(s);

  ChuanHoa(s);
  printf("Chuoi sau khi chuan hoa: ");
  puts(s);



  return 0;
}