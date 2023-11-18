#include<stdio.h>

main() {
	
	int x;
	int y;
	int *ptr;
	int *ptr2;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	ptr = &x;
	ptr2 = &y;
	
	printf("\nBefore swapping :\n");
	printf("X : %d\nY : %d\n",*ptr,*ptr2);
	
    *ptr = *ptr + *ptr2;
	*ptr2= *ptr - *ptr2; 
	*ptr = *ptr - *ptr2;
	
	printf("\nAfter swapping :\n");
	printf("X : %d\nY : %d\n",*ptr,*ptr2);
		
}
