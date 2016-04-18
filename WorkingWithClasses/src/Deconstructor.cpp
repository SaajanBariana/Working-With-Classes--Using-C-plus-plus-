#include "Deconstructor.h"
#include <iostream>

using namespace std;

Deconstructor::Deconstructor()
{
    cout << "This is the constructor" << endl;
}

Deconstructor::~Deconstructor()
{
    cout << "this is the deconstructor." << endl;
}

void Deconstructor:: TheMainMethod()
{
    Deconstructor d;
    cout<< "Hello" << endl;

}
