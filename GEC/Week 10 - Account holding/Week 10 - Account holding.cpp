#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Details
{
	string name;
	int account_number;
	double balance;
}details;

int main()
{
	Details p;
	Details b;

	bool bool1 = true;
	bool bool2 = true;

	int userchoice;
	char more;

	ofstream OutFile;
	ifstream inFile;

	while (bool1 == true)
	{
		cout << "Welcome to the application!\n[1] First account!\n[2] Second account!\n[3] See who has more than 100000!\n[4]Exit!\n" << endl;
		cin >> userchoice;

		if (userchoice == 1)
		{
			ofstream OutFile("Accounts");
			inFile.open("Accounts", ios::in);

			while (bool2 == true)
			{
				cout << "What is your name? " << endl;
				cin >> p.name;

				cout << "What is your account number? " << endl;
				cin >> p.account_number;

				cout << "What is your balance? " << endl;
				cin >> p.balance;

				OutFile << p.name << endl;
				OutFile << p.account_number << endl;
				OutFile << p.balance << endl;

				cout << "Would you like to enter more details? y or n" << endl;
				cin >> more;

				if (more == 'y')
				{
					cout << "-----------" << endl;
				}
				else if (more == 'n')
				{
					bool2 = false;
				}
				else
				{
					bool2 = false;
				}
			}

			inFile.close();
		}
		else if (userchoice == 2)
		{
			bool2 = true;
			inFile.open("Accounts");

			if (inFile)
			{
				while (bool2 == true)
				{
					cout << "What is your name? " << endl;
					cin >> b.name;

					cout << "What is your account number? " << endl;
					cin >> b.account_number;

					cout << "What is your balance? " << endl;
					cin >> b.balance;

					OutFile << b.name << endl;
					OutFile << b.account_number << endl;
					OutFile << b.balance << endl;
					bool2 = false;
				}
			}
			bool2 = false;
			inFile.close();
		}
		else if (userchoice == 3)
		{
			if (b.balance > 100000)
			{
				cout << "Name: " << b.name << endl;
				cout << "Account number: " << b.account_number << endl;
				cout << "Balance: " << b.balance << endl;
			}
			else if (p.balance > 100000)
			{
				cout << "Name: " << p.name << endl;
				cout << "Account number: " << p.account_number << endl;
				cout << "Balance: " << p.balance << endl;
			}
			else
			{
				cout << "No account with a balance of over 100000 exists! " << endl;
			}

		}
		else if (userchoice == 4)
		{
			exit;
		}
		else
		{
			cout << "Choice does not exist! " << endl;
		}
	}
}
