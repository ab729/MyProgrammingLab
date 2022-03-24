#include<stdlib.h>
#include<stdio.h>


int main()
{
double curr_miles,curr_gallons=0,total_gallons=0,total_miles=0;
while(1)
{
printf("Enter gallons used (-1 to end): ");
scanf("%lf",&curr_gallons);
if(curr_gallons<0)
break;
total_gallons += curr_gallons;
printf("Enter miles driven: ");
scanf("%lf",&curr_miles);
total_miles +=curr_miles;
printf("The miles/gallons for this tank was %lf miles.\n",curr_miles/curr_gallons);
}
printf("The overall average miles/gallon was %lf miles\n",total_miles/total_gallons);
}
