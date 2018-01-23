/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  First use of strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:44 AM
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
    char name[11];  // allocate 20 chars + NULL char
    printf("Enter your name:\n");
    scanf("%s", name);
    /* Note: If you use an array, for ex: string,
     * DO NOT use the & address operator*/
    
    printf(" Your name is: [%s]\n", name);

    return 0;
}
// Function Definitions


