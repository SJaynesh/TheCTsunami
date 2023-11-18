#include<stdio.h>

main() {
	
	int row,column,i,j;
	float average,sum=0;
	
	printf("Enter the array's row size : ");
	scanf("%d",&row);
	
	printf("Enter the array's column size : ");
	scanf("%d",&column);
	
	int a[row][column];
	
	printf("\n Enter array's element : \n");
	for(i=0; i<row; i++) {
		
		for(j=0; j<column; j++) {
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
			sum += a[i][j];
		}
	}
	
	average = sum / (row*column);
	printf("Average of an array : %.2f ",average);
	
	
	
	
}
