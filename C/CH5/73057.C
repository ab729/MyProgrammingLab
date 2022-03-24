#include <stdio.h>
#include <math.h>
int power(a,b) {
	a = pow(a,b);
	return a;
}

int main() {
	int base, exponent;
	printf("Enter the base:");
	scanf("%d",&base);
	printf(" Enter the exponent: ");
	scanf("%d",&exponent);
	printf("%d",power(base,exponent));
	return 0;
}
