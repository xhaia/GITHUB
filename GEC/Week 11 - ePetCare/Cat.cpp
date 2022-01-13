#include "Cat.h"

Cat::Cat(int hunger, int boredom)
{
	cout << "Your new cat has arrived" << endl;
}

void Cat::Talk()
{
	cout << "I am your cat and i feel" << endl;
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