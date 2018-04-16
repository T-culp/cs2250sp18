/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/16/2018 12:33:45 PM
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
    

#include <iostream>  //For C++
using namespace std; //For C++

class ItemToPurchase
{
    private:
        string itemName;
        int itemPrice;
        int itemQuantity;

    public:
        ItemToPurchase();
        void SetName(string n);
        string GetName();
        void SetPrice(int p);
        int GetPrice();
        void SetQuantity(int q);
        int GetQuantity();
};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

