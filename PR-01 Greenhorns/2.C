#include<stdio.h>
#include<conio.h>

void main() {
	int baseSalary;
	int HRA;
	int DA;
	int TA;
	int totalSalary;
	clrscr();

	printf("Enter the Base Salary\t:");
	scanf("%d",&baseSalary);

	HRA = baseSalary * 10 / 100;
	DA  = baseSalary * 5  / 100;
	TA  = baseSalary * 8  / 100;

	totalSalary = baseSalary + HRA + DA + TA;

	printf("\n\tTotal Salary\t: %d",totalSalary);

	getch();

}
