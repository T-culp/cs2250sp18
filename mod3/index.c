/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation to access string members.
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:43:10 AM
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
    //(1.) Define two strings
    //(2.) Get fname info
    //(3.) Get lname info
    //(4.) Display initials

    char fname[20];
    char lname[20];
    
    printf("Please enter your first name:\n");
    scanf("%s", fname);

    printf("Please enter your last name:\n");
    scanf("%s", lname);

    printf("Hello %s %s\n", fname, lname);

    //To access individual members of an array, use
    //Index notation with []
    //I.e: look for the positio of the character you wish to display.
    //(0, 1, 2, 3, etc.)
    printf("Your initials are: [%c%c]\n", fname[0], lname[3]);

    return 0;
}
// Function Definitions


