#include<stdio.h>
#include<conio.h>

void main() {
	int i, num;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&num);

	for(i=1; i<=10; i++) {
		printf("%d * %d = %d\n",num,i,num*i);
	}

	getch();
}