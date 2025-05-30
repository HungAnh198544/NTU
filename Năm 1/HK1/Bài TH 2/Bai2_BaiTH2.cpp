#include <stdio.h>

int main(){
	int n, a[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    
	for(int i = 0; i < n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
    int chan = 0; 
    int tongchan = 0;
    int le = 0;
    int tongle = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			chan++;
			tongchan += a[i];
		}
		else{
			le++;
			tongle += a[i];
		}
	}
	printf("\nSo luong ptu chan: %d", chan);
	printf("\nTong cac phan tu chan: %d", tongchan);
	printf("\nSo luong ptu le: %d", le);
	printf("\nTong cac phan tu le: %d", tongle);
	
	int tong = 0;
	float tb = 0;
	for(int i = 0; i < n; i++){
		tong += a[i];
		tb = tong / n;
	}
	printf("\nTrung binh cong: %.2f", tb);
	
	return 0;
}