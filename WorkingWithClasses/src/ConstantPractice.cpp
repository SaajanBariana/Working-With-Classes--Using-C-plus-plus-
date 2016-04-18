#include "ConstantPractice.h"
#include <iostream>
#include <string>

using namespace std;

ConstantPractice::ConstantPractice()
{
    //ctor
}

void ConstantPractice::RegularFunction()
{
   cout << "This is a regular function" << endl;
}

void ConstantPractice::ConstantFunction() const
{
    cout << "this is the constant function" << endl;
}

void ConstantPractice::TheMainMethod()
{
    ConstantPractice c;
    c.RegularFunction();

    const ConstantPractice c1;
    c1.ConstantFunction();

}

