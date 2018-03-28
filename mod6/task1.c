/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description: Create a 10 digit array w/ random numbers btwn 0-100 
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:06:16 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
const int RANDOM = 10;
// Function Prototypes

// Main Function
int main()
{
    int ar[RANDOM];
    //Set random seed
    srand((int)time(0));

    //Initialization loop
    for(int i = 0; i < RANDOM; i++)
    {
        ar[i] = rand() % 100;
    }

    //Display loop
    for(int i = 0; i < RANDOM; i++)
    {
        printf("[%d]. is [%d]\n", i + 1, ar[i]);
    }

    return 0;
}
// Function Definitions


