#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;



char cards[10] = { 'D', 'C', 'E', 'B', 'A', 'D', 'C', 'E', 'B', 'A' };
bool cardfound[] = { false };

int playcount = 0;

int drawbaordpara(int guess1, int guess2)
{
	system("cls");
	cout << "Current playcount: " << playcount << endl;
	for (int i = 0; i < 10; i++)
	{
		if (cardfound[i] or i + 1 == guess1 or i + 1 == guess2)
			cout << "[" << cards[i] << "]" << endl;
		else
			cout << "[" << i + 1 << "]" << endl;
	}

	return 0;
}

int drawboard()
{
	system("cls");
	cout << "Current playcount: " << playcount << endl;
	for (int i = 0; i < 10; i++)
	{
		if (cardfound[i])
			cout << "[" << cards[i] << "]" << endl;
		else
			cout << "[" << i + 1 << "]" << endl;
	}

	return 0;
}

int main()
{
	int score = 0;
	bool playing = true;

	while (playing == true)
	{
		drawboard();
		int guess1;
		int guess2;

		cout << "Enter a card? " << endl;
		cin >> guess1;

		cout << "Enter another card? " << endl;
		cin >> guess2;

		drawbaordpara(guess1, guess2);

		if (cards[guess1 - 1])
		{
			score++;
			cardfound[guess1 - 1] = true;
			cardfound[guess2 - 1] = true;
		}
		else
		{
			cout << "No match" << endl;
		}

		if (score == 5)
		{
			cout << "you win" << endl;
			break;
		}
		else
		{
			playcount = playcount + 1;
		}

	}
}
