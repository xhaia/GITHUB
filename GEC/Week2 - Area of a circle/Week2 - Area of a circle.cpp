#include <iostream>
using namespace std;

int main()
{
    typedef const float pi;
    pi PI = 3.14159;

    typedef float area;
    typedef float radius;

    radius Radius = 25;
    area Area = PI * Radius * Radius;

    cout << "The area of a circle with the radius of " << Radius << " is " << Area << endl;

    return 0;
}
