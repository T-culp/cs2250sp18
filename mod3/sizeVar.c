/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description: Check variable size in bytes 
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:00:12 AM
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
    int num = 1;
    unsigned int unum = 1; //doubles capacity for positive numbers
    num = num * 10000;
    unum = unum * 10000;
    //sizeof() returns the size of variable in bytes
    printf("The size of int is: %ld\n", sizeof(num));
    printf("The size of uint is: %ld\n", sizeof(unum));
    printf("Num = [%d] unum = [%u]\n", num, unum);
   
    num *= 10000; //compound operator
    printf("Num = [%d]\n", num);
    unum *= 10000; //compound operator
    printf("unum = [%u]\n", unum);

    num *= 10000; //compound operator
    printf("Num = [%d]\n", num);
    unum *= 10000; //compound operator
    printf("unum = [%u]\n", unum);

    //what is the max range of an int?
    //2^32 ~ 4,294,000,000 = i combinations
    //Range: [(-i/2) to ((i/2) -1)]

    return 0;
}
// Function Definitions


