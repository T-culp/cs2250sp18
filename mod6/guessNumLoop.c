/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guess Game with a loop.
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
const int GUESS = 5; //# of guesses
const int NUM = 20;
// Function Prototypes

// Main Function
int main()
{
    //(1).  Create a random number between 0 - 20
    //(2).  Ask the user to enter a guess number 0 - 20
    //(3).  If the number is less than the random number
    //      print go higher.  ELSE print go lower
    //(4).  You have 5 chances to guess the correct number
    //(5).  Display all the choices you entered

    int input[GUESS];
    //  Task: when done ask question.
    //  Do you want to play again:
    //     'y' for yes
    //     IF YES, repeat
    //     'n' for no
    //     ELSE quit, print"bye bye"
    //  Anything else, ask question again.

    char answer = 'y';
    while(answer!= 'n')
    {
        switch (answer)
        {
            case 'y':  

            case 'n':
                printf("bye bye\n");
                break;
            default: 
                printf("Do you want to play again?");
                printf("\t 'y' for yes\t 'n' for no\n");
                scanf(" %c", &answer);


                srand((int)time(0));
                int random = rand() % NUM;
                int i = 0;
                //Ask the user to input a number 0 - 20
                while(i < GUESS) 
                {
                    printf("Enter a guess number from 0 - 20.\n");
                    scanf("%d", &input[i]);

                    //Verify user guess is within proper range
                    if(input[i] > NUM || input[i] < 0)
                    {
                        printf("Please enter a number between 0 - 20\n");
                        continue;
                    } //End if

                    //Determine if user's guess is higher or lower
                    if(input[i] < random)
                    {
                        printf("Go higher.\n");
                    } //End if
                    else if(input[i] == random)
                    {
                        printf("You got it! [%d]\n", random);
                        break; //exit loop
                    } //End else if
                    else
                    {
                        printf("Go lower\n");
                    }// End else

                    i++;

                } //End While

                //Display user's guesses
                printf("You entered: \n");

                for(int i = 0; i < GUESS; i++)
                {
                    printf("   [%d] ", input[i]);
                }//End for

                printf("Do you want to play again?\n");
                printf("\t 'y' for yes\t 'n' for no\n");
                scanf(" %c", &answer);
                //remember to take the enter key into consideration
                i = 0;// reset values

        }//End switch


    }//End while(answer)

    printf("\nThank you for playing\n");


    return 0;
}
// Function Definitions


