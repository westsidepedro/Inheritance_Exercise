//============================================================================
// Name        : Inheritance_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cars.h"

using namespace std;

int main()
    {
    Cars x;
    x.speak();

    Ford y;
    y.speak();
    y.fordSpeak();

    Mustang m;
    m.speak();
    m.fordSpeak();
    m.mustangSpeak();

    return 0;
    }
