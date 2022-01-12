#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	struct scores {
		string name[50];
		int score[60];
	}details;

	string Name;
	int Score;

	int count = 0;
	int i, j, hold;
	int choice;
	char more;

	ofstream OutFile;
	ifstream inFile;

	cout << "Please select an option!\n[1]Add score\n[2]Display scores\n[3]Exit\n" << endl;
	cin >> choice;

	if (choice == 1)
	{
		while (count < 11)
		{
			cout << "Please enter a name! " << endl;
			getline(cin, Name);
			details.name = Name;
			
			cout << "Please enter a score!" << endl;
			cin >> Score;
			details.score = Score;

		}
	}
	else if (choice == 2)
	{

	}
	else if (choice == 3)
	{
		exit;
	}
	else
	{
		cout << "That is not an option!" << endl;
	}
}
