#include<stdio.h>
#include<math.h>
int main()
{
    char name[50];
    int meter_number;
    int units,previous,present;
    double charge,net_charge,vat;
    printf("Enter customer meter number : ");
    scanf("%d",&meter_number);
    printf("Enter your customer name : ");
    fflush(stdin);
    gets(name);
    printf("Enter your present consumption units is : ");
    scanf("%d",&present);
    printf("Enter your previous consumption units is : ");
    scanf("%d",&previous);
    units = present - previous;
    if(units>0 && units<=75)
    {
        charge = 4.75 * units;
    }
    else if(units>75 && units<=125 )
    {
        charge = ((units - 75)*5.65) + (75*4.75);
    }
    else if(units>125 && units<=225)
    {
        charge = (units - 125)*6.12 + (75*4.75) + (50*5.65);
    }
    else
    {
        charge = (units - 225)*8.15 + (75*4.75) + (50*5.65) + (100 *6.12);
    }
    vat = charge * 0.05;
    net_charge =  vat + charge + 10;
    int  total = ceil(net_charge);

    printf("The customer meter number is : %d\n",meter_number);
    printf("The customer name is : %s\n",name);
    printf("The electricity charge is : %.2lf\n",charge);
    printf("The customer vat charge is : %.2lf\n",vat);
    printf("The customer net_charge with vat is : %.2lf\n",net_charge);
    printf("The customer total charge is : %d\n",total);


    getch();
}
