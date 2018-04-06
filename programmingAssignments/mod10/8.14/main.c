/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Main file for Contacts
 *
 *        Version:  1.0
 *        Created:  04/02/2018 01:38:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Contacts.h"

// Main Function
int main()
{
    //Memory allocation
    ContactNode* headObj = NULL;
    ContactNode* nodeObj1 = NULL;
    ContactNode* nodeObj2 = NULL;
    headObj = (ContactNode*)malloc(sizeof(ContactNode));
    nodeObj1 = (ContactNode*)malloc(sizeof(ContactNode));
    nodeObj2 = (ContactNode*)malloc(sizeof(ContactNode));

    //Initialize arrays
    char name[50];
    char pNum[50];

    //Prompt user for 3 contacts & output

    for(int i = 1; i < 4; i++)
    {
        if(i == 1)
        {
            char fName[25];
            char lName[25];
            printf("Person %d\n", i);
            printf("Enter name:\n");
            scanf("%s %s", fName, lName);
            strcat(fName, " ");
            strcat(fName, lName);
            for(int i = 0; i < strlen(fName); i++)
            {
                name[i] = fName[i];
            }
            printf("Enter phone number:\n");
            scanf("%s", pNum);
            CreateContactNode(headObj, name, pNum, nodeObj1);
            GetNextContact(headObj, nodeObj1);
            printf("You entered: %s, %s\n", headObj->contactName,
                    headObj->contactPhoneNum);
            printf("\n");
        memset(&name[0], 0, sizeof(name));

        }//End if

        else if(i == 2)
        { 
            char fName[25];
            char lName[25];
            char suffix[10];
            int len = 0;
            printf("Person %d\n", i);
            printf("Enter name:\n");
            scanf("%s %s", fName, lName);
            scanf("%s.", suffix);
            strcat(fName, " ");
            strcat(fName, lName);
            len = strlen(suffix);
            if(len > 1)
            {
            strcat(fName, " ");
            strcat(fName, suffix);
            }//end if
            
            for(int i = 0; i < strlen(fName); i++)
            {
                name[i] = fName[i];
            }
            printf("Enter phone number:\n");
            scanf("%s", pNum);
            CreateContactNode(nodeObj1, name, pNum, nodeObj2);
            GetNextContact(nodeObj1, nodeObj2);
            printf("You entered: %s, %s\n", nodeObj1->contactName,
                    nodeObj1->contactPhoneNum);
            printf("\n");
        
        memset(&name[0], 0, sizeof(name));
        }//End else if


        else if(i == 3)
        {
            char fName[25];
            char lName[25];
            printf("Person %d\n", i);
            printf("Enter name:\n");
            scanf("%s %s", fName, lName);
            strcat(fName, " ");
            strcat(fName, lName);
            for(int i = 0; i < strlen(fName); i++)
            {
                name[i] = fName[i];
            }
            printf("Enter phone number:\n");
            scanf("%s", pNum);
            CreateContactNode(nodeObj2, name, pNum, NULL);
            GetNextContact(nodeObj2, NULL);
            printf("You entered: %s, %s\n", nodeObj2->contactName,
                    nodeObj2->contactPhoneNum);
            printf("\n");

        }//End else if

    }//End for



    //Output the linked list
    printf("CONTACT LIST\n");
    PrintContactNode(headObj);
    printf("\n");
    PrintContactNode(nodeObj1);
    printf("\n");
    PrintContactNode(nodeObj2);
    printf("\n");


    //Free memory
    free(headObj);
    free(nodeObj1);
    free(nodeObj2);
    return 0;
}



