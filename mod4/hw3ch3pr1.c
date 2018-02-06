/*
 * =====================================================================================
 *
 *       Filename:  hw3ch3pr1.c
 *
 *    Description:  Programming Assignment M4 Problem 1
 *
 *        Version:  1.0
 *        Created:  02/04/2018 12:59:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{

    //Declare variables
    int oil = 35;
    int tire = 19;
    int wash = 7;
    char service1 [15];
    char service2 [15];



    //Display options to user
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n");
    //Prompt user for desired service
    printf("Enter desired auto service:\n");
    scanf("%s ", service1);


    //Determine what service user selected, display relevant info.
    if (strcmp(service1, "Oil") == 0) 
    {
        scanf("%s", service2);
        if (strcmp(service2, "change") == 0)
                {
                printf("You entered: %s %s.\n", service1, service2);
                printf("Cost of oil change: $%d\n", oil);
                }
                else
                {
                printf("You entered: %s\n", service1);
                printf("Requested service is not recognized\n");
                }//End nested if/else

     }//End if

    else if (strcmp(service1, "Tire") == 0) 
    {  
           
            scanf("%s", service2);
            if (strcmp(service2, "rotation") == 0)
                    {
                    printf("You entered: %s %s.\n", service1, service2);
                    printf("Cost of tire rotation: $%d\n", tire);
                    }
            else
                    {
                    printf("You entered: %s\n", service1);
                    printf("Requested service is not recognized\n");
                    }//End nested if/else

     }//End else if

    else if (strcmp(service1, "Car") == 0) 
    {  
    
            scanf("%s", service2);
            if (strcmp(service2, "wash") == 0)
                    {
                    printf("You entered: %s %s.\n", service1, service2);
                    printf("Cost of car wash: $%d\n", wash);
                    }
            else
                    {
                    printf("You entered: %s\n", service1);
                    printf("Requested service is not recognized\n");
                    }//End nested if/else

     }//End else if

    else
        {
            scanf("%s", service2);
            printf("You entered: %s %s\n", service1, service2);
            printf("Requested service is not recognized\n");
        }

    return 0;

}
// Function Definitions


