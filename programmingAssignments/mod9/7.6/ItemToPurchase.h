/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2018 05:53:33 PM
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
   
//Constants

typedef struct ItemToPurchase
{
    char itemName[50];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

//Function Prototypes
void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

