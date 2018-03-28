/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  Super function definitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:23 AM
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
#include <ctype.h>
#include "superlib.h"

// Function Definitions

//Func :StrSpaceChange
//Changes spaces in string to user char
void StrSpaceChange(char modString[], char sep)
{
     for(int i = 0; i < strlen(modString); i++)
    {
        if(modString[i] == ' ')
        {
            modString[i] = sep;
        }//End if
    }//End for
    return;
}//End StrSpaceChange

//Func: StrCountDigits
//Counts the digits 0-9 in a string
//takes one argument string to analyze
int StrCountDigits(char modString[])
{
    int total = 0;
    for(int i = 0; i < strlen(modString); i++)
    {
        if(isdigit(modString[i]))
              {
                total ++;
              } //end if

    }//End for
                return total;
 }//End StrCountDigits
