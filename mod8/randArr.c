/*
 * =====================================================================================
 *
 *       Filename:  randArr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:16:38 AM
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
#include "randArr.h"

// Function Definitions

//Func: InitArray
//initialize array
void InitArray(int superArr[])
{
    //Set seed
    srand((int)time(0));

    for(int i =0; i < ASIZE; i++)
    {
        superArr[i] = rand() % 100;
    }//End for
    return;
}//End InitArray

//Func: ShowRandArray
//Displays array
void ShowRandArray(int superArr[])
{
    for(int i = 0; i < ASIZE; i++)
    {
        printf("[%02d]\n", superArr[i]);
    }//End for
    return;
}//End ShowRandArray
