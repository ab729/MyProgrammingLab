#include<stdio.h>


int main()
{

    for (int i = 1; i <= 10; ++i)
        {
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
        }

    printf("\n");


        for (int i = 10; i >= 1; --i)
        {
            for (int j = 1; j <= i; ++j)
            {
                printf("*");
            }
            printf("\n");
        }
    printf("\n");

    for (int i = 10; i >= 1 ; --i)
    {
        for (int k = 10-i; k > 0; --k)
        {

            printf(" ");

        }
        for (int j = 1; j <= i ; ++j)
        {
            printf("*");
        }
        printf("\n");

    }



    printf("\n");
    for (int i = 1; i <= 10 ; ++i)
    {
        for (int k = 10-i; k > 0; --k)
        {

            printf(" ");

        }
        for (int j = 1; j <= i ; ++j)
        {
            printf("*");
        }

        printf("\n");
    }


    printf("\n");





    return 0;
}
