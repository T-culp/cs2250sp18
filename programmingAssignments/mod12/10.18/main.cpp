/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2018 12:22:26 PM
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

// Main Function
int main()
{
    //Initialize variables
    ItemToPurchase item1, item2;
    string n;
    int p;
    int q;
    int totalCost = 0;

    //Item 1
    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, n);
    cout << "Enter the item price:" << endl;
    cin >> p;
    cout << "Enter the item quantity:" << endl;
    cin >> q;
    item1.SetName(n);
    item1.SetPrice(p);
    item1.SetQuantity(q);
    cout << endl;

    //Item 2
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    cin.ignore();
    getline(cin, n);
    cout << "Enter the item price:" << endl;
    cin >> p;
    cout << "Enter the item quantity:" << endl;
    cin >> q;
    item2.SetName(n);
    item2.SetPrice(p);
    item2.SetQuantity(q);
    cout << endl;

    //Calculate total cost
    totalCost = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() *  item2.GetQuantity());
    cout << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" 
        << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" 
        << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;
    cout << endl;
    cout << "Total: $" << totalCost << endl;


    return 0;
}
// Function Definitions


