/* Operator do...while */
#include <stdio.h>

/* Program entry-point */
int main( void )
{
    /* Initialize counter */
    unsigned int counter = 1;

    do
        printf( "%d ", counter );
    while ( ++counter <= 10 );

    /* End of the program */
    return 0;
}