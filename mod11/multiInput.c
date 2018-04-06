/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  Multiple inputs w/ scanf
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:18 AM
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
void Help(void);

// Main Function
int main()
{
   //int feet, in;
   //printf("Enter feet & inches separated by a space:\n");
   // scanf("%d %d", &feet, &in);
   // printf("You entered: %d feet & %d inches\n", feet, in);
   
    int hour = 0;
    int min = 0;
    char AmPm[3];
    printf("Enter the time in this format: HH:MM AM/PM\n");
    //Validate scanf
    if(scanf("%2d:%2d %2s", &hour, &min, AmPm) != 3)//Alt method: let int rc = scanf(), if(rc != 3)
    {
        Help();
    }//End if
    else
    {
    printf("Your time is: %d:%d %s\n", hour, min, AmPm);
    }//End else

    return 0;

}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Help
 *  Description:  Try to assist user in proper usage of program
 * =====================================================================================
 */
void Help(void)
{
    printf("Bad format. Please make sure you enter the time as shown below\n");
    printf("Format: HH:MM AM/PM\n");
    return;

}//End Help


