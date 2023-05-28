#include <stdio.h>

int main()
{
    int unit;
    float amount, total, percentage;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if(unit > 50)
    {
        amount = unit * 2.05;
        unit = unit - 50;
    }
    else if(unit <= 150)
    {
        amount = 25 + ((unit-50) * 2.75);
    }
    else if(unit <= 250)
    {
        amount = 100 + ((unit-150) * 4.20);
    }
    else
    {
        amount = 220 + ((unit-250) * 4.50);
    }
    percentage = amount * 0.10;
    total  = amount + percentage;

    printf("Electricity Bill = Rs. %.2f", total);
//mailme if needed
//nsjndicjnwencowj
//vdsgjhkvbsknvkandc
    return 0;
}