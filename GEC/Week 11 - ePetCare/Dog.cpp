#include "Dog.h"

Dog::Dog(int hunger, int boredom)
{
	cout << "Your new dog has arrived" << endl;
}

void Dog::Talk()
{
	cout << "I am your dog and i feel" << endl;
	int mood = Getmood();
	if (mood >= 15)
	{
		cout << "mad" << endl;
	}
	else if (mood >= 10)
	{
		cout << "Frustrated" << endl;
	}
	else if (mood >= 5)
	{
		cout << "Okay" << endl;
	}
	else
	{
		cout << "Happy" << endl;
	}

	PassingTime();
}