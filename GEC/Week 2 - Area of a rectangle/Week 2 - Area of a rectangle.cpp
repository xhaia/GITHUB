#include <iostream>
using namespace std;

int main()
{
	typedef int Width;
	typedef int Height;

	Width width = 15;
	Height height = 25;

	typedef int Area;

	Area area = width * height;

	cout << "The area of a " << width << " by " << height << " rectangle is " << area << endl;

	return 0;
}

