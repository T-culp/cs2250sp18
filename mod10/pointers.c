/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  Review of pointers
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:43:16 AM
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

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i = 7;

   int* pi = NULL; //int *pi is the same
   // pi = &i;
   // printf("i[%d] value that points to pi[%d]\n", i, *pi);

    printf("enter a number of elements: \n");
    scanf("%d", &i);
    //Define an array with input
    //Use malloc: takes one argument, number of bytes
    //to get number of bytes of a type: use sizeof(type)
    //type* pointer = (type*)malloc(sizeof(type))
    // .. when you are done
    // free(memory or address, pointer)
    
    // pointer to an array of integers
    pi = (int*)malloc(i*sizeof(int)); //Needs to be dynamically allocated
    int ar[i];
    for (int j =0; j < i; j++)
    {
        //printf("ar[%d] = %d\n", j, ar[j]);
    }//End for

    free(pi);
    return 0;
}
// Function Definitions


