/*
 * =====================================================================================
 *
 *       Filename:  trevor_culp_exam1_task2.c
 *
 *    Description:  Second choice: Task 2
 *
 *        Version:  1.0
 *        Created:  02/27/2018 08:42:31 AM
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
int Grades();
// Function Prototypes
// Main Function
int main()
{
    int f = 0;
    Grades();

    //display num of failures
    printf("Number of failures = %d\n", f);
    return 0;
}
// Function Definitions

//Func:Grades
//Receives grades from user and displays the average
//grade & number of failures
int Grades()
{
    //initialize num of grades, average, failure
    int g = 0;
    int avg = 0;
    int f = 0;

    //receive num grades from user
    printf("How many grades will you be entering?\n");
    scanf("%d", &g);

    //initialize array
    int input[g];
    
    //get grades from user
    for(int i= 0; i < g; i++)
    {
        printf("Enter grade #%d:\n", i+1);
        scanf("%d", &(input[i]));

        avg = avg + input[i];
        if(input[i] < 65)
        {
           f = f + 1;
        }//End if

    }//End for

    avg = avg / g;
    printf("Grade average = %.2f\n", (float)avg);

    return f;
}//End Grades
