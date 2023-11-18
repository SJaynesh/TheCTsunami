#include<stdio.h>
#include<string.h>

int nameLength(char n[]) {
	
	int len = strlen(n);
	
	return len;
}

main() {
	
	char name[50];
	
	printf("Enter any string : ");
	scanf("%[^\n]",&name);
	
	int length = nameLength(name);
	
	printf("Length\t: %d",length);
	
}
