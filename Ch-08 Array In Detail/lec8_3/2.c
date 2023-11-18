#include<stdio.h>

main() {
	
	int row,column,i,j;
	
	printf("Enter the array's row size : ");
	scanf("%d",&row);
	printf("Enter the array's column size : ");
	scanf("%d",&column);
	
	int a[row][column];
	int b[row][column];
	int c[row][column];
	
	printf("\nEnter array A's elements : \n");
	for(i=0; i<row; i++) {
		
		for(j=0; j<column; j++) {
		
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	printf("\nEnter array B's elements : \n");
	for(i=0; i<row; i++) {
		
		for(j=0; j<column; j++) {
		
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
	
	for(i=0; i<row; i++) {
		
		for(j=0; j<column; j++) {
		
			c[i][j] = a[i][j] + b[i][j];
			
		}
	}
	
	printf("\nArray C is : \n");
	for(i=0; i<row; i++) {
		
		for(j=0; j<column; j++) {
		
			printf("%d ",c[i][j]);
			
		}
		printf("\n");
	}
}
