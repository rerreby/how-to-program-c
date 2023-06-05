/* Example of use inline ?: operator */
#include <stdio.h>

int main()
{
    /* Define an answer, it should have been 42 actually */ 
    int answer = 10;
    puts( answer == 42 ? "Correct!" : "Incorrect!" );

    return 0;
}