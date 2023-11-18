#include<stdio.h>

main() {
	
	int n;
	
	printf("Enter the array's size : ");
	scanf("%d",&n);
	
	int a[n],i;
	int *ptr[n];
	
	printf("\nEnter array's elements : \n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
		ptr[i] = &a[i];
	}
	
	printf("\nSquare of each element : ");
	for(i=0; i<n; i++)
	{
		printf("%d, ",(*ptr[i]) * (*ptr[i]));
	}
	
}
