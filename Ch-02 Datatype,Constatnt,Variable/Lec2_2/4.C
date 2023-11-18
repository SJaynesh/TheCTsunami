#include<stdio.h>
#include<conio.h>

void main() {
	float price;
	int rate;
	int numberOfYear;
	float simpleInterest;

	clrscr();

	printf("Enter the Price :");
	scanf("%f",&price);
	printf("Enter the rate :");
	scanf("%d",&rate);
	printf("Enter the Number of year :");
	scanf("%i",&numberOfYear);

	simpleInterest = price * rate * numberOfYear / 100;

	printf("\n Price\t: %.2f\n",price);
	printf("Rate\t: %d\n",rate);
	printf("Number of year\t: %d\n",numberOfYear);

	printf("\n\t Simple Interest\t: %.2f",simpleInterest);

	getch();

}