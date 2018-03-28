/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  Learn how arrays work
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:27 AM
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
const int LEN = 20;
// Function Prototypes

// Main Function
int main()
{
    int ar[LEN];
    ar[0] = 33; //First member
    ar[1] = 22; //Second member
    ar[2] = 66; //Third member
    ar[3] = 99; //Fourth member

    //Print information
    printf("First value [%d]\n", ar[0]);
    printf("Fourth value [%d]\n", ar[3]);

    //initialize the full array
    for(int i = 0; i < LEN; i++)
    {
        //Task: initialize numbers divisible by 3
        //to 0, else set to -99
        ar[i] = -99; //Initialize to 99
        if((i % 3) == 0)
        {
            ar[i] = 0; //Initialize to 0
        }
        else
        {
            ar[i] = -99; //initialize to -99
        }
    }
    //iterate over the full array
    for(int i = 0; i < LEN;i++)
    {
        printf("The %d value is %d\n", i, ar[i]);
    }

    return 0;
}
// Function Definitions


