#include <stdio.h>

int main() {
int x;
printf("Enter an integer: ");
scanf("%d",&x);
printf( "The original value is: %d\n", x );
printf( "Now, using postdecrement, the printed is: %d\n", x-- );
printf( "But the current value after printing is: %d\n", x );
  
  
printf( "Now, using predecrement, the value printed is: %d\n", --x );
printf( "The current value after printing is still: %d\n", x );
  
return 0;
}
