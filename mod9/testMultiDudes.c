/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  Test multiple structures in functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "dude.h"
// Constants

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1, s2;
    SuperDude ss[ASIZE]; //array of structs
    //The & operator gives you the address
    InitInfoStruct(&s1);  //Init structure info
    ShowInfoStruct(&s1);  //Display struct info

    s2 = CopyInfoStruct(&s1);
    ShowInfoStruct(&s2);
    //Initialize your array of structs
    printf("Now array info:\n");
    for(int i = 0; i < ASIZE; i++)
    {
    InitInfoStruct(&ss[i]);
    UpdateInfoStruct(&ss[i], i * 10);
    //ShowInfoStruct(&ss[i]);
    }
    //Display all members of the array using one function
    ShowInfoAllStruct(ss);
    return 0;
}
// Function Definitions


