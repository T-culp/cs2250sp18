/*
 * =====================================================================================
 *
 *       Filename:  inventory.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:26:41 AM
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
using namespace std; //For C++
#include "inventory.h"

InventoryItem::InventoryItem(string initName, int initQty) 
{
    itemName = initName;
    itemQuantity = initQty;

    return;
}


// InventoryItem function to print name/qty attributes
void InventoryItem::PrintItem() 
{
    cout << "name: " << this->itemName << ", " << "quantity: "
        << this->itemQuantity << endl;

    return;
}


// Function Definitions


