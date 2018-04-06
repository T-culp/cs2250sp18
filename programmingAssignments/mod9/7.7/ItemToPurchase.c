/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 06:56:55 PM
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

//Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MakeItemBlank
 *  Description:  Sets item's name to "none", item's $ to 0, item's qty to 0
 * =====================================================================================
 */
void MakeItemBlank(ItemToPurchase* item)
{
    char tmp[10] = "none"
        for(int i = 0; i < 2; i++)
        {
            strcpy(item[i].itemname, tmp);
            strcpy(item[i].itemDescription, tmp);
            item->itemPrice = 0;
            item->itemQuantity = 0;
        }//End for
    return;
}//End MakeItemBlank


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemCost
 *  Description:  Prints the item's name, quantity, & cost
 * =====================================================================================
 */
void PrintItemCost(ItemToPurchase item)
{
    int totcost = 0;
    int expense = 0;
    printf("TOTAL COST\n");
    for(int i = 0; i < 2; i++)
    {
        expense = (item[i].itemPrice * item[i].itemQuantity);
        printf("%s %d @ $%d = %d\n", item.itemName, item.itemQuantity, item.itemPrice, expense);
        totcost += expense;
        expense = 0;
    }//End for
    printf("Total: $%d\n", totCost);
    return;
}//End PrintItemCost


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemDescription
 *  Description:  prints description of item
 * =====================================================================================
 */
void PrintItemDescription(ItemToPurchase item)
{
    
    return;
}//End PrintItemDescription
