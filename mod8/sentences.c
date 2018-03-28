/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description: Capture full strings including spaces 
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:34:42 AM
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


// Constants
const int STRSIZE = 128;
// Function Prototypes

// Main Function
int main()
{
    char fullName[STRSIZE];
    printf("Please enter your full name: \n");
    //scanf("%s", fullName);
    fgets(fullName, STRSIZE, stdin);
    
    //From string.h use strlen for string length
    for(int i = 0; i < strlen(fullName); i++)
    {
        printf("%c", fullName[i]);
    }//end for

    printf("Hi, [%s] \n", fullName);

    return 0;
}
// Function Definitions


