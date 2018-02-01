/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:32:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>  //Boolean varialbes

// Constants

// Function Prototypes

// Main Function
int main()
{
    //(1). Ask user for integer value.
    int grade = 0;
    bool success = true;
    printf("Enter your grade.\n");
    scanf("%d", &grade);

    //(2).if 90 >= value <= 100, print 'A'
    if (grade >= 90 && grade <= 100)
    {
        printf("Your grade of %d has scored you an 'A'.\n", grade);
    }
    //(3).if 80 >= value <= 89, print 'B' 
    else if (grade >= 80 && grade <= 89)
    {
        printf("Your grade of %d has scored you an 'B'.\n", grade);
    }
   

    //(4).if 70 >= value <= 79, print 'C'
    else if (grade >= 70 && grade <= 79)
    {
        printf("Your grade of %d has scored you an 'C'.\n", grade);
    }
   
    //(5).if 70 < value, print 'E'
  else if (grade < 70)
    {
        printf("Your grade of %d has scored you an 'E'.\n", grade);
        success = false;
    }
   
    else
    {
        printf("You entered an invalid grade.\n");

    }

    //Test for TRUE or FALSE
    if (success)
    {
        printf("Congrats!\n");
    }
    else
    {
        printf("See you next semester.\n");
    }

    return 0;

}
// Function Definitions


