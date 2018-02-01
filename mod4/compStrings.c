/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Compare string values 
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h> // To compare strings.
// Constants

// Function Prototypes

// Main Function
int main()
{
    char word[51];
    char word2[51];
    printf("Enter a word.\n");
    scanf("%s", word);

    printf("You entered: [%s].\n", word);

    //Compare strings
    if (strcmp(word, "Hello") == 0)
    {
        printf("You entered Hello.\n");
    }
    else
    {
        printf("You did not enter Hello.\n");
    }

    //Copying a string
    strcpy(word2, word); //Destination, source
    printf("[%s] and [%s].\n", word, word2);
    
    return 0;
}
// Function Definitions


