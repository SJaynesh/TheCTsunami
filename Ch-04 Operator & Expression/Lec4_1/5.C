#include<stdio.h>
#include<conio.h>

void main() {
	int x,y;
	clrscr();

	printf("Enter the x\t:");
	scanf("%d",&x);
	printf("Enter the y\t:");
	scanf("%d",&y);

	printf("\n\tFormula's Answer (x+y)^3\t: %d", (x*x*x) +(3*x*x*y) + (3*x*y*y) + (y*y*y));

	getch();
}