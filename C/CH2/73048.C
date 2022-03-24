#include<stdio.h>
int input;
int main()
{
	printf("Enter an integer to determine its parity:");
	scanf("%d" , &input);
	
	if(input %2 ==0)
	printf(" The integer %d is even. ", input);
	
	else 
	printf(" The integer %d is odd." , input);
	
	
	
return 0;	
}
