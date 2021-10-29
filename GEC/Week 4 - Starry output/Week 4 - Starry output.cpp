#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	int Lines = 0;

	for (;;)
	{
		cout << "Enter a number between 1 and 10! \n" << endl;
		cin >> N;

		if (N == 0)
			break;
		if (N > 10)
			break;

		do
		{
			string star(Lines + 1, '*');
			cout << "" << star << endl;
			Lines = Lines + 1;
		} while (Lines != N);
		
	}
}
