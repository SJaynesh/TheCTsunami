#include<stdio.h>
#include<conio.h>

void main() {

	float F;
	float C;
	clrscr();

	printf("Enter the Celcius\t:");
	scanf("%f",&C);

	F = (C * 9/5) +32;

	printf("\n\tThe temperature in Celcius\t: %.2f",F);

	getch();

}