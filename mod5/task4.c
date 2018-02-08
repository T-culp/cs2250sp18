/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  Print first 20 even numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:08:57 AM
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
    //print first 20 even numbers
int num = 0;
int counter = 0;
    while(1)
    {
        //print even numbers
        if ( (num % 2) == 0)
        {
            printf("Even number [%d]\n", num);
        }
        else
        {
            ////skip odd numbers
            printf("\tSkip odd number [%d]\n", num);
            num ++; //increment condition
            continue;
        }
        ////when 20 even numbers, break loop
        num ++;//increment condition
        counter ++;
        if (counter == 0)
        {
            break; //leave loop
        }



    }


    return 0;
}
// Function Definitions


