/*
 * Cars.cpp
 *
 *  Created on: Mar 12, 2018
 *      Author: jpetterson
 */

#include "Cars.h"

Cars::Cars()
    {
    // TODO Auto-generated constructor stub
    
    }

Cars::~Cars()
    {
    // TODO Auto-generated destructor stub
    }

void Cars::speak()
    {
    cout << "I'm a Car." << endl;
    }

void Ford::fordSpeak()
    {
    cout << "And a Ford." << endl;
    }

void Mustang::mustangSpeak()
    {
    cout << "And a Mustang too!" << endl;
    }
