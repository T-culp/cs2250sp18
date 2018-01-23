/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  Lear about Float & Int division.
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:01 AM
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
    int age = 25;
    int grade = 303;
    double result;

    //we need to cast the int to doubles
    //by adding the type in () in front of the int
    //NOTE: you only need one on the bottom, but it doesn't hurt to have both
    //casted.
    result = (double)grade/(double)age;

    printf("result = %lf\n", result);

    //print a double as an integer
    printf("result = %d\n", (int)result);
    return 0;
}
// Function Definitions


