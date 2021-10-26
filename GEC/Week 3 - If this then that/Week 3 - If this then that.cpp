#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;
    int userawns1;
    int userawns2;

    cout << "Is it raining (1) or snowing (2)?  " << endl;
    cin >> userawns1;

    cout << "What is the temperature in celcius? " << endl;
    cin >> userawns2;

    if (userawns1 == 1)
    {
        if (userawns2 > 15)
        {
            cout << "Wear a light raincoat! " << endl;
        }
        else if (userawns2 < 15)
        {
            cout << "Wear a heavy raincoat" << endl;
        }
        else
        {
            cout << "I don't understand! " << endl;
        }
    }
    else if (userawns1 == 2)
    {
        if (userawns2 > 5)
        {
            cout << "Wear something warm! " << endl;
        }
        else if (userawns2 > 0)
        {
            cout << "Wrap up well! " << endl;
        }
        else
        {
            cout << "Stay home" << endl;
        }
    }
    else
    {
        cout << "Have a nice day, it is neither raining nor snowing! " << endl;
    }

    return 0;
}
