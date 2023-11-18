#include<stdio.h>

void main() {
	
	char str[100];
	int i,count = 0,*ptr;
	
	ptr = &count;
	
	printf("Enter any string : ");
	scanf("%[^\n]",&str);

	for(i=0; str[i]!='\0'; i++) 
		*ptr += 1;
	
	printf("\n\n\tThe Length of a string is : %d",*ptr);
}
