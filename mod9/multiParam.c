/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  Pass multiple parameters to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:34 AM
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
struct Dude
{
    int age;
    double weight;
}; //Do not forget the semicolon

typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; //Do not forget the semicolon

// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(SuperDude sd);

// Main Function
int main()
{
    int a = 17;
    double w = 172.5;
    ShowInfo(a, w);

    struct Dude man1;
    man1.age = 32;  //Use dot operator to access members of the structure
    man1.weight = 186.9;

    ShowInfo(man1.age, man1.weight);
    
    SuperDude man2;
    man2.age = 22;  //Use dot operator to access members of the structure
    man2.weight = 286.9;
    man2.sex = 'M';
    ShowInfoStruct(man2);

    return 0;
}
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
void ShowInfoStruct(SuperDude sd)
{
  printf("Your age is [%d]\n", sd.age);
  printf("Your weight is [%.2lf]\n", sd.weight);
  printf("Your sex is [%c]\n", sd.sex);
  return;
}//End ShowInfoStruct
