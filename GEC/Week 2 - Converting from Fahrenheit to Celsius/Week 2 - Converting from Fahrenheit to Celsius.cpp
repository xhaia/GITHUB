#include <iostream>
using namespace std;

int main()
{
    typedef float fahrenheit;
    typedef float celsius;

    fahrenheit Fahrenheit = 95.0;
    celsius Celsius = (Fahrenheit - 32) * 0.5556;

    cout << Fahrenheit << "F is equal to " << Celsius << "C." << endl;

    return 0;
}
