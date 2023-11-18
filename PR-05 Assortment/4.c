#include<stdio.h>

main() {
	
	int row, column, i, j, r, c, rowSum = 0, colSum = 0;
	
	printf("Enter the array's row size : ");
	scanf("%d",&row);
	
	printf("Enter the array's column size : ");
	scanf("%d",&column);
	
	int a[row][column];
	
	printf("\nEnter array's elements : \n");
	for(i=0; i<row; i++) {
		
		for(j=0; j<column; j++) {
			
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	printf("\nArray\n\n");
	for(i=0; i<row; i++) {
		
		for(j=0; j<column; j++) {
			
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\nEnter row number : ");
	scanf("%d",&r);
	
	printf("\nElements of row %d: ",r);
	for(j=0; j<column; j++) {
			
		printf("%d, ",a[r][j]);
		rowSum += a[r][j];
			
	}
	printf("\nThe Sum of a row %d: %d\n",r,rowSum);
	
	
	printf("\nEnter column number : ");
	scanf("%d",&c);
	
	printf("\nElements of column %d: ",c);
	for(i=0; i<column; i++) {
			
		printf("%d, ",a[i][c]);
		colSum += a[i][c];
			
	}
	printf("\nThe Sum of a column %d: %d\n",c,colSum);
	
	
}
