/* Example of using while loop */
#include <stdio.h>

int main()
{
    /* Don't do that, since you don't know if the step can be more or less than 1 */
    unsigned int step = 1;

    /* Loop through the numbers */
    while ( step <= 100 )
        printf( "Current step: %d\n", ( step += 2 ) );

    /* Downward loop example */
    while ( step >= 2 )
        printf( "Current downward step: %d\n", ( step -= 2 ) );

    /* End of program */
    return 0;

}