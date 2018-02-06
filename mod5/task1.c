/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Multiplication table,1 -10 w/ while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:37:36 AM
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

// Function Prototypes

// Main Function
int main()
{
    int num = 1;
    int main1 = 1;
    //while (num <= 10)
    {
        //printf("%d \n", num);
      //  num ++;

    }

    //num = 2;

   // while (num <= 20)
    {
     //   printf("%d \n", num);
       // num= num + 2;
    }


    while(main1 <= 10)
    {
        while(num <= 10)
        {
            printf("%d ", num);
            num = num + main1;
        }

    main1 = main1 + 1;

    printf("\n");
    }
    return 0;
}
// Function Definitions


