#include<stdio.h>
#include<conio.h>

void main()
{
    int unit;
    double bill, totalBill, surCharge;
    clrscr();

    printf("Enter electricity units : ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
	bill = unit * 0.50;
    }
    else if(unit <= 150)
    {
	bill = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
	bill = 100 + ((unit-150) * 1.20);
    }
    else
    {
	bill = 220 + ((unit-250) * 1.50);
    }


    surCharge = bill * 0.20;
    totalBill  = bill + surCharge;

    printf("\n\n\tElectricity Bill = Rs. %.2f", totalBill);

    getch();

}
