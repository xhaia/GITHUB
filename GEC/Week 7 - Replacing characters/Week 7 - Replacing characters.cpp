#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string sent;

	cout << "Please enter a sentence! " << endl;
	getline(cin, sent);

	replace(sent.begin(), sent.end(), 'e', 'X');

	cout << sent << endl;
}

