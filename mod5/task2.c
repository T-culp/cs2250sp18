/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Prompt for positive number
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:43 AM
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
    int num = -1;
    while (num < 0)
    {
        printf("Enter a positive number >= 0: \n");
        scanf("%d", &num);

    }
    
    printf("Done\n");


    return 0;
}
// Function Definitions


