/*
 * =====================================================================================
 *
 *       Filename:  mymalloc.c
 *
 *    Description:  Dynamically allocated memory
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:41:15 AM
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
    int num;
    int* sa = NULL;
    printf("How many numbers do you need?\n");
    scanf("%d", &num);

    printf("int is [%lu] bytes\n", sizeof(int));//%ld long int, %lu for long unsigned
    printf("int array of [%d] is [%lu] bytes\n", num, num * sizeof(int));
    
    //malloc takes num of bytes malloc(<#bytes>)
    //Cast address to pointer type(*<type>)
    sa = (int*)malloc(num * sizeof(int));
    for(int i = 0; i < num; i++)
    {
        sa[i] = i + 10;
    }//End for

    //Display the array
    for(int i = 0; i < num; i++)
    {
        printf("%d element is [%d]\n", i, sa[i]);
    }//End for

    free(sa);
    return 0;
}
// Function Definitions


