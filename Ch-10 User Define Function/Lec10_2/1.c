#include<stdio.h>

int additionOfSum(int n, int a[]) {
	
	int i,sum=0;
	for(i=0; i<n; i++) 
		sum += a[i];
		
	return sum;
}

main() {
	
	int n,i,sum;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter array elements : \n");
	for(i=0; i<n; i++) {
		
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	int addition = additionOfSum(n,a);
	
	printf("\n\nThe sum of an Array : %d",addition);
}
