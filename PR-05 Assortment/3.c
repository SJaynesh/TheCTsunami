#include<stdio.h>

main() {
	
	int n,i,j;
	
	printf("Enter the array's row & column size : ");
	scanf("%d",&n);
	
	int a[n][n];
	int b[n][n];
	
	for(i=0; i<n; i++) {
		
		for(j=0; j<n; j++) {
			
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	printf("\nArray\n\n");
	for(i=0; i<n; i++) {
		
		for(j=0; j<n; j++) {
			
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++) {
		
		for(j=0; j<n; j++) {
			
			b[j][i] = a[i][j];
			
		}
	}
	
	printf("\nThe transpose matrix of an array:\n\n");
	for(i=0; i<n; i++) {
		
		for(j=0; j<n; j++) {
			
				printf("%d ",b[i][j]);
			
		}
		printf("\n");
	}
	
	
}
