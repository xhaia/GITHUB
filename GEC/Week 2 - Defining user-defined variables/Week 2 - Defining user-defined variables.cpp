#include <iostream>
using namespace std;

int main()
{
	typedef int health;


	enum Weapons
	{
		Sword = 1,
		Dagger = 2,
		Mace = 3,
		Twin_Swords = 4,
		Samurai = 5,
		Wizard_staff = 6,
		Fire_potion = 7,
		Ice_blade = 8,
		Small_knife = 9,
	};

	Weapons Chosenweapon = Weapons::Samurai;

	health Health = 13000;

	cout << "My current health is:  " << Health << endl;
	cout << "And the ID of my weapon of choice is:  " << Chosenweapon << endl;

	return 0;
}
