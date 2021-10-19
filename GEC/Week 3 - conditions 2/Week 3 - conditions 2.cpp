#include <iostream>
using namespace std;

int main()
{
	bool(a) = false;
	bool(b) = true;
	int num1 = 12;
	int num2 = 5;
	int num3 = 7;

	if (a)
	{
		num1 += 10;
		num2 += 15;
	}
	if (b)
	{
		num1++;
		num3 += 20;
	}
	else
	{
		num1--;
		num2--;
		num3--;
	}

	cout << "num1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;
	cout << "num3 is " << num3 << endl;

	return 0;
}
