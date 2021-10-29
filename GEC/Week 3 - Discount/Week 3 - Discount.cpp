#include <iostream>
using namespace std;

int main()
{
    char status;
    int gamechoice;

    cout << "What is your status:\n"
        "(s)Student\n"
        "(t)Teacher\n"
        "(o)Other\n"<< endl;
    cin >> status;

    cout << "What game would you like 1 or 2? " << endl;
    cin >> gamechoice;

    if (status == 's')
    {
        if (gamechoice == 1)
        {
            cout << "You can get a 20% discount" << endl;
        }
        else if (gamechoice == 2)
        {
            cout << "You can get a 10% discount" << endl;
        }
        else
        {
            cout << "You don't get a discount" << endl;
        }
    }
    else if (status == 't')
    {
        if (gamechoice == 1)
        {
            cout << "You can get a 20% discount" << endl;
        }
        else if (gamechoice == 2)
        {
            cout << "You can get a 10% discount" << endl;
        }
        else
        {
            cout << "You don't get a discount" << endl;
        }
    }
    else if (status == 'o')
    {
        if (gamechoice == 1)
        {
            cout << "You don't get a discount" << endl;
        }
        else if (gamechoice == 2)
        {
            cout << "You don't get a discount" << endl;
        }
    }
    else
    {
        cout << "You are not entitled to a discount! " << endl;
    }
}
