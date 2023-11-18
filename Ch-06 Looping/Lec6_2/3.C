#include<stdio.h>
#include<conio.h>

void main() {

	int a=1,num;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&num);

	do{
		if(a%2==0) {

			printf("%d\t",a);

		}
		a++;

	}while(a<=num);

	getch();
}