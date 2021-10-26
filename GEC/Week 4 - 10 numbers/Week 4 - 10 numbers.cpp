#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;

    typedef float total;
    typedef float mean;

    for (;;)
    {
        cout << "Please enter a integer? " << endl;
        cin >> num1;

        if (num1 == 0)
            break;

        cout << "Please enter another integer? " << endl;
        cin >> num2;

        if (num2 == 0)
            break;

        cout << "Please enter one more integer? " << endl;
        cin >> num3;

        if (num3 == 0)
            break;

        total Total = num1 + num2;
        mean Mean = Total / 2;

        cout << "The sum of the first two numbers is: " << Total << endl;
        cout << "The mean of the first two numbers is: " << Mean << endl;

        total Total2 = num1 + num2 + num3;
        mean Mean2 = Total2 / 3;

        cout << "The sum of all numbers is: " << Total2 << endl;
        cout << "The mean of all numbers is: " << Mean2 << endl;

        cout << "\n" << endl;
    }

}
