#include<stdio.h>
#include<conio.h>

void main() {
	float length;
	float width;
	float areaOfRectangle;

	clrscr();

	printf("Enter the Length :");
	scanf("%f",&length);
	printf("Enter the Width :");
	scanf("%f",&width);

	areaOfRectangle = length * width;

	printf("\n\t Length\t: %.2f\n",length);
	printf("\t Width\t: %.2f\n",width);
	printf("\t Area Of Rectangle\t: %.2f",areaOfRectangle);

	getch();
}