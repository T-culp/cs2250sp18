/*
 * =====================================================================================
 *
 *       Filename:  inventory.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:28:49 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INVENTORY__INC__
#define  INVENTORY_INC__
    
#include <iostream>
using namespace std;

class InventoryItem {
    public:
            void PrintItem();
            //Constructor
            ////Only in the prototype 
            InventoryItem(string initName = "", int initQty = 0);

    private:
            string itemName;  // Name of item
            int itemQuantity; // Number of items available
};
#endif /* ----- #ifndef INVENTORY__INC__ ----- */

