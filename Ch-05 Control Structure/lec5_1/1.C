#include<stdio.h>
#include<conio.h>

void main() {

	int a,b;
	clrscr();

	printf("Enter a value of the first number :");
	scanf("%d",&a);
	printf("Enter a value of the second number :");
	scanf("%d",&b);


	if(a>b){

		printf("The minimum value is : %d",b);

	} else {
		printf("The minimum value is : %d",a);
	}

	getch();
}