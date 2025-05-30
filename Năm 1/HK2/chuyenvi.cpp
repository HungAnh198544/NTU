#include <stdio.h>
void nhapMTA(int a[][100],int n,int m) {
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			scanf("%d",&a[i][j]);
		}
	}
}


int main () {
	int n,m; scanf ("%d%d",&n,&m);
	int a[100][100];
	
	printf ("nhap phan tu ma tran a: \n");
	nhapMTA(a,n,m);

	
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}