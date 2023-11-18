#include<stdio.h>

check(int n) {
	
	(n%3==0 && n%5==0) 
				?printf("\n\tThe given number is divisible by both 3 & 5.")
				:printf("\n\tThe given number is not divisible by both 3 & 5.");
	
}

main() {
	
	int number;
	
	printf("Enter any number : ");
	scanf("%d",&number);
	
	check(number);
}
