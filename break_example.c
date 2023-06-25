/* Break example */
#include <stdio.h>

int main( void )
{
    unsigned int counter = 1;

    /* Prints only first 4 numbers */
    while ( counter <= 10 ) 
    {
        /* If counter equals 5, exait from while */
        if ( counter == 5 )
            break;

        printf( "%d", counter );
        counter++;
    }
    
    /* End of program */
    return 0;
}