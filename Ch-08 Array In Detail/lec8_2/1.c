#include<stdio.h>

main() {
	
	int a_Size,b_Size,c_Size,i;
	
	printf("Enter arrat A's size : ");
	scanf("%d",&a_Size);
	
	int a[a_Size];
	
	
	printf("\nEnter array A's elements : \n");
	for(i=0; i<a_Size; i++) {
		
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter arrat B's size : ");
	scanf("%d",&b_Size);
	
	int b[b_Size];
	
	printf("\nEnter array A's elements : \n");
	for(i=0; i<b_Size; i++) {
		
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	c_Size = a_Size + b_Size;
	int c[c_Size];
	
	for(i=0; i<a_Size; i++) {
		
		c[i] = a[i];
	}
	
	for(i=0; i<b_Size; i++) {
		
		c[i+a_Size] = b[i];
	}
	
	printf("\nArray C is : ");
	for(i=0; i<c_Size; i++) {
		
		printf("%d, ",c[i]);
	}
	
	
	
	
	
	
}
