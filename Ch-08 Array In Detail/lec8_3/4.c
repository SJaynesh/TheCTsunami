#include<stdio.h>

main() {
	
	int a[5][5];
	int i,j,sum=0;
	
	for(i=0; i<5; i++) {
	
		for(j=0; j<5; j++) {
			
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
		for(i=0; i<5; i++) {
		
			for(j=0; j<5; j++) {
				
				printf("%d ",a[i][j]);
							
			}
			printf("\n");
		}
	
	printf("\n\n");
	
		for(i=0; i<5; i++) {
		
			for(j=0; j<5; j++) {
			
				if(i==0 || j==0 || i==5-1 || j==5-1) {
					
					printf("%d ",a[i][j]);
					sum += a[i][j];
					
				}	
			}
			printf("\n");
		}
		
		printf("The sum of boundary elements of an Array : %d",sum);
}
