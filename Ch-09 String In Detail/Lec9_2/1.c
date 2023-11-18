#include<stdio.h>
#include<string.h>

main() {
	
	char password[20];
	int i,length,upr=0,low=0,digit=0,symbol=0;
	
	printf("Create your password : ");
	scanf("%s",&password);
	
	length = strlen(password);
	printf("Len : %d",length);
	
	if(length>6) {
		
		for(i=0; i<length; i++) {
			
			if(password[i]>=65 && password[i]<=90) {
			
				upr = 1;
		
			}else if(password[i]>=97 && password[i]<=122) {
				
				low = 1;
			
			}else if(password[i]>='0' && password[i]<='9') {
				
				digit = 1;
				
			}else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' || password[i]=='*') {
				
				symbol = 1;
				
			}
		
		}
		
		
	}else {
		goto end;
	}
	
	if(upr==1 && low==1 && digit==1 && symbol==1) {
		
		printf("\n\nYour password is Strong");
		
	}else {
		
		end : printf("\n\nYour password is not Strong");
		
	}
	
}
