#include<stdio.h>

main() {
	
	int n,i;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter array elements: \n");
	
	for(i=0; i<n; i++) {
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nLength of an Array: %d",n);
	
	
}
