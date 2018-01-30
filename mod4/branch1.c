/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  Basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:46 AM
 *       Revision:  none
 *       Compiler:  gcc
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
   int age = 0;
   int temp = 0;
   //request user input
   printf("How old are you?\n");
   scanf("%d", &age);
   printf("You are %d years old.\n", age);
   //do not add a semicolon at the end of if statement
   if (age >= 18) //if true,go inside the block
   {
    printf("You can vote.\n");
   }
   else  // do not use (), Default case of FALSE case.
   {
       temp = 18 - age;
    printf("You have %d years to vote.\n", temp);
   }
   if (age >= 21)
   {
    printf("You can buy alcohol.\n");
   }
   else
   {
    temp = 21 - age;
    printf("You have %d years to buy alcohol.\n", temp);
   }

   if (age >= 65)
   {
    printf("You can retire.\n");
   }
   else
   {
    temp = 65 - age;
    printf("You have %d years to retire.\n", temp);
   }
  if (age == 35)
   {
    printf("You are at the special age %d.\n", age);
   }
  //else
  {
  //    temp = abs(35 - age);
  //printf("You are %d years from 35", temp);
  }
   printf("Adios amigo.\n");
           return 0;
}
// Function Definitions


