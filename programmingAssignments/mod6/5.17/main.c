/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Soccer Team roster
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:40:51 AM
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
const int ATTRIBUTE = 2;
// Function Prototypes

// Main Function
int main()
{
    //Initialize variables
    int jersey[NUM];
    int rating[NUM];
    char menu = 'c';
    int jerNum;
    int rate;

    //Get roster information from user
    int p = 1;//Player number
    for(int i= 0; i < NUM; i++)
    { 
        printf("Enter player %d's jersey number:\n", p);
        scanf("%d", &jersey[i]);
        printf("Enter player %d's rating:\n", p);
        scanf("%d", &rating[i]);
        printf("\n");
        p = p + 1;
    }//End for

    //Display roster to user
    printf("ROSTER\n");
    printf("Player 1 -- Jersey number: %d, Rating: %d\n", jersey[0], rating[0]);
    printf("Player 2 -- Jersey number: %d, Rating: %d\n", jersey[1], rating[1]);
    printf("Player 3 -- Jersey number: %d, Rating: %d\n", jersey[2], rating[2]);
    printf("Player 4 -- Jersey number: %d, Rating: %d\n", jersey[3], rating[3]);
    printf("Player 5 -- Jersey number: %d, Rating: %d\n", jersey[4], rating[4]);
    printf("\n");

    //Nested menu functions 
    while(menu != 'q')
    {
        //Display Menu
        printf("MENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n"); 
        printf("\n");
        printf("Choose an option:");
        scanf(" %c", &menu);
        printf("\n");

        //Output Roster
        if(menu == 'o')
        {
            printf("ROSTER\n");
            printf("Player 1 -- Jersey number: %d, Rating: %d\n", jersey[0], rating[0]);
            printf("Player 2 -- Jersey number: %d, Rating: %d\n", jersey[1], rating[1]);
            printf("Player 3 -- Jersey number: %d, Rating: %d\n", jersey[2], rating[2]);
            printf("Player 4 -- Jersey number: %d, Rating: %d\n", jersey[3], rating[3]);
            printf("Player 5 -- Jersey number: %d, Rating: %d\n", jersey[4], rating[4]);
            printf("\n");
        }//End 'o' menu

        //Update Roster
        else if(menu == 'u')
        {
            jerNum = 0;
            printf("Enter a Jersey number:\n");
            scanf("%d", &jerNum);
            for(int i = 0; i < NUM; i++)
            {
                if(jersey[i] == jerNum)
                {
                    printf("Enter a new rating for player:\n");
                    scanf("%d", &rating[i]);
                }//End if
            }//End for
            printf("\n");
        }//End 'u' menu

        //Output players above a rating
        else if(menu == 'a')
        {
            p = 1;//Player number
            rate = 0;
            printf("Enter a rating:\n");
            scanf("%d", &rate);
            printf("\n");
            printf("ABOVE %d\n", rate);
            for(int i = 0; i < NUM; i++)
            {
                if(rating[i] > rate)
                {
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", p, jersey[i], rating[i]);
                }//End if
                p = p + 1;
            }//End for
            printf("\n");
        }//End 'a' menu

        //Replace players
        else if(menu == 'r')
        {
            jerNum = 0;
            int newJerNum = 0;
            rate = 0;
            printf("Enter a jersey number:\n");
            scanf("%d", &jerNum);
            printf("Enter a new jersey number:\n");
            scanf("%d", &newJerNum);
            printf("Enter a rating for the new player:\n");
            scanf("%d", &rate);
            for(int i = 0; i < NUM; i++)
            {
                if(jerNum == jersey[i])
                {
                    jersey[i] = newJerNum;
                    rating[i] = rate;
                }//End if
            }//End for
            printf("\n");
        }//End 'r' menu

    }//End menu while
    return 0;
}
// Function Definitions


