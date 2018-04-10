/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello World in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:41:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //Use for C
#include <iostream>  //Use for C++
using namespace std; //For C++ Standard name
// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;
    //std::cout << "Hello World C++" << std::endl;
    cout << "Hello World C++" << endl;

    //Integers
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " old" << endl;

    //Strings
    cout << "What is your name?" << endl;
    //cin >> name; //Takes input up to the first space

    cin.ignore();  //Takes care of extra enter key
    getline(cin, name); //Takes all input including spaces
    cout << "Hello " << name << endl;



    return 0;
}
// Function Definitions


