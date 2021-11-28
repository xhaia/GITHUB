#include <iostream>
#include <string>

using namespace std;

int main()
{
	char name[20];
	char * token;

	cout << "Please enter your first initial followed by a space, middle initial followed by a space, and your full surname! " << endl;
	cin.getline(name, 20);
	token = strtok(name, " ");

	while (token != NULL)
	{
		cout << ("name\n", token) << endl;
		token = strtok(NULL, " ");
	}
	return 0;
}

