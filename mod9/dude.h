/*
 * =====================================================================================
 *
 *       Filename:  dude.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:18:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__

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

// Constants
//#define ASIZE 3 //Same as static const int ASIZE = 3;
static const int ASIZE = 3;
// Function Prototypes
void ShowInfo(int age, double weight);
//Pass a constant address instead of the value(for performance)
//it is read only, cannot modify the values
void ShowInfoStruct(const SuperDude* sd);
void InitInfoStruct(SuperDude* sd); //Address of SuperDude type
SuperDude CopyInfoStruct(const SuperDude* sd);
void UpdateInfoStruct(SuperDude* sd, int myweight);
void ShowInfoAllStruct(const SuperDude sd[]);

#endif /* ----- #ifndef DUDE__INC__ ----- */

