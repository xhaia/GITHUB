#include "Hamster.h"

Hamster::Hamster(int hunger, int boredom)
{
	cout << "Your new hamster has arrived" << endl;
}

void Hamster::Talk()
{
	cout << "I am your hamster and i feel" << endl;
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