#include<stdio.h>
#include<conio.h>

main() {

	int i,j;

	clrscr();

	for(i=1; i<=6; i++) {

		if(i==1 || i==3)
			printf("* * * * *\n");

		else if(i==4)
			printf("          \n");
		else
			printf("*       *\n");
	}

	getch();
}