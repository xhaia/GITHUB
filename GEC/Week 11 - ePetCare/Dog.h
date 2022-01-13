#ifndef DOG_H
#define DOG_H
#include<iostream>
#include "Pet.h"
using namespace std;

class Dog : public Pet
{
public:
	Dog(int hunger = 0, int boredom = 0);
	~Dog();

	virtual void Talk();
};

#endif
