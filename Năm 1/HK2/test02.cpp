#include <stdio.h>
#define MAX 100

void input(int a[][MAX], int &n){
	do{
		scanf("%d", &n);
	}while(n < 3 || n > 10);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}

void output(int a[][MAX], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Kich thuoc ma tran: %d", n);
}

void timMaxFirst(int a[][MAX], int n){
	int dongmax = 0, cotmax = 0;
	int max = a[dongmax][cotmax];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] > max){
				max = a[i][j];
				dongmax = i;
				cotmax = j;
			}
		}
	}
	printf("\n%d %d", dongmax, cotmax);
}

void sapXep(int a[][MAX], int n){
	for(int i = 0; i < n; i++){
		if(a[0][0] < 0)
			continue;
		else{
			for(int j = i+1; j < n; j++){
				if(a[j][j] < 0)
					continue;
				else{
					if(a[i][i] > a[j][j]){
						int temp = a[i][i];
							a[i][i] = a[j][j];
							a[j][j] = temp;
					}
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf(" %d\t", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int a[MAX][MAX], n;
	input(a, n);
	output(a, n);
	timMaxFirst(a, n);
	printf("\n");
	sapXep(a, n);
}