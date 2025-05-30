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
    int vt1 = 0;
    int vt2 = 0;
    for(int i = 0; i < n; i++){
    	if (a[i] > max){
    		max = a[i];
    		vt1 = i;
		}
		if (min > a[i]){
			min = a[i];
			vt2 = i;
		}
	}
	printf("\nSo duong lon nhat va vi tri: %d %d", max, vt1);
	printf("\nSo duong be nhat va vi tri: %d %d", min, vt2);
	
	return 0;
}