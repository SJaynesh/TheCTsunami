#include<stdio.h>
#include<conio.h>

void main() {

	int i,num,sum=0;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&num);

	for(i=1; i<=num; i++) {
		sum += i;
	}

	printf("The sum of all numbers : %d",sum);

	getch();
}