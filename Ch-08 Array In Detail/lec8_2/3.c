#include<stdio.h>

main() {
	
	int n,i;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	printf("\nEnter array elements : \n");
	
	int a[n];
	
	for(i=0; i<n; i++) {
		
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	
	}
	
	printf("The squares are : ");
	for(i=0; i<n; i++) {
		printf("%d, ",a[i]*a[i]);
	}
}
