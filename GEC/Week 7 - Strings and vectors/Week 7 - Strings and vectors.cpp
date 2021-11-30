#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> choice;
    string Choice;
    const int MAX_ITEMS = 3;
    int numitems = 0;
    vector<string> inventory[MAX_ITEMS];

    inventory[numitems++].push_back ("sword");

    while (numitems != 3)
    {
        cout << "Type which item you would like to keep: Staff or knife" << endl;
        getline(cin, Choice);
        choice.push_back(Choice);
        inventory[numitems++];
        inventory->insert(inventory->end(), choice.begin(), choice.end());

        cout << "Your inventory holds: " << endl;

        for (int i = 0; i < inventory->size(); i++)
        {
            cout << inventory[i] << endl;;
        }

        cout << "Type which item you would like to keep: Healing potion or Fire Spell" << endl;
        getline(cin, Choice);
        choice.push_back(Choice);
        inventory[numitems++];

        inventory->insert(inventory->end(), choice.begin(), choice.end());
    }
}
