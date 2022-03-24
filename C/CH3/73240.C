#include <stdio.h>
int main(void){
	int number,counter,largest=0;
	for(counter=0;counter<10;counter++)
	{
		printf("Enter a non-negative integer number: ");
		scanf("%d", &number);
		if(number>largest)
		largest=number;
	}
	printf("The largest number entered was: %d", largest);
	return(0);
}
