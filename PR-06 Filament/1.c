#include<stdio.h>

main() {
	
	char name[50];
	int i,n = 0,palindrom = 0;
	
	printf("Enter any String : ");
	scanf("%[^\n]",&name);
	
	for(i=0; i<name[i]!='\0'; i++) {
	
		n++;
	}
	
	for(i=0; i<n; i++) {
		
		if(name[i] != name[n-i-1]) {
			
			palindrom = 1;
			break;
		}
	}
	
	(palindrom == 0) 
					? printf("\n\tGiven string is a Palindrome.") 
					: printf("\n\tGiven string is not a Palindrome.");
	
}
