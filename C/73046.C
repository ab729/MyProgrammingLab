#include<stdio.h>


int main(){
	
	
	
	int x,y , sum ,product, difference, quotient, remainder;
	printf("Enter an integer: ");
	scanf("%d\n" , &x);
	
	
	
	printf("Enter another integer: \n");
	scanf("%d\n" , &y);
	
	
	sum = x+y;
	product = x*y;
	difference = x-y;
	quotient = x/y;
	remainder= x%y;
	
	printf("The sum is: %d\n" , sum);
	printf("The product is: %d\n" , product);
	printf("The difference is: %d\n" , difference);
	printf("The quotient is: %d\n" , quotient);
	printf("The remainder is: %d\n" , remainder);
	

	
	return 0;
	
}
