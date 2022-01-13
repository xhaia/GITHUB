#ifndef CAT_H
#define CAT_H
#include<iostream>
#include "Pet.h"
using namespace std;

class Cat : public Pet
{
public:
	Cat(int hunger = 0, int boredom = 0);
	~Cat();

	virtual void Talk();
};

#endif

