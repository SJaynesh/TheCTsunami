#include<stdio.h>
#include<conio.h>

void main() {

	int a,b,c;
	clrscr();

	printf("Enter the a\t:");
	scanf("%d",&a);
	printf("Enter the b\t:");
	scanf("%d",&b);

	printf("\n\t-- Value --\n");
	printf("\t A\t: %d\n",a);
	printf("\t B\t: %d\n",b);
	// a = 10 b = 20

	c = a; // 0 = 10  c = 10
	a = b; // 10 = 20 a = 20
	b = c; // 20 = 10 b = 10

	printf("\n\n\t-- Swapping --\n");
	printf("\t A\t: %d\n",a);
	printf("\t B\t: %d\n",b);

	getch();
}