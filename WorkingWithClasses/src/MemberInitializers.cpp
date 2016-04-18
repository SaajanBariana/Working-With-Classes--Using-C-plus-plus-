#include "MemberInitializers.h"
#include <iostream>

using namespace std;

MemberInitializers::MemberInitializers(int a, int b)
: regVar(a), constVar(b)
{

}

void MemberInitializers:: print()
{
    cout << "The regular variable is " << regVar << " while the constant variable is " << constVar << endl;

}

