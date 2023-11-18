#include<stdio.h>
#include<conio.h>

void main() {

	int num;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&num);

	(num%2==0)
		? printf("This number is Even.")
		: printf("This number is Odd");

	getch();
}