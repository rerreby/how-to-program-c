/* A program that finds ten and thousands of a number */
#include <stdio.h>

int main()
{
    int number;

    printf( "Type the number from (1000-9999): " );
    scanf( "%d", &number );

    if ( (number < 1000) || (number > 9999) )
    {
        printf( "Typed integer (%d) out of the range (1000-9999)\n", number );
        return 1;
    }

    printf( "%d thousands\n",   number % 10000 / 1000 );
    printf( "%d hundreds\n",    number % 1000 / 100 );
    printf( "%d tens\n",        number % 100 / 10 );  
    printf( "%d ones\n",        number % 10 );

    /* Exit program */
    return 0;

}