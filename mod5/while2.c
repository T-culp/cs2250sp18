/*
 * =====================================================================================
 *
 *       Filename:  while2.c
 *
 *    Description: Infinite while loop // ctrl c to stop in terminal
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:23:50 AM
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
    int num = 2;
    int age = 21;
    
    while (num)
        {
            printf("Num [%d]\n", num);
            num --;
        }

    //This loop REQUIRES a break statement
    while (1)
        {
            if(age == 0)
                {
                    printf("Thank you\n");
                    //Break works on loops, switch blocks
                    break; //Out of loop
                }
            else
                {
                    printf("Your age is [%d]\n", age);
                    age --;
                }

        } //End of loop
    
    printf("Done\n");

    return 0;
}
// Function Definitions


