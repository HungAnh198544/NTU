#include <stdio.h>
#include <string.h>

#define MAX 100

typedef char Chuoi[MAX + 1];

void NhapChuoi(Chuoi s) {
    do {
        printf("Nhap vao 1 chuoi ky tu can xu ly (toi thieu 5 ky tu): ");
        fgets(s, MAX + 1, stdin);
        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0'; 
        }
    } while (strlen(s) < 5);
}

int TimLenMaxTu(Chuoi s) {
    int demkttu = 0, max = 0;

    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            demkttu++;
        } else {
            if (demkttu > max) {
                max = demkttu;
            }
            demkttu = 0;
        }
    }
    return max;
}

int TimLenVaTuMax(Chuoi s, Chuoi tu) {
    int demkttu = 0, max = 0;
    Chuoi tutam;
    int len = strlen(s);
    tutam[0] = '\0'; 

    for (int i = 0; i <= len; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            tutam[demkttu++] = s[i];
        } else {
            tutam[demkttu] = '\0';
            if (demkttu > max) {
                max = demkttu;
                strcpy(tu, tutam);
            }
            demkttu = 0;
        }
    }
    return max;
}

void DichChuyenCumTuCuoiVeDau(Chuoi s) {
    int vtktcc = 0;
    Chuoi st;

    strcpy(st, s);

    for (int i = strlen(st) - 1; i >= 0; i--) {
        if (st[i] == ' ') {
            vtktcc = i + 1;
            break;
        }
    }

    if (vtktcc > 0) {
        Chuoi cuoi, dau;
        strcpy(cuoi, &st[vtktcc]);
        st[vtktcc - 1] = '\0'; 
        strcpy(dau, st);

        sprintf(s, "%s %s", cuoi, dau);
    }
}

void MaHoa(Chuoi s) {
  for (int i = 0; i < strlen(s); i++) {
    if('0' <= s[i] && s[i] <= '9') {
      s[i] = '*';
    } else {
      if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) {
        s[i] = '#';
      } else {
        s[i] = '/';
      }
    }
  }
}

int main() {
    Chuoi s, tu;
    int maxlen;

    NhapChuoi(s);
    printf("Chuoi ky tu vua nhap: ");
    puts(s);

    maxlen = TimLenMaxTu(s);
    printf("Chieu dai cua tu dai nhat trong chuoi: %d\n", maxlen);

    maxlen = TimLenVaTuMax(s, tu);
    printf("Tu co chieu dai dai nhat trong chuoi: %s\n", tu);

    DichChuyenCumTuCuoiVeDau(s);
    printf("Chuoi sau khi dich chuyen: ");
    puts(s);

    MaHoa(s);
    printf("Chuoi sau khi ma hoa: ");
    puts(s);

    return 0;
}
