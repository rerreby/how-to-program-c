/* A program that writes row of number from 1-4
    in three ways */
#include <stdio.h>

/* Program entry-point */
int main()
{
    /* printf() w/o specificators */
    printf( "1 2 3 4\n" );

    /* printf() w/ specificators */
    printf( "%d %d %d %d\n", 1, 2, 3, 4 );

    /* 4 * printf() */
    printf( "1 " );
    printf( "2 " );
    printf( "3 " );
    printf( "4\n" );

    /* Exit program */
    return 0;
}