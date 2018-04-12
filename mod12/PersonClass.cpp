/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.cpp
 *
 *    Description:  Person Class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:12 AM
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

//Default Constructor
 Person::Person()
{
    //Init all or most of variables or attributes
    age = 0;
    name = "None";
    weight = 0.0;
    

}//End Person

//Second Constructor(Value Constructor)
Person::Person(int a, string n,double w)
{
    age = a;
    name = n;
    weight = w;
    return;
}//End Person

// Function Definitions

void Person::SetAge(int a)
{
    age = a;
    return;
}//End SetAge

int Person::GetAge()
{
    return age;
}//End GetAge

void Person::SetName(string n)
{
    name = n;
     return;
}//End SetName

string Person::GetName()
{
    return name;
}//End GetName

void Person::SetWeight(double w)
{
    weight = w;
    return;
}//End SetWeight

double Person::GetWeight()
{
    return weight;
}//End GetWeight

void Person::ShowInfo() const
{
    //The "this" pointer refers to the object itself
    cout << "Name " << this->name << endl;
    cout << "Age " << this->age << endl;
    cout << "Weight " << this->weight << endl;
    return;
}//End ShowInfo

Person Person::operator+(Person rhs)
{
    Person tmp;
    //Add elements of objects
    //       first  second
    tmp.age = age + rhs.age;
    tmp.name = name + " " + rhs.name;
    tmp.weight = weight + rhs.weight;
    
    return tmp;
}//End operator+ overload
