#include<stdio.h>

main() {
	
	int n,i;
	
	printf("Enter the array's size : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter array's elements : \n");
	for(i=0; i<n; i++) {
		
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	
	printf("\nNegative element from an Array: ");
	for(i=0; i<n; i++) {
		
		if(a[i]<0) {
			
			printf("%d, ",a[i]);
			
		}
		
	}
	
}
