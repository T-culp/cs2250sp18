/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:41:54 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PERSONCLASS__INC__
#define  PERSONCLASS_INC__
    
#include <iostream>  //For C++
using namespace std; //For C++

// Constants
class Person
{
    private:
            int age;
            string name;
            double weight;

    public:
            //Default Constructor
            Person();
            //Second Constructor(Value Constructor)
            //Person(int a = 0, string n = "None",double w = 0.0);
            Person(int a, string n, double w);

            void SetAge(int a);
            int GetAge();
            void SetName(string n);
            string GetName();
            void SetWeight(double w);
            double GetWeight();
            void ShowInfo() const; //Constant Getter, read only
           
            //Operator + overload
            Person operator+(Person rhs); //rhs = right hand side
};

#endif /* ----- #ifndef PERSONCLASS__INC__ ----- */

