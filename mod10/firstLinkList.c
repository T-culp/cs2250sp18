/*
 * =====================================================================================
 *
 *       Filename:  firstLinkList.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 09:25:51 AM
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
#include "intLink.h"

// Main Function
int main()
{
    //Addresses of IntNode (lines 28 - 34)

    //For bookkeeping purposes
    IntNode* headObj  = NULL; // Create intNode objects
    IntNode* currObj  = NULL;

    //Actual nodes
    IntNode* nodeObj1 = NULL;
    IntNode* nodeObj2 = NULL;
    IntNode* nodeObj3 = NULL;

    // Front of nodes list
    headObj = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(headObj, -1, NULL); //headobj, value, next address

    // Insert nodes
    nodeObj1 = (IntNode*)malloc(sizeof(IntNode));//creation
    IntNode_Create(nodeObj1, 555, NULL);//initialization
    IntNode_InsertAfter(headObj, nodeObj1);//linking headObj to nodeObj1(hO points to nO1)

    nodeObj2 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj2, 999, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj2);

    nodeObj3 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj3, 777, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj3);

    // Print linked list
    currObj = headObj;
    while (currObj != NULL)
    {
        IntNode_PrintNodeData(currObj); //prints info
        currObj = IntNode_GetNext(currObj);  //updates to next address
    }
    //Clean your mess
    free(headObj);
    free(nodeObj1);
    free(nodeObj2);
    free(nodeObj3);

    return 0;
}
