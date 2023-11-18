#include<stdio.h>

main() {
	
	int n,i;
	float sum=0,average;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter array elements :\n");
	
	for(i=0; i<n; i++) {
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
		sum += a[i];
	}
	
	average = sum / n;
	
	printf("\nAverage of an Array : %.2f",average);
}
