/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:35 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h> //For char character operations
// Constants

// Function Prototypes

// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9.\n");
    scanf("%c", &num);

    if (num == '0')
    {
        printf("You entered '0'.\n");
    }
    else
    {
        printf("You entered non-zero [%c].\n", num);
    }

    //Test for alpha values (zero if false)
    if ( isalpha(num) != 0)  //A-Z & a-z
    {
        printf("It is alpha.\n");
    }

    //Test for digit (zero if false)
    else if ( isdigit(num) != 0)
    {
        printf("It is a digit.\n");
    }
    
    else
    {
        printf("You are [%c]\n", num);
    }
    
    return 0;
}
// Function Definitions


