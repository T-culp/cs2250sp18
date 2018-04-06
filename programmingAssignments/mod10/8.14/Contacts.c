/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  main.c Contact functions
 *
 *        Version:  1.0
 *        Created:  04/02/2018 01:39:24 PM
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

// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreateContactNode
 *  Description:  Creates a new contact node
 * =====================================================================================
 */
void CreateContactNode(ContactNode* thisNode, char name[],
        char phoneNum[], ContactNode* nextNodePtr)
{
    strcpy(thisNode->contactName, name);
    strcpy(thisNode->contactPhoneNum, phoneNum);
    return;

}//End CreateContactNode


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertContactAfter
 *  Description:  inserts a new contact node after previously existing node
 * =====================================================================================
 */
void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode,
        ContactNode* nextLoc)
{
    ContactNode* tmp = NULL;
    tmp = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tmp;
    return;
    
}//End InsertContactAfter


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNextContact
 *  Description:  Refers program to next contact node
 * =====================================================================================
 */
ContactNode* GetNextContact(ContactNode* thisNode, ContactNode* nextLoc)
{
    return thisNode->nextNodePtr;

}//End GetNextContact


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintContactNode
 *  Description:  Prints contact nodes
 * =====================================================================================
 */
void PrintContactNode(ContactNode* thisNode)
{
    printf("Name: %s\n", thisNode->contactName);
    printf("Phone number: %s\n", thisNode->contactPhoneNum);
    return;

}//End PrintContactNode


