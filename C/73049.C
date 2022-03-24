#include<stdio.h>
int input;
int main()
{
	
	printf("Enter a 5 digit integer: ");
    scanf("%d   " , &input);
	
	printf("%d   " , (input/10000)%10);
	printf("%d   " , (input/1000)%10);
	printf("%d   " , (input/100)%10);
	
	printf("%d   " , (input/10)%10);

    printf("%d" , input%10);
