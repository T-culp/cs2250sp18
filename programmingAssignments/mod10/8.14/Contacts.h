/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  Contacts header file
 *
 *        Version:  1.0
 *        Created:  04/02/2018 01:39:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS_INC__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structs
typedef struct ContactNode 
{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode* nextNodePtr;
}ContactNode;
// Constants

// Function Prototypes

void CreateContactNode(ContactNode* thisNode, char name[],
        char phoneNum[], ContactNode* nextLoc);
void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode,
        ContactNode* nextLoc);
ContactNode* GetNextContact(ContactNode* thisNode, ContactNode* NextLoc);
void PrintContactNode(ContactNode* thisNode);

#endif /* ----- #ifndef CONTACTS__INC__ ----- */

