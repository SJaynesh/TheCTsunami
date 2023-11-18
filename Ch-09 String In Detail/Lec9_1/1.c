#include<stdio.h>

main() {
	
	int i;
	
	char name[100];
	
	printf("Enter any string : ");
	scanf("%[^\n]",&name);
//	gets(name);
	
	printf("\n\nUppercase string: ");
	for(i=0; i<name[i]!='\0'; i++) {
		
		if(name[i]>=97 && name[i]<=122) {
			
			printf("%c",name[i]-32);
			
		}
		else {
			
			printf("%c",name[i]);
		
		}
		
	}
}
