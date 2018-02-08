/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Multiplication tables 1-10 using for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:00 AM
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
const int ROW = 10;
const int COLUMN = 10;
// Function Prototypes

// Main Function
int main()
{

    for(int r = 1; r <= ROW; r++)
    {
        for(int c = 1; c <= COLUMN; c++)
        {
            printf("[%3d] ", r * c);
        }//end column
        printf("\n");

        //Value of c? NO, out of scope
        //printf("r[%d], c[%d]\n", r, c);
    }//end row

    //Value of c and r? NO, out of scope
    //printf("r[%d], c[%d]\n", r, c);

    return 0;
}
// Function Definitions


