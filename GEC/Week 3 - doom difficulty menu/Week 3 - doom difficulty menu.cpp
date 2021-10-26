#include <iostream>
using namespace std;

int main()
{
	int difficulty;

	cout << "Please choose your difficulty\n" 
		"1. I'm too young to die!\n"
		"2. Hey, not to rough!\n"
		"3. Hurt me plenty\n"
		"4. Ultra-violence\n"
		"5. Nightmare..."<< endl;

	cin >> difficulty;

	switch (difficulty)
	{
	case (1):
		cout << "You're better off playing animal crossing! " << endl;
		break;
	case (2):
		cout << "You can do better than this! " << endl;
		break;
	case (3):
		cout << "Hmm, only average! " << endl;
		break;
	case (4):
		cout << "Now you getting somewhere! " << endl;
		break;
	case (5):
		cout << "A real soldier, looks like humans stand a chance! " << endl;
		break;
	default:
		cout << "Are you trying to run, the demons wont kill themselves! " << endl;
		break;
	}
}
