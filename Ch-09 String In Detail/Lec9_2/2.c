#include<stdio.h>
#include<string.h>

main() {
	
	char email[20];
	char password[10];
	char finalEmail[] = "admin@gmail.com";
	char finalPassword[] = "123456";
	
	int i;
	
	int emailLen, passLen;
	int validEmail = 0, validPassword = 0;
	 
	
	printf("Enter your email : ");
	scanf("%s",&email);
	
	printf("Enter your Password : ");
	scanf("%s",&password);
	
	 emailLen = strlen(finalEmail);
	 passLen = strlen(finalPassword);
	
	for(i=0; i<emailLen; i++) {
		
		if(email[i] == finalEmail[i]) {
			
			validEmail = 1;
		
		}else {
			
			validEmail = 0;
			brack;
		}
		
	}
	
	for(i=0; i<passLen; i++) {
		
		if(password[i] == finalPassword[i]) {
			
			validPassword = 1;
		
		}else {
			
			validPassword = 0;
			
		}
		
	}
	
	if(validEmail==1 && validPassword==1) {
		
		printf("\n\tLogin Successfull...");
		
	}else {
		
		printf("\n\tLogin Failed. Invalid Credentials.");
		
	}
	
	
}



