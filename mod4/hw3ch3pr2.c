/*
 * =====================================================================================
 *
 *       Filename:  ch3hw_p2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:03:11 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include<string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    //Declare variables
    char fService[30];
    char sService[30];
    int costOne;
    int costTwo;
    int total;

    //Display menu to customer
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n Enter - for no service\n");
     
    //Receive customer service request
    printf("Select first service:\n");
    scanf("%[^\n]", fService);
    printf("Select second service:\n");
    scanf("%[^\n]", sService);

    //Service 1
    if (strcmp(fService, "Oil change") == 0)
        { 
            printf("Service 1: %s, $35\n", fService);
            costOne = 35;
        } 
    else if  (strcmp(fService, "Tire rotation") == 0)
        { 
            printf("Service 1: %s, $19\n", fService);
            costOne = 19;
        } 
    else if  (strcmp(fService, "Car wash") == 0)
        { 
            printf("Service 1: %s, $7\n", fService);
            costOne = 7;
        } 
    else if  (strcmp(fService, "Car wax") == 0)
        { 
            printf("Service 1: %s, $12\n", fService);
            costOne = 12;
        }    
    else if  (strcmp(fService, "-") == 0)
        { 
            printf("Service 1: %s, $0\n", fService);
            costOne = 0;
        } 
    else
        { 
            printf("Error: Requested service not available");
            costOne = 0;
        }

    //Service 2
  if (strcmp(sService, "Oil change") == 0)
        { 
            printf("Service 1: %s, $35\n", sService);
            costTwo = 35;
        } 
    else if  (strcmp(fService, "Tire rotation") == 0)
        { 
            printf("Service 1: %s, $19\n", sService);
            costTwo = 19;
        } 
    else if  (strcmp(fService, "Car wash") == 0)
        { 
            printf("Service 1: %s, $7\n", sService);
            costTwo = 7;
        } 
    else if  (strcmp(fService, "Car wax") == 0)
        { 
            printf("Service 1: %s, $12\n", sService);
            costTwo = 12;
        }    
    else if  (strcmp(fService, "-") == 0)
        { 
            printf("Service 1: %s, $0\n", sService);
            costTwo = 0;
        } 
    else
        { 
            printf("Error: Requested service not available");
            costTwo = 0;
        }
    
    //Calculate total & display to customer
    total = costOne + costTwo;
    printf("Total: $%d\n", total);


    return 0;
}
// Function Definitions


