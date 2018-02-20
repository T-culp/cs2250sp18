/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description: Learn to use functions 
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:13 AM
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
void Hello(void);
void HelloMany(int num);
int HelloNum(void);
int HelloNumMany(int num);
int MySquare(int num);

// Main Function
int main()
{
    Hello();
    Hello();
    HelloMany(3);
    int n = HelloNum();
    printf("I got %d from HelloNum()\n", n);
    
    n = HelloNumMany(5);
    printf("I got %d from HelloNumMany()\n", n);

    printf("The square of 9 is %d\n", MySquare(9));
    return 0;
}

// Function Definitions

//Func: Hello
//Prints message
void Hello(void)
{
    printf("Hello Ogden world\n");
    return;

}//End Hello

//Func: HelloMany
//Prints message num times
void HelloMany(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("Weber State Great, Great, Great!\n");

    }//End for

    return;

}//End HelloMany

//Func: HelloNum
//Returns number 99
int HelloNum(void)
{
    int num = 99;
    return num;
}//End HelloNum

//Func: HelloNumMany
//Takes an Integer, returns sum of Hello print statements
int HelloNumMany(int num)
{
    int count = 0;
    for(int i = 0; i < num; i++)
    {
        printf("%d) HelloNumMany()\n", i + 1);
        count++;
    }//End for

    return count;

}//End HelloNumMany

//Func:MySquare
//returns n squared
int MySquare(int n)
{
    return n * n;
}//End MySquare
