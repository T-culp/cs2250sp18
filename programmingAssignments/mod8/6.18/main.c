/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Authoring Assistant
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:40:52 AM
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
#include <ctype.h>
#include <stdlib.h>

// Constants
const int ASIZE = 256;

// Function Prototypes
char PrintMenu(char Arr[]);
int GetNumOfNonWSCharacters(const char wsStr[]);
int GetNumOfWords(const char numStr[]);
void FixCapitalization(char capStr[]);
void ReplaceExclamation(char exStr[]);
void ShortenSpace(char spStr[]);

// Main Function
int main()
{
    //Initialize array
    char userStr[ASIZE];
    printf("Enter a sample text:\n");
    fgets(userStr, ASIZE, stdin);
    printf("\n");
    printf("You entered: %s\n", userStr);

    //call PrintMenu
    PrintMenu(userStr);

    return 0;
}
// Function Definitions

//Func: PrintMenu()
//Displays menu to user
char PrintMenu(char Arr[])
{
    //Initialize variables
    char menu = 'a'; //temp menu holder
    int n = 0;//temp number of non-ws chars holder
    int w = 0;//temp number of words holder


    //Display menu
    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n");
    printf("\n");
    printf("Choose an option:\n");
    scanf("%c", &menu);



while(menu != 'q')
{

    //Menu operations
    if(menu == 'c')
    {
        n = GetNumOfNonWSCharacters(Arr);
        printf("Number of non-whitespace characters: %d\n", n);
        break;
    }//End if
    
    else if(menu == 'w')
    {
        w = GetNumOfWords(Arr);
        printf("Number of words: %d\n", w + 1);
        break;
    }//End else if

    else if(menu == 'f')
    {
        FixCapitalization(Arr);
        printf("Edited text: %s\n", Arr);
        break;
    }//End else if
        

    else if(menu == 'r')
    {
        ReplaceExclamation(Arr);
        printf("Edited text: %s\n", Arr);
        break;
    }
    

    else if(menu =='s')
    {
        ShortenSpace(Arr);
        printf("Edited text: %s\n", Arr);
        break;
    }//End else if
    
        
    else if(menu == 'q')
    {
    break;
    }

    //Check validity of entered char
    else if(menu != 'c' && menu != 'w' && menu != 'f' && menu != 'r' && menu != 's')
    {
        printf("Enter a valid option:\n");
        scanf(" %c", &menu);
        printf("\n");
        break;
    }//End else if


    //Display menu
    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n");
    printf("\n");
    printf("Choose an option:\n");
    scanf("%c", &menu);


}//End while

    return menu;

}//End PrintMenu

//Func:GetNumOfNonWSCharacters()
//Displays the number of non whitespace chars to user
int GetNumOfNonWSCharacters(const char wsStr[])
{
    //Get int for num of non-ws chars
    int nSpace = 0;
    int length = strlen(wsStr);
    for(int i = length - 1; i > 0; i--)
     {
         if(wsStr[i] != ' ')
         {
             nSpace = nSpace + 1;
         }//End if
     }//End for


    return nSpace;
 }//End GetNumOfNonWSCharacters

//Func: GetNumOfWords()
//Displays number of words to user
int GetNumOfWords(const char numStr[])
{
    int words = 1;
    int length = strlen(numStr);
    for(int i = length - 1; i > 0; i--)
    {
        if(numStr[i] == ' ' && numStr[i-1] != ' ')
        {
            words = words + 1;
        }//End if
    }//End for
    return words;
}//End GetNumOfWords

//Func: FixCapitalization()
//Fixes the capitalization of lowercase characters
void FixCapitalization(char capStr[])
{

    //Fix capitalization throughout string
    for(int i = 1; i < strlen(capStr); i++)
    {
        if(isalpha(capStr[i]) && capStr[i-3] == '.')
        {
            capStr[i] = toupper(capStr[i]);
        }//End if
    }//End for
   
    //Fix capitalization of first character
    int j = 0;
    if(isalpha(capStr[j]))
    {
        capStr[j] = toupper(capStr[j]);
    }//End if
    return;
}//End FixCapitalization

//Func: ReplaceExclamation()
//Replaces ! chars with . chars
void ReplaceExclamation(char exStr[])
{
    for(int i = 0; i < strlen(exStr); i++)
    {
        if(exStr[i] == '!')
        {
            exStr[i] = '.';
        }//End if
    }//End for
    return;
}//End ReplaceExclamation


//Func: ShortenSpace()
//Shortens Space to take up 1 char
void ShortenSpace(char spStr[])
{
    int j = 0;
  for(int i = 0; spStr[i] != '\0'; i++)
  {
      if(spStr[i] == ' ' && ispunct(spStr[i-1]))
      {
          spStr[j++] = spStr[i];
      }//End if
  }//End for
  return;
}//End ShortenSpace

//note: Fix GetNumOfNonWSCharacters (infinite loop)
//& GetNumOfWords (infinite loop) + W-1
//
