/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/10/2018 06:47:15 PM
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
    //Declare variables
    int baseHeight = 0;
    int baseWidth = 0;
    int headWidth = 0;

    //Get user input
    printf("Enter arrow base height:\n");
    scanf("%d", &baseHeight);
    printf("Enter arrow base width:\n");
    scanf("%d", &baseWidth);
    printf("Enter arrow head width:\n");
    scanf("%d", &headWidth);
    //Test input
    // printf("[%d]height, [%d]width, [%d]head width\n", baseHeight, baseWidth, headWidth);
  while(1)
  {
      if(headWidth > baseWidth)
      {
          printf("\n");
          for(int i = 1; i <= baseHeight; i++)
          {

              for(int c = 1; c <= baseWidth; c++)
              {
                  printf("*");

              }//End nested for
              printf("\n");

          }//End for

          for (int i = headWidth; i >= 1; i--)
          {
              for(int c = 1; c <= i; c++)
              {
                  printf("*"); 
              }//End nested for

              printf("\n");
          }//End for

          break;
      }//end if

      else 
      {
          printf("Enter arrow head width:\n");
          scanf("%d", &headWidth);
          
      }//End else

  }//End while
    return 0;
}
// Function Definitions


