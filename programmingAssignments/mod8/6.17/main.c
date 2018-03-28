/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Programming Assignment 6.17
 *
 *        Version:  1.0
 *        Created:  03/20/2018 05:53:27 PM
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
const int SIZE = 50;
// Function Prototypes
int GetNumOfCharacters(char Arr[]);
void OutputWithoutWhitespace(char Arr[]);
// Main Function
int main()
{
    char userStr[SIZE];
    printf("Enter a sentence or phrase:\n");
    fgets(userStr, SIZE, stdin);
    printf("\n");
    printf("You entered: %s\n", userStr);
    printf("\n");

    int c = GetNumOfCharacters(userStr);
    printf("Number of characters: %d\n", c);

    OutputWithoutWhitespace(userStr);
    printf("String with no whitespace: %s\n", userStr);
    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOfCharacters
 *  Description:  Displays the number of characters in an array
 * =====================================================================================
 */

int GetNumOfCharacters(char Arr[])
{
    int characters = 0;

    for(int i = 0; i < strlen(Arr); i++)
    {
        characters = characters + 1;
    }//End for

    return characters;
}//End GetNumOfCharacters


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  OutputWithoutWhitespace
 *  Description:  Outputs array without whitespace
 * =====================================================================================
 */
void OutputWithoutWhitespace(char Arr[])
{
    int i = 0;
    int j = 0;
    while(Arr[i] != '\0')
    {
         if(Arr[i] != ' ')
         {
             Arr[j++] = Arr[i];
         }//End if
         i++;
    }//End while
    Arr[j] = '\0';
    return;
}//End OutputWithoutWhitespace
