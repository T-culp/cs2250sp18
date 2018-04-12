/*
 * =====================================================================================
 *
 *       Filename:  TestPersonClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:43:12 AM
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
#include "PersonClass.h"
using namespace std; //For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    /* Before Constructor *\
       Person p1;
       p1.SetAge(21);
       p1.SetName("Waldo");
       p1.SetWeight(185.2);

       cout << "Name " << p1.GetName() << endl;
       cout << "Age " << p1.GetAge() << endl;
       cout << "Weight " << p1.GetWeight() << endl;
       */

    //Defaut Constructor testing
    Person p2;
    p2.ShowInfo();
    cout << endl;

    //Second Constructor testing(Value Constructor)
    Person p3(4,"Waldo", 33.2);
    p3.ShowInfo();
    cout << endl;

    //Third Constructor
    Person p4(66,"Mario",2.0);
    p4.ShowInfo();
    cout << endl;

    //Enable Person + Person operation
    p2 = p3 + p4;
    p2.ShowInfo();
    cout << endl;

    /*
    //Define an array of 4 Persons and set their values to defaults
    //Display all the members of the array
    int size = 4;
    Person persons[size];
    for(int i = 0; i < size; i++)
    {
        cout << i << " ";
        persons[i].ShowInfo();
        cout << endl;
    }//End for
    */

    

    return 0;
}

// Function Definitions


