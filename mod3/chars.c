/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  Practicing characters
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:28 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars
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
    char input;
    int age;
    printf("Do you like to code?:\n");
    scanf("%c", &input);


    printf("(1.)You entered: [%c]\n", input);
    printf("Do you really like to code?:\n");
    /*use an empty space before %c, 
     *this will take care of the previous enter char */
    scanf(" %c", &input);
    printf("(2.)You entered: [%c]\n", input);
    printf("(3.)You entered: [%c]\n", input);

    printf("enter your age\n");
    scanf("%d", &age);
    printf("Your age is: [%d]\n", age);
    return 0;
}
// Function Definitions


