#include <stdio.h>

int main(){
	int n, a[1000];
    printf("Nhap n: ");
    scanf("%d", &n);
    
	for(int i = 0; i < n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
    int tongduong = 0;
    int tongam = 0;
    for(int i = 0; i < n; i++){
    	if(a[i] > 0){
    		tongduong += a[i];
		}
		else{
			tongam += a[i];
		}
	}
	printf("\nTong cac so duong: %d", tongduong);
	printf("\nTong cac so am: %d", tongam);
	
	return 0;
}