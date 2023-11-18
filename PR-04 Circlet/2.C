#include<stdio.h>
#include<conio.h>

main() {
	int i ,j,p=11;

	clrscr();

	for(i=11; i<=15; i++) {

		for(j=11; j<=i; j++)

			printf("%d ",p++);

		printf("\n");
	}
	getch();


}