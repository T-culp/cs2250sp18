/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  Count down for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:55:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char name[] = "Waldo Weber";

    printf("Hi, [%s]you are [%lu] bytes long\n", name, sizeof(name));

    //Task 1, print one char at a time
    for(int c = 0; c< sizeof(name); c++)
    {
        printf("[%c]\n", name[c]);
    }
    //Task 2, Print nme in reverse order
    //TODO NEXT WEEK
    //
    //
    for(int i = 10; i > 0; i--)
    {
        printf(" i [%d]\n", i);
    }
    return 0;
}
// Function Definitions


