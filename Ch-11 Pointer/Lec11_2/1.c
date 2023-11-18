#include<stdio.h>

main() {
	
	int n,i;
	
	printf("Enter the array's size : ");
	scanf("%d",&n);
	
	int a[n], *ptr;
	
	printf("\nEnter array elements :\n");
	for(i=0; i<n; i++) {
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	ptr = &a[n-1];
	
	printf("\n\tReverse array elements:\n");
	for(i=0; i<n; i++) {
		printf("\t%d\n", *ptr--);
	}
}
