#include <stdio.h>

int main()
{
    /*
        打印2个5行5列的直角三角形(Rt△)，效果如下：
        Print two 5x5 right triangles (Rt△) with the output shown below: 
        *****
        ****
        ***
        **
        *
        
        *
        **
        ***
        ****
        *****
    */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    printf("_______________\n");
    printf("\n");


    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 6 - i; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
