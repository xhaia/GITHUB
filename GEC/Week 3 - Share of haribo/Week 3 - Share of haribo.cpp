#include <iostream>
using namespace std;

int main()
{
	typedef int Haribo;
	typedef int Students;
	typedef int Me;

	Haribo haribo = 40;
	Students students = 14;

	int perstudent = haribo / students;
	int leftover = haribo - (students * perstudent);

	cout << "Each student gets: " << perstudent << " haribo! " << endl;
	cout << "I get: " << leftover << " haribo! " << endl;

	return 0;
}
