#include<stdio.h>
#include<conio.h>

void main() {

	int i,j;
	clrscr();

	for(i='A'; i<='E'; i++) {

		for(j=i; j>='A'; j--) {

			printf("%c ",j);

		}
		printf("\n");
	}
	getch();
}