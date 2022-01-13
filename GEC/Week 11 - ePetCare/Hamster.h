#ifndef HAMSTER_H
#define HAMSTER_H
#include<iostream>
#include "Pet.h"
using namespace std;

class Hamster : public Pet
{
public:
	Hamster(int hunger = 0, int boredom = 0);
	~Hamster();

	virtual void Talk();
};

#endif
