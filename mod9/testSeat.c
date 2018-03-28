/*
 * =====================================================================================
 *
 *       Filename:  testSeat.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:29:02 AM
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
#include <stdbool.h>
#include "seat.h"
// Constants

// Function Prototypes

// Main Function
int main()
{ 
    char userKey = '-';
    int  seatNum = 0;
    Seat allSeats[NUM_SEATS];
    Seat currSeat;

    SeatsMakeEmpty(allSeats, NUM_SEATS);

    while (userKey != 'q')
    {
        printf("Enter command (p/r/d/q): ");
        scanf(" %c", &userKey);

        if (userKey == 'p')
        { // Print seats
            SeatsPrint(allSeats, NUM_SEATS);
            printf("\n");
        }
        else if (userKey == 'r') 
        { // Reserve seat
            printf("Enter seat num: ");
            scanf("%d", &seatNum);

            if (!SeatIsEmpty(allSeats[seatNum])) 
            {
                printf("Seat not empty.\n\n");
            }
            else 
            {
                printf("Enter first name: ");
                scanf("%s", currSeat.firstName);
                printf("Enter last name: ");
                scanf("%s", currSeat.lastName);
                printf("Enter amount paid: ");
                scanf("%d", &currSeat.amountPaid);

                allSeats[seatNum] = currSeat;
                printf("Completed.\n\n");
            }
        }//End else if
        else if(userKey == 'd')
        {
            //delete reservation
            printf("Deleting.\n");
            //TODO create a delete function
        }
        else if (userKey == 'q') 
            { // Quit
                printf("Quitting.\n");
            }
            else {
                printf("Invalid command.\n\n");
            }
        }//End while

        return 0;
}





