#include <iostream>
using namespace std;

int smallestNumber(int a, int b)
{
	if (a > b)
	{
		cout << "The bigger number is: " << a << "\n" << endl;
		return 0;
	}
	else if (b > a)
	{
		cout << "The bigger number is: " << b << "\n" << endl;
		return 0;
	}
	else if (b == a)
	{
		cout << "The numbers are the same! \n" << endl;
		return 0;
	}
	else
	{
		cout << "I dont understand! " << endl;
		return 0;
	}
}

int main()
{
	int i = 0;

	for (i; i < 3; i++)
	{
		int Num1;
		int Num2;

		cout << "Please enter an integer: " << endl;
		cin >> Num1;

		cout << "Please enter another integer: " << endl;
		cin >> Num2;

		smallestNumber(Num1, Num2);
	}
}
