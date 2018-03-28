/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:04:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "superlib.h" //"" local header file

// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE];

    //Prompt user for input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    //call function to modify user defined string
    StrSpaceChange(userStr, ':');

    printf("String with hyphens: %s\n", userStr);

    int t = StrCountDigits(userStr);
    printf("Your input has [%d] digits\n", t);

    return 0;
}
