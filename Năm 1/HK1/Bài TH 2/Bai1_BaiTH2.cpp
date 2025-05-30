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
    
	int max = 0;
    int min = a[0];
    for(int i = 0; i < n; i++){
    	if (a[i] > max){
    		max = a[i];
		}
		if (min > a[i]){
			min = a[i];
		}
	}
	printf("\nMin: %d", min);
	printf("\nMax: %d", max);
    
	return 0;
}
