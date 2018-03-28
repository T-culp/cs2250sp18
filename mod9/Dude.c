/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:19:00 AM
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

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  Display age, weight
 * =====================================================================================
 */
void ShowInfo(int age, double weight)
{
  printf("Your age is [%d]\n", age);
  printf("Your weight is [%.2lf]\n", weight);
}//End ShowInfo

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoStruct
 *  Description:  Displays SuperDude information
 * =====================================================================================
 */
void ShowInfoStruct(const SuperDude* sd)
{
  printf("Your age is [%d]\n", sd->age);
  printf("Your weight is [%.2lf]\n", sd->weight);
  printf("Your sex is [%c]\n", sd->sex);
  return;
}//End ShowInfoStruct


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InitInfoStruct
 *  Description:  Initializes values of SuperDude struct
 * =====================================================================================
 */
void InitInfoStruct(SuperDude* sd)
{
    //When using an address of a structure, use the -> operator
    //to access the struct members instead of the . operator
    //which is used when you have the structure instead of the address
    sd->age = -99; 
    sd->weight = -99.0;
    (*sd).sex = 'N'; //alternative method
    return;
}//End InitInfoStruct

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CopyInfoStruct
 *  Description:  Make a copy of SuperDude structure & return it
 * =====================================================================================
 */
SuperDude CopyInfoStruct(const SuperDude* sd)
{
    SuperDude tmp;
    //tmp is a structure, sd is an address of  structure
    tmp.age = sd->age;
    tmp.weight = sd->weight;
    tmp.sex =sd->sex;
    return tmp;
}//End CopyInfoStruct

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdateInfoStruct
 *  Description:  Update values(int, doubles) from struct by some weight
 * =====================================================================================
 */
void UpdateInfoStruct(SuperDude* sd, int myweight)
{
    //
    sd->age *= myweight;
    sd->weight = sd->weight * myweight;

    return;
}//End UpdateInfoStruct


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoAllStruct
 *  Description:  Display arrayof structures
 * =====================================================================================
 */
void ShowInfoAllStruct(const SuperDude sd[])
{
    for(int i = 0; i < ASIZE;i++)
    {
       printf("[%d] Member info [%d] [%lf] [%c]\n",
               i,  sd[i].age, sd[i].weight, sd[i].sex);
    }//End for
    return;
}//End ShowInfoAllStruct
