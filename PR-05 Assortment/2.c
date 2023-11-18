#include<stdio.h>

main() {
	
	int row,column,i,j,largest=0;
	
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
	
	for(i=0; i<row; i++) {
		
		for(j=0; j<column; j++) {
			
			if(a[i][j] > largest) {
				
				largest = a[i][j];
				
			}
			
		}
	}
	
	printf("\n The Largest element is: %d ",largest);
}
