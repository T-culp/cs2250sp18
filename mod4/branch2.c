/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test for race medals
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:38 AM
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
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);

    //(1). pos = 1, gold medal
    if (pos == 1)
    {
        printf("You received a gold medal\n.");
    }
    
    //(2). pos = 2, silver medal
    else if (pos == 2)
    {
        printf("You received a silver medal\n.");
    }

    //(3). pos = 3, bronze medal
    else if (pos == 3)
    {
        printf("You received a bronze medal\n.");
    }

    //(4). pos > 3, sorry no medal
    else
    {
        printf("Sorry, you received no medal.\n");
    }

    return 0;
}
// Function Definitions


