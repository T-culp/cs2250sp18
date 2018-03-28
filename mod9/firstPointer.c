/*
 * =====================================================================================
 *
 *       Filename:  firstPointer.c
 *
 *    Description:  My first pointers
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:55:44 AM
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
    int i = 5;
    //A pointer to an integer
    int* pi = NULL; //p for pointer

    printf("Value of  i[%14d] \taddress[%p]\n", i, &i);
    printf("Value of pi[%14p] \taddress[%p]\n", pi, &pi);

    //Assign value pointer
    pi = &i;
    printf("Value of pi[%14p] \t  value[%d]\n", pi, *pi);

    //Modify int through pointer
    *pi = 6;
    printf("Value of  i[%14d] \taddress[%p]\n", i, &i);
    printf("Value of pi[%14p] \t  value[%d]\n", pi, *pi);
    return 0;
}
// Function Definitions


