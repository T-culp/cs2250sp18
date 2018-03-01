/*
 * =====================================================================================
 *
 *       Filename:  trevor_culp_exam1_task1.c
 *
 *    Description:  First choice: Task 1
 *
 *        Version:  1.0
 *        Created:  02/27/2018 08:42:02 AM
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
void MoneyOptions(float moneyEarned);
// Main Function
int main()
{
    //Initialize variable
    float moneyEarned = 0;

    //Prompt for the desired amount of money earned
    printf("How much money would you like to earn?\n");
    scanf("%f", &moneyEarned);

    MoneyOptions(moneyEarned);

    return 0;
}
// Function Definitions

//Func: MoneyOptions
//Displays what can be done with the desired amount of money earned 
void MoneyOptions(float moneyEarned)
{
    if(moneyEarned <= 5000)
    {
        printf("With this amount of money %.2f you can buy a TV\n", moneyEarned);
    }//End if

    else if((moneyEarned >= 5000) && (moneyEarned <= 10000))
    {
        printf("With this amount of money %.2f you can buy a RTV\n", moneyEarned);
    }//End else if

    else if((moneyEarned > 10000) && (moneyEarned <= 50000))
    {
        printf("With this amount of money %.2f you can buy a car\n", moneyEarned);
    }//End else if

    else if(moneyEarned > 50000)
    {
        printf("With this amount of money %.2f you can buy a small house\n", moneyEarned);
    }//End else if
    return;
}//End MoneyOptions

