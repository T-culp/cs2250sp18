/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:55:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__

typedef struct ItemToPurchase
{
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;i
    char itemDescription[50];
}ItemToPurchase;

//Constants

//Function Prototypes
void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

