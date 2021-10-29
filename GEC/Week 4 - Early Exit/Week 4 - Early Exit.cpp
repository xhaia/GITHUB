#include <iostream>
using namespace std;

int main()
{
    //typedef
    typedef int PlayerHealth;
    typedef int Questions;
    typedef int Damage;

    //variables
    PlayerHealth playerhealth = 100;
    Questions i = 1;
    Damage damage;

    for(i; i < 11; i++)
    {
        cout << "Question " << i << ": How much damage shall i deal?\n" << endl;
        cin >> damage;

        playerhealth = playerhealth - damage;

        cout << "\nPlayer health is: " << playerhealth << "\n" << endl;

        if (playerhealth <= 0)
        {
            cout << "Early end. Player Died!" << endl;
            break;
        }
    }

    if (i == 11)
    {
        cout << "All questions asked. Player survived!" << endl;
    }
    
    return 0;

}
