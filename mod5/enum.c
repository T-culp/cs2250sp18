/*
 * =====================================================================================
 *
 *       Filename:  enum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:40:56 AM
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
//                 0         1        2        3
enum LightState {LS_RED, LS_GREEN,LS_YELLOW,LS_DONE};
// Function Prototypes

// Main Function
int main()
{
    enum LightState lightVal;
    //printf("lightVal [%d]\n", lightVal);
    //
    return 0;
    char userCmd;

    lightVal = LS_RED;
    userCmd = '-';

    printf("User comands: n (next), r (red), q (quit).\n\n");

    lightVal = LS_RED;
    while (lightVal!= LS_DONE)
    {
        if (lightVal == LS_GREEN
                {
                printf("Green light  ");
                scanf(" %c", &userCmd);
                }

    }


    return 0;
}
// Function Definitions


