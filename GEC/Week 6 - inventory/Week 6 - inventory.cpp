#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    char staff;

    const int MAX_ITEMS = 4;
    int numItems = 0;
    string inventory[MAX_ITEMS];
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";

    cout << "You have found a magic staff, would you like to take it? y or n" << endl;
    cin >> staff;


}