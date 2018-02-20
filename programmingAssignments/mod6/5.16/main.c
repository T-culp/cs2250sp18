/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  People's weights
 *
 *        Version:  1.0
 *        Created:  02/19/2018 01:42:31 PM
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
const int NUM = 5;
// Function Prototypes

// Main Function
int main()
{
    //Declare Variables
    double weight[NUM];
    int w = 1;
    double totalWeight = 0;
    double averageWeight = 0;
    double maximum = 0;

    //Determine 5 people's weights
    for(int i = 0; (double)i < NUM; i++)
    {
        printf("Enter weight %d:\n", w);
        scanf("%lf", &weight[i]);
        w = w + 1;
        totalWeight += weight[i];

            //Determine the maximum weight
            for(int c = 0; c < NUM; c++)
            {
                if(weight[c] > maximum)
                {
                    maximum = weight[c];
                }//End if

            }//End for(c)

    }//End for(i)

    //Calculate the average weight
    averageWeight = totalWeight / NUM;
    
    //Display information to user
    printf("You entered: ");
    for(int d = 0; d < NUM; d++)
    {
        printf("%lf ", weight[d]);
    }//End for
    printf("\n");
    printf("\n");
    printf("Total weight: %lf\n", totalWeight);
    printf("Average weight: %lf\n", averageWeight);
    printf("Max weight: %lf\n", maximum);


    return 0;
}
// Function Definitions


