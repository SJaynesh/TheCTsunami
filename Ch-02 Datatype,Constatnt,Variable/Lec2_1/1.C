#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 12, b = 6;

	clrscr();

	printf("\n\tAddition of %d and %d is %d\n",a,b,a+b);
	printf("\tSubtraction of %d and %d is %d\n",a,b,a-b);
	printf("\tMultiplication of %d and %d is %d\n",a,b,a*b);
	printf("\tDivision of %d and %d is %d\n",a,b,a/b);
	printf("\tModulo of %d and %d is %d\n",a,b,a%b);

	printf("\n\t%d + %d = %d\n",a,b,a+b);
	printf("\t%d - %d = %d\n",a,b,a-b);
	printf("\t%d * %d = %d\n",a,b,a*b);
	printf("\t%d / %d = %d\n",a,b,a/b);
	printf("\t%d mod %d = %d\n",a,b,a%b);
	getch();
}