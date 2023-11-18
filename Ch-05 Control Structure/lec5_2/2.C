#include<stdio.h>
#include<conio.h>

void main() {

	int a, b, c,d;
	clrscr();

	printf("Enter a value of the first number : ");
	scanf("%d",&a);
	printf("Enter a value of the second number : ");
	scanf("%d",&b);
	printf("Enter a value of the third number : ");
	scanf("%d",&c);
	printf("Enter a value of the fourth  number : ");
	scanf("%d",&d);

	if(a>b) {
		if(a>c) {
			if(a>d) {
			      printf("The maximum value : %d",a);
			}else {
				printf("The maximum value : %d",d);
			}
		}else {
			if(c>d) {
			    printf("The maximum value : %d",c);
			}else {
			    printf("The maximum value : %d",d);
			}
		}
	}
	else {
		if(b>c){
			if(b>d) {
				printf("The maximum value : %d",b);
			}else {
				printf("The maximum value : %d",d);
			}
		}else {
			if(c>d) {
			     printf("The maximum value : %d",c);
			}else {
			    printf("The maximum value : %d",d);
			}
		}
	}
	getch();
}