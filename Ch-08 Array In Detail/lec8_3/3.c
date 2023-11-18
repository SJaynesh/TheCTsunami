#include<stdio.h>

main() {
	int n,sum=0,i,j;
	
	printf("Enter the array's row & column size : ");
	scanf("%d",&n);
	
	int a[n][n];
	
	printf("\nEnter array's elements: \n");
	for(i=0; i<n; i++) {
		
		for(j=0; j<n; j++) {
			
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	
	for(i=0; i<n; i++) {
		
		for(j=0; j<n; j++) {
			
			if(i==j) {
				sum += a[i][j];
			}
					
		}
	}
	
	printf("\nThe sum of diagonal element of an Array: %d\n",sum);
	
	
}
