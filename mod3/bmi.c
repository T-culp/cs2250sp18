/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description: Calculate teBody Mass Index 
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:28:10 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi -lm
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    //  1)Capture weight in (Kg)
    //  2)Capture the Height in (m) 
    //  3)Calculate your BMI = Weight / (pow(height, 2);
    //  4) Display BMI

    double weight = 0;
    double height = 0;
    double bmi;
    bmi = weight / pow(height, 2);
    printf("Please enter your weight in Kg:\n");
    scanf("%lf", &weight);
    printf("Please enter your height in m:\n");
    scanf("%lf", &height);

    printf("Your BMI is: %lf\n", bmi);

    return 0; 
}
// Function Definitions


