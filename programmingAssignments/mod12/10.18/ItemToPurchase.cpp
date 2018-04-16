/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2018 12:34:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //For C
#include <iostream>  //For C++
#include "ItemToPurchase.h"
using namespace std; //For C++

// Function Definions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ItemToPurchase()
 *  Description:  Default Constructor function
 * =====================================================================================
 */
ItemToPurchase::ItemToPurchase()
{
    itemName = "None";
    itemPrice = 0;
    itemQuantity = 0;
    return;

}//End Constructor


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetName()
 *  Description:  Sets the item name to user inputted string
 * =====================================================================================
 */
void ItemToPurchase::SetName(string n)
{
    itemName = n;
    return;

}//End SetName


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetName()
 *  Description:  Returns the item name
 * =====================================================================================
 */
string ItemToPurchase::GetName()
{
    return itemName;

}//End GetName


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetPrice()
 *  Description:  Sets the item price to user inputted int
 * =====================================================================================
 */
void ItemToPurchase::SetPrice(int p)
{
    itemPrice = p;
    return;

}//End SetPrice


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetPrice()
 *  Description:  Returns the item price
 * =====================================================================================
 */
int ItemToPurchase::GetPrice()
{
    return itemPrice;

}//End GetPrice


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetQuantity()
 *  Description:  Sets the item quantity to user inputted int
 * =====================================================================================
 */
void ItemToPurchase::SetQuantity(int q)
{
    itemQuantity = q;
    return;

}//End SetQuantity


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetQuantity()
 *  Description:  Returns the item quantity
 * =====================================================================================
 */
int ItemToPurchase::GetQuantity()
{
    return itemQuantity;

}//End GetQuantity
