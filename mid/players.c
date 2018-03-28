/*
 * =====================================================================================
 *
 *       Filename:  players.c
 *
 *    Description:  Soccer player roster
 *
 *        Version:  1.0
 *        Created:  02/27/2018 07:57:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>

// Constants
const int NUM_PLAYERS = 5;

// Function Prototypes
void InitPlayers(int jerseyNums[], int ratingNums[]);
void InitRandPlayers(int jerseyNums[], int ratingNums[]); //random player
void ShowPlayers(int jerseyNums[], int ratingNums[]);
char ShowMenu(void);
void UpdatePlayers(int jerseyNums[], int ratingNums[]);
void AboveRatings(int jerseyNums[], int ratingNums[]);
void ReplacePlayers(int jerseyNums[], int ratingNums[]);
// Main Function
int main(void) 
{
    int jerseyNums[NUM_PLAYERS];
    int ratingNums[NUM_PLAYERS];
    char menuOp = '-';

    //(1). Initialize players
    InitPlayers(jerseyNums, ratingNums);

    //(2). Display roster
    ShowPlayers(jerseyNums, ratingNums);

    // Menu
    do {
        //(3). Show Menu
        menuOp = ShowMenu();

        //Update
        if (menuOp == 'u') 
        {
            //(4). Update players
            UpdatePlayers(jerseyNums, ratingNums);
        }

        // Output players above a user defined rating
        else if (menuOp == 'a') 
        {
            //(5).Display players above a rating
            AboveRatings(jerseyNums, ratingNums);
        }

        // Replace
        else if (menuOp == 'r') 
        {
            //(6). Replace a player
            ReplacePlayers(jerseyNums, ratingNums);
        }

        // Output roster
        else if (menuOp == 'o') 
        {
            //(7.) Output roster
            ShowPlayers(jerseyNums, ratingNums);
        }
    } while(menuOp != 'q');

    return 0;
}

// Function Definitions

//Func: InitPlayers
//Initializes the players jerseynums & ratings
void InitPlayers(int jerseyNums[], int ratingNums[])
{
    // Get user defined jersey numbers and ratings
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Enter player %d's jersey number:\n", (i + 1));
        scanf("%d", &(jerseyNums[i]));

        printf("Enter player %d's rating:\n", (i + 1));
        scanf("%d", &(ratingNums[i]));
        printf("\n");
    }
    return;
}//End InitPlayers

//Func: ShowPlayers
//Prints the roster
void ShowPlayers(int jerseyNums[], int ratingNums[])
{
    // Print roster
    printf("ROSTER\n");
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
    }
    return;
}//End ShowPlayers

//Func: ShowMenu
//Display menu
char ShowMenu(void)
{
    char menuOp;
    printf("\nMENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");

    printf("\nChoose an option:\n");
    scanf(" %c", &menuOp);
    return menuOp;
}//End ShowMenu

//Func: UpdatePlayers
//Updates the player rating
void UpdatePlayers(int jerseyNums[], int ratingNums[])
{
    int playerJersy = 0;
    int playerRating = 0;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);

    printf("Enter a new rating for player:\n");
    scanf("%d", &playerRating);

    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (jerseyNums[i] == playerJersy) 
        {
            ratingNums[i] = playerRating;
        }
    }
    return;
}//End UpdatePlayers

//Func: AboveRatings
//Display players above a rating
void AboveRatings(int jerseyNums[], int ratingNums[])
{
    int playerRating = 0;
    printf("Enter a rating:\n");
    scanf("%d", &playerRating);

    printf("\nABOVE %d\n", playerRating);
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (ratingNums[i] > playerRating) 
        {
            printf("Player %d -- Jersey number: %d, Rating: %d\n",
                    (i + 1), jerseyNums[i], ratingNums[i]);
        }
    }
    return;
}//End AboveRatings

//Func: ReplacePlayers
//Replaces players
void ReplacePlayers(int jerseyNums[], int ratingNums[])
{
    int playerJersy = 0;
    int playerRating = 0;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);

    int j = -1;  // Default index for player replacement
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (playerJersy == jerseyNums[i]) 
        {
            j = i;
        }
    }

    // Replace player only if the player is in the roster
    if (j != -1) 
    {
        printf("Enter a new jersey number:\n");
        scanf("%d", &playerJersy);

        printf("Enter a rating for the new player:\n");
        scanf("%d", &playerRating);

        jerseyNums[j] = playerJersy;
        ratingNums[j] = playerRating;
    }
    return;
}//End ReplacePlayers

//Func:InitRandPlayers
//initializes players to random numbers between 0-100
void InitRandPlayers(int jerseyNums[], int ratingNums[])
{
    //Set seed
    srand((int)time(0)); //set random seed
    
    // Get user defined jersey numbers and ratings
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        jerseyNums[i] = rand() % 10;
        ratingNums[i] = rand() % 100;
    }
    return;
}//End InitRandPlayers
