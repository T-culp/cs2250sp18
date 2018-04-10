/*
 * =====================================================================================
 *
 *       Filename:  HelloClass.cpp
 *
 *    Description:  Hello World class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:53 AM
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

// Constants
class HelloNum
{
    //Only the developer can see this section
    private:
        int number; //Attribute

    //The user has access here, by writing Functions or Methods in C++
    public:
        void SetNumber(int n); //Prototype for Setter
        int GetNumber(); //Prototype for Getter
        void ShowNumber(); //Prototype
};
// Function Prototypes

// Main Function
int main()
{
    int num;
    //n1 is an instance of the class HelloNum
    HelloNum n1; //an Object
    n1.SetNumber(91);
    n1.ShowNumber();
    num = n1.GetNumber();
    cout <<"1) Number is " << num  << endl;
    num *= 2;
    cout << "2) Number is " << num << endl;
    n1.ShowNumber();

    return 0;
}
// Function Definitions

void HelloNum::ShowNumber()
{
    cout << "Your num is " << number << endl;
    return;
}//End ShowNumber

void HelloNum::SetNumber(int n)
{
    //Set private number
    number = n;
    return;
}//End SetNumber

int HelloNum::GetNumber()
{
    //Return private number
    return number;
}//End GetNumber


