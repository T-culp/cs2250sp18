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
    char fService1[30];
    char fService2[30];
    char sService1[20];
    char sService2[20];
    int costOne;
    int costTwo;
    int total;

    //Display menu to customer
    printf("Davy's auto shop services\n Oil change -- $35\n");
    printf("Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    printf("Enter - for no service\n");
     
    //Receive customer service request
    printf("Select first service:\n");
    scanf("%s", fService1);
    
    //Service 1
    if (strcmp(fService1, "-") == 0)
    {
       
        printf("Service 1: %s, $0\n", fService1);
        costOne = 0;
    }//End if
    else if (strcmp(fService1, "Oil") == 0)
    { 
            scanf("%s", fService2);
            if (strcmp(fService2, "change") == 0)
            {
            printf("Service 1: %s %s, $35\n", fService1, fService2);
            costOne = 35;
            }
            else
            { 
            printf("Error: Requested service not available\n");
            costOne = 0;
            }//End nested else/if

     }//End else if

     else if (strcmp(fService1, "Tire") == 0)
    { 
            scanf("%s", fService2);
            if (strcmp(fService2, "rotation") == 0)
            {
            printf("Service 1: %s %s, $19\n", fService1, fService2);
            costOne = 19;
            }
            else
            { 
            printf("Error: Requested service not available\n");
            costOne = 0;
            }//End nested else/if
     }//End else if


   else if (strcmp(fService1, "Car") == 0)
     { 
            scanf("%s", fService2);
            if (strcmp(fService2, "wash") == 0)
            {
            printf("Service 1: %s %s, $7\n", fService1, fService2);
            costOne = 7;
            }
            else
            { 
            printf("Error: Requested service not available\n");
            costOne = 0;
            }//End nested else/if
    }//End else if

    else if (strcmp(fService1, "Car") == 0)
    { 
            scanf("%s", fService2);
            if (strcmp(fService2, "wax") == 0)
            {
            printf("Service 1: %s %s, $12\n", fService1, fService2);
            costOne = 12;
            }
            else
            { 
            printf("Error: Requested service not available\n");
            costOne = 0;
            }//End nested else/if 

     }//End else if

    else
    {
           printf("Error: Requested service not available\n");
            costOne = 0;

    }//End else
    
    //Service 2
    printf("Select second service:\n");
    scanf("%s", sService1);

  if (strcmp(sService1, "-") == 0)
    {
       
        printf("Service 1: %s, $0\n", sService1);
        costOne = 0;
    }//End if

        else if (strcmp(sService1, "Oil") == 0)
        { 
            scanf("%s", sService2);
            if (strcmp(sService2, "change") == 0)
            {
            printf("Service 1: %s %s, $35\n", sService1, sService2);
            costTwo = 35;
            }
            else
            { 
            printf("Error: Requested service not available\n");
            costTwo = 0;
            }//End nested else/if

        }//End else if

        else if (strcmp(sService1, "Tire") == 0)
        { 
            scanf("%s", sService2);
            if (strcmp(sService2, "rotation") == 0)
            {
            printf("Service 1: %s %s, $19\n", sService1, sService2);
            costTwo = 19;
            }
            else
            { 
            printf("Error: Requested service not available\n");
            costTwo = 0;
            }//End nested else/if
        }//End else if


   else if (strcmp(sService1, "Car") == 0)
        { 
            scanf("%s", sService2);
            if (strcmp(sService2, "wash") == 0)
            {
            printf("Service 1: %s %s, $7\n", sService1, sService2);
            costTwo = 7;
            }
            else
            { 
            printf("Error: Requested service not available\n");
            costTwo = 0;
            }//End nested else/if
        }//End else if

    else if (strcmp(sService1, "Car") == 0)
        { 
            scanf("%s", sService2);
            if (strcmp(sService2, "wax") == 0)
            {
            printf("Service 1: %s %s, $12\n", sService1, sService2);
            costTwo = 12;
            }
            else
            { 
            printf("Error: Requested service not available\n");
            costTwo = 0;
            }//end nested if/else
        }//end else if
  else
    {
           printf("Error: Requested service not available\n");
           costTwo = 0;

    }//End else
  
      
    //Calculate total & display to customer
    total = costOne + costTwo;
    printf("Total: $%d\n", total);


    return 0;
}
// Function Definitions


