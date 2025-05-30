#include <stdio.h>

void nhap_mang(int mang[], int n) {
  printf("Nhap vao %d phan tu cua mang: \n", n);
  for (int i = 0; i < n; i++) {
    printf("Phan tu thu %d: ", i + 1);
    scanf("%d", &mang[i]);
  }
}

int trung_mang(int mang[], int n) {
  int freq[n], dem = 0; 
  for (int i = 0; i < n; i++) {
    freq[i] = 0;
    freq[mang[i]]++;
    if (freq[mang[i]] > 1) {
      dem++;
      freq[mang[i]] = -1;
    }
  }

  return dem;
}

void in_mang(int mang[], int n) {

}

int main() {
  int n;

  printf("Nhap vao so phan tu cua mang: ");
  scanf("%d", &n);

  int mang[n + 1];

  nhap_mang(mang, n);

  int dem_trung = trung_mang(mang, n);
  printf("So luong phan tu bi trung trong mang: %d\n", dem_trung);

  trung_mang(mang, n);

  return 0;
}