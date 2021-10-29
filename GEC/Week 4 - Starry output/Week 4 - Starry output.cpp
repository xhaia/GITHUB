#include <iostream>
using namespace std;

int main()
{
	for (;;)
	{
		int N;
		int Lines = 0;

		cout << "Enter a number between 1 and 10! \n" << endl;
		cin >> N;

		if (N == 0)
			break;
		if (N > 10)
			break;

		do
		{
			string star(Lines + 1, '*');
			cout << "\n" << star << endl;
			Lines = Lines + 1;
		} while (Lines != N);
		
	}
}
