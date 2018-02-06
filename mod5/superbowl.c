/*
 * =====================================================================================
 *
 *       Filename:  superbowl.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:28:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    char qbfn[50] = "";
    char qbln[50] = "";

    printf("Selecta QB, ");
    printf("and I'll tell you number of Super Bowl wins: \n");
    printf("Tom Brady\n");
    printf("Payton Manning \n");
    printf("Eli Manning \n");
    printf("None\n");

    //take input
    scanf("%s", qbfn); //Requires one input
    //scanf("%s %s, qbfn, qbln); //Requires two inputs

    if(strcmp(qbfn, "None") == 0)
        {
            printf("No Super Bowls\n");

        }
    else
        {
            scanf("%s", qbln);
            printf("Hi %s %s\n", qbfn, qbln);
        
            //for hw: if() == 0 && () ==0
        }



    return 0;
}
// Function Definitions


