/*
 * =====================================================================================
 *
 *       Filename:  superlib.h
 *
 *    Description:  It is super duper functions for strings
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:34:16 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef __SUPERLIB_H__
#define __SUPERLIB_H__
// Constants
// const inside header files, add the key word static before definition
static const int INPUT_STR_SIZE = 50;

// Function Prototypes
void StrSpaceChange(char modString[], char sep);

//task 1: function takes a string, returns num of digits
int StrCountDigits(char modString[]);

#endif //__SUPERLIB_H__
