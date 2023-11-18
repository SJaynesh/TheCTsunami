#include<string.h>
#include<string.h>

main() {
	
	char name[50];
	int i,j,f;
	
	printf("Enter any string : ");
	gets(name);
	
	int n = strlen(name);
	
	printf("\nFrequency of each letter.\n");
	for(i=0; i<n; i++) {
		
		f = 1;
		if(name[i] != '\0') {
			for(j=i+1; j<n; j++) {
			
			if(name[i] == name[j]) {
				
				f++;
				name[j] = '\0';	
			}
		}
		printf("\t%c => %d\n",name[i],f);		
		}
	}
}
