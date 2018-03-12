/*
 * Cars.h
 *
 *  Created on: Mar 12, 2018
 *      Author: jpetterson
 */

#ifndef CARS_H_
#define CARS_H_
#include <iostream>

using namespace std;

class Cars
    {
    private:

    public:
	Cars();
	virtual ~Cars();

	void speak();
    };

class Ford: public Cars
    {
    private:

    public:

	void fordSpeak();

    };

class Mustang: public Ford
    {

    public:
	void mustangSpeak();

    };

#endif /* CARS_H_ */
