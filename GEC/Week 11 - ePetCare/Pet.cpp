#include "Pet.h"

Pet::Pet(int hunger, int boredom)
{
	cout << "New pet has arrived! " << endl;
	m_hunger = hunger;
	m_bored = boredom;
}

void Pet::Feed(int food)
{
	cout << "The animal has eaten!" << endl;
	 m_hunger -= food;
	 if (m_hunger < 0)
	 {
		 m_hunger = 0;
	 }
	 PassingTime();
}

void Pet::Play(int fun)
{
	cout << "The animal has eaten!" << endl;
	m_bored -= fun;
	if (m_bored < 0)
	{
		m_bored = 0;
	}
	PassingTime();
}

void Pet::Talk()
{
	cout << "I am your pet and i feel" << endl;
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

void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored += time;
}
