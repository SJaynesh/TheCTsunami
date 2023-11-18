#include<stdio.h>
#include<conio.h>

void main() {

	int i,num,fib,a=0,b=1;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&num);


	for(i=1; i<=num; i++) {

		fib = a + b;
		printf("%d\t",fib);
		a=b;
		b=fib;
	}



	getch();
}