#include <stdio.h>

void nhap_mang(int a[], int n) {
	printf("Nhap cac phan tu cua mang: \n");
	for(int i = 0; i < n; i++) {
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int a[], int n) {
	printf("Cac phan tu trong mang: ");
	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void sap_xep(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[i] > a[j]) {
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}

int dem_pt(int a[], int n, int k) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] == k) {
			dem++;
		}
	}
	return dem;
}

int tim_x(int a[], int n, int x) {
	for(int i = 0; i < n; i++) {
		if(a[i] == x) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);

	int a[n];
	nhap_mang(a, n);
	xuat_mang(a, n);

	sap_xep(a, n);
	printf("Mang sau khi sap xep: \n");
	xuat_mang(a, n);

	return 0;
}