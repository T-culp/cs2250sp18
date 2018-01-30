/*
 * =====================================================================================
 *
 *       Filename:  switch.c
 *
 *    Description:  Test switch statements.
 *                  Note: only works on integers (including singular chars)
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
    switch(pos)
    {

        case 1:   //if (pos == 1)
            printf("You received a gold medal.\n");
            break; //leave the switch block

        case 2:   //if (pos == 2)
            printf("You received a silver medal.\n");
            break;

        case 3:   //if (pos == 3)
            printf("You received a bronze medal.\n");
            break;

        case 14:
        case 28:
        case 36:    //if (pos == 14 or 28 or 36)
            printf("You received a plastic medal.\n");
            break;

        default:
            printf("Sorry, you received no medal.\n");
            //default does not require a break

    }//end of switch

    printf("Adios amigo.\n");
    return 0;


}
// Function Definitions


