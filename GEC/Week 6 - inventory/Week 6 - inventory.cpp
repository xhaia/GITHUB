#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    for (;;)
    {
        char staff;
        char dagger;

        const int MAX_ITEMS = 4;
        int numItems = 0;
        string inventory[MAX_ITEMS];
        inventory[numItems++] = "sword";
        inventory[numItems++] = "battle axe";
        inventory[numItems++] = "healing potion";
        inventory[numItems++] = "dagger";

        cout << "You have found a wizard's staff, would you like to take it? y or n" << endl;
        cin >> staff;

        if (staff == 'y')
        {
            cout << "Would you like to replace the dagger with the staff? y or n" << endl;
            cin >> dagger;

            if (dagger == 'y')
            {
                inventory[3] = "wizard's staff";
                cout << "You have replaced the dagger with the staff! " << endl;
            }
            else if (dagger == 'n')
            {
                cout << "You have left behind the wizard's staff! " << endl;
            }
        }
        else if (staff == 'n')
        {
            cout << "You have left behind the wizard's staff! " << endl;
        }

        for (int i = 0; i < 4; i++)
            cout << inventory[i] << endl;
    }
}