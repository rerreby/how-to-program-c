/* Use "if" operator and equal operator */
#include <stdio.h>

/* start execution */
int main( void )
{
    int num1;   /* first number, that user input */
    int num2;   /* second number, that user input */

    printf( "Enter two integers, and I will tell you\n" );
    printf( "the relationship they satisfy" );
    scanf( "%d%d", &num1, &num2 );

    if ( num1 == num2 )
    {
        printf( "%d is equal to %d", num1, num2 );
    }

    if ( num1 != num2 )
    {
        printf( "%d is NOT equal to %d", num1, num2 );
    }

    if (num1 < num2 )
    {
        printf( "%d less than %d", num1, num2 );
    }

    if ( num1 > num2 )
    {
        printf( "%d more than %d", num1, num2 );
    }

    if ( num1 >= num2 )
        printf( "%d more than or equal %d", num1, num2 );

    if ( num1 <= num2 )
        printf( "%d less than or equal %d", num1, num2 );

    /* end of the program */
    return 0;4
}