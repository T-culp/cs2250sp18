/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:26:54 PM
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
#include <stdlib.h>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"

// Main Function
int main()
{
    char name[50];
    char date[50];
    ShoppingCart cName[];
    ShoppingCart cDate[];
    printf("Enter Customer's Name:\n");
    scanf("%[^\n]s", name);
    strcpy(cName.customerName, name);
    printf("Enter today's date:\n");
    scanf("%[^\n]s", date);
    strcpy(cDate.currentDate, date);
    printf("Customer Name: %s\n", &cName.customerName);
    printf("Today's Date: %s\n", &cDate.currentDate);

    PrintMenu(cart);
    return 0;
}


