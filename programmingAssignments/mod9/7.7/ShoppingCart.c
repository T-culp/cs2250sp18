/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:16:14 AM
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
#include "ShoppingCart.h"

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  Add an ItemToPurchase to Shopping Cart, increment cartSize
 * =====================================================================================
 */
ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart)
{
    for(int i = 0; i < 10; i++)
    {
    }//End for
    return cart;
}//End AddItee

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Remove an ItemToPurchase based onthe name of the item 
 *  from Shopping Cart, decrement cartSize
 * =====================================================================================
 */
ShoppingCart RemoveItem(char name[], ShoppingCart cart)
{
    //1)strcmp to find the item versus
    //cart.cartItem[Index].name

    //2)If you find it, adjust your index in array
    //cart.cartItems[Index] = cart.cartItems[index + 1];
    //else: print error message
    return cart;
}//End RemoveItem

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  Modifys an exisitng item in the cart
 * =====================================================================================
 */
ShoppingCart ModifyItem(ItemToPurchace item, SHoppingCart cart)
{
    return cart;
}//End ModifyItem

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  Get the total number of items from cart
 * =====================================================================================
 */
int GetNumItemsInCart(ShoppingCart cart)
{
    int totalItems = 0;

    return totalItems;
}//End GetNumItemsInCart


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCostOfCart
 *  Description:  Determines and returns the total cost of items in the cart
 * =====================================================================================
 */
void GetCostOfCart()ShoppingCart cart
{
}//End GetCostOfCart

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  
 * =====================================================================================
 */
void PrintTotal(ShoppingCart cart)
{
    return;
}//End PrintTotal

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescriptions
 *  Description:  
 * =====================================================================================
 */
void PrintDescriptions(ShoppingCart cart)
{
    return;
}//End PrintDescriptions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description:  Displays menu to user
 * =====================================================================================
 */
void PrintMenu(ShoppingCart cart)
{
    
    return;
}//End PrintMenu

