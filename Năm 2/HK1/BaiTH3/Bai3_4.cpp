#include <stdio.h>
#include <string.h>
#include <ctype.h>

int NhapChuoi(char *s)
{

}

int DemKyTuChuoi(char *s)
{
  if (*s == '\0')
    return 0;
  else
    return 1 + DemKyTuChuoi(s + 1);
}

int DemChuThuong(char *s)
{
  if (*s >= 'a' && *s <= 'z')
    return 1 + DemChuThuong(s + 1);
  else
    return DemChuThuong(s + 1);
}

int KTChuoiDoiXung(char *s, left, right)
{
  if (left >= right)
    return 1;
  if (s[left] == s[right])
    return KTChuoiDoiXung(s, left + 1, right - 1);
  return 0;
}

int TongChuSo(char *s)
{
  if (*s == '\0')
    return 0;
  int tong = (s[0] >= '0' && s[0] <= '9') ? (s[0] - '0') : 0;
  return TongChuSo(s + 1) + tong;
}

int main()
{
  char s[100];
  NhapChuoi(s);
  printf("So ky tu trong chuoi: %d\n", DemKyTuChuoi(s));
  printf("So chu thuong trong chuoi: %d\n", DemChuThuong(s));
  if (KTChuoiDoiXung(s, 0, strlen(s) - 1))
    printf("Chuoi doi xung\n");
  else
    printf("Chuoi khong doi xung\n");
  printf("Tong cac chu so trong chuoi: %d\n", TongChuSo(s));
  return 0;
}