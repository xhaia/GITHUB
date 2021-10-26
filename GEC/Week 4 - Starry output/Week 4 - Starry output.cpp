#include <iostream>
using namespace std;

int main()
{
	int N;
	int Lines = 0;
	string star = "*";
	

	for (;;)
	{
		cout << "Enter a number between 1 and 10! " << endl;
		cin >> N;

		if (N == 0)
			break;
		if (N > 10)
			break;

		do
		{
			cout << "" << star << endl;
			Lines = Lines + 1;
		} while (Lines != N);
			
	}


}
