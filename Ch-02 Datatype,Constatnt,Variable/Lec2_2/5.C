#include<stdio.h>
#include<conio.h>
#define pi 3.14

void main() {
	     float radius;
	     float perametersOfCircle;
	     clrscr();

	     printf("Enter the Radius :");
	     scanf("%f",&radius);

	     perametersOfCircle = 2 * pi * radius;

	     printf("\n\t Radius\t: %.2f\n",radius);
	     printf("\n\t Perameters of circle\t: %.2f",perametersOfCircle);

	     getch();
}