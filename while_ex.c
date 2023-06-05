/* Example of using while loop */
#include <stdio.h>

int main()
{
    int counter = 2;

    /* While loop */
    while (counter <= 1000)
    {
        counter = 2 * counter;
        printf( "%d ", counter );
    }

    /* End of program */
    return 0;

}