#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
using std::setw;


int main()
{
	int Numbers[10];

	int num;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter a number: " << endl;
		cin >> Numbers[i];
	}

	int n = sizeof(Numbers) / sizeof(Numbers[0]);
	sort(Numbers, Numbers + n);

	cout << "Array element" << setw(17) << "Stored Value" << endl;

	for (int i = 0; i < 10; i++)
		cout << setw(7) << i << setw(17) << Numbers[i] << endl;

	return 0;
}
