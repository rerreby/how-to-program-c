/* Operator do...while */
#include <stdio.h>

/* Program entry-point */
int main( void )
{
    /* Initialize counter */
    unsigned int counter = 1;

    /* Main loop. Print out the counter and increment it */
    do
        printf( "%d ", counter );
    while ( ++counter <= 10 );

    /* End of the program */
    return 0;
}