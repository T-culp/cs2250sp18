/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take two numbers (doubles) from the user
 *                  Define the following functions
 *                  (1). TheSum: Returns the sum of the two numbers
 *                  (2). TheProd: Returns the product of the two numbers
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:31:50 AM
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
char Menu(void);
int TheSum(double n1, double n2);
double TheProd(double n1, double n2);

// Main Function
int main()
{
    //Declare variables
    char input;
    double n1 = 3.5;
    double n2 = 4.8;

    input = Menu();

    switch(input)
    {
        //Get user input
        // printf("Enter Two numbers:\n");
        //scanf("%lf", n1);
        //scanf("%lf", n2);

        //Call functions

        case 's':
            printf("The sum of %lf and %lf is: %d\n", n1, n2, TheSum(n1, n2));

        case 'p':
            printf("The product of %lf and %lf is: %lf\n", n1, n2, TheProd(n1, n2));
            break;

        default:
            printf("Invalid choice\n");

    }//End switch
    return 0;
}

// Function Definitions

//Func: Menu
//Displays menu to user
char Menu(void)
{
    char in = 'n';
    printf("\tMENU\n");
    printf("\ts -- Displays the sum\n");
    printf("\tp -- Displays the product\n");
    printf("\n");
    printf("Enter an option:\n");
    scanf(" %c", &in);

    return in;
}//End Menu
//Func: TheSum
//Returns the sum of two numbers
int TheSum(double n1, double n2)
{
    return (int)(n1 +n2);
}//End TheSum

//Func: TheProd
//Returns the product of two numbers
double TheProd(double n1, double n2)
{
    return n1 * n2;
}//End TheProd

