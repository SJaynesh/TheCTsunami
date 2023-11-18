#include<stdio.h>

main() {
	
	int first,second,size=0,i;
	
	printf("Enter the first number : ");
	scanf("%d",&first);
	
	printf("Enter the second number : ");
	scanf("%d",&second);
	
	int n = second - first;
	
	int a[n];
	
	for(i=first; i<=second; i++) {
		
		if(i%4==0) {
			a[size] = i;
			size++;
		}
	}
	
	printf("\n The array is : ");
	for(i=0; i<size; i++) {
		
		printf("%d ",a[i]);
	}
}
