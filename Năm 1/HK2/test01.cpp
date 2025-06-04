#include <stdio.h>

void Input(int a[], int &n){
	do{
		scanf("%d", &n);
	}while(!(n>=3&&n<=20));
	for(int i = 0; i < n; i++){
		do{
			scanf("%d", &a[i]);
		}while(a[i]==0);
	}
}

void Output(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int kiemTraDanDau(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		if((a[i] < 0 && a[i+1] < 0) || (a[i] > 0 && a[i+1] > 0))
			return 0;
	}
	return 1;
}

void amTangDuongGiu(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] > 0)
			continue;
		else{
			for(int j = i+1; j < n; j++){
				if(a[j] > 0)
					continue;
				else{
					if(a[i] > a[j]){
						int temp = a[i];
							a[i] = a[j];
							a[j] = temp;
					}
				}
			}
		}
	}
}

void xoaPhanTu(int a[], int &n) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            a[index++] = a[i];
        }
    }
    n = index;
}

int main(){
	int a[100], n;
	Input(a, n);
	Output(a, n);
	printf("\nCau 3: %d", kiemTraDanDau(a, n));
	amTangDuongGiu(a, n);
	printf("\n");
	Output(a, n);
	xoaPhanTu(a, n);
	printf("\n");
	Output(a, n);
}