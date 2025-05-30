#include <stdio.h>
void nhapMTA(int a[][100],int n) {
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
}


int main () {
	int n; scanf ("%d",&n);
	int a[100][100];
	
	printf ("nhap phan tu ma tran a: \n");
	nhapMTA(a,n);

	printf("duong cheo chinh cua ma tran la :");
	
		
	for (int i=0;i<n;i++) {
	
			printf("%d ",a[i][i]);
		}
	printf("\n duong cheo phu cua ma tran la:");	
	for (int i=0;i<n;i++) {
		printf("%d ",a[i][n-1-i]);
	}
}
