#include <iostream>
using namespace std;

int main()
{
	bool(a) = true;
	int num1 = 12;
	int num2 = 5;
	int num3 = 7;

	if (a)
	{
		num1++;
		num2 += 5;
	}
	num3 *= 2;

	cout << "num1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;
	cout << "num3 is " << num3 << endl;

	return 0;
}
