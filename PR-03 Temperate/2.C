#include<stdio.h>
#include<conio.h>
main()
{
	int n,count=0;
	clrscr();

	printf("Enter any Number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		count++;
		n=n/10;
	}

	printf("Total number of digits: %d",count);

	getch();
}