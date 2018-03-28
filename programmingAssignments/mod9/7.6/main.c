/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2018 05:52:57 PM
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
#include "ItemToPurchase.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    

    char name [50];
    ItemToPurchase item[2];
    MakeItemBlank(item);
    for(int i = 0; i < 2; i++)
    {
    printf("Item %d\n", i + 1);
    printf("Enter the item name:\n");
    scanf("%[^\n]s", name);
    strcpy(item[i].itemName, name);
    printf("Enter the item price:\n");
    scanf("%d", &item[i].itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d", &item[i].itemQuantity);
    fflush(stdin);
    }//End for
    
   PrintItemCost(*item);
    return 0;
}
// Function Definitions


