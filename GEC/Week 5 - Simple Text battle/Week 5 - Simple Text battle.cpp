#include <iostream>
using namespace std;
int attackchoice(int Choice);
bool playstate(bool State);

int player = 1000;
int enemy_health = 2000;
bool playing = true;

int main()
{
    int playerchoice;
    int choice;

    while (playing == true)
    {
        cout << "You have met a troll! \n" 
            "You have 3 methods of attack! \n"
            "1. Use Sword\n"
            "2. Use magic\n"
            "3. Use axe\n"<< endl;

        cin >> playerchoice;

        choice = attackchoice(playerchoice);
        playstate(playing);
    }

    cout << "Thanks for playing! " << endl;
    return 0;
}

int attackchoice(int Choice) 
{
    const int sworddamage = 300;
    const int magicdamage = 650;
    const int axedamage = 450;
    const int trollsword = 350;
    const int trollmagic = 50;
    const int trollaxe = 100;

    switch (Choice)
    {
    case (1):
        enemy_health = enemy_health - sworddamage;
        player = player - trollsword;

        cout << " You have hit the troll\n" << endl;

        cout << " The Troll has hit you\n" << endl;

        if (player < 0)
        {
            player = 0;
        }
        if (enemy_health < 0)
        {
            enemy_health = 0;
        }

        cout << "You have " << player << " health left\n" << endl;
        cout << "The troll has " << enemy_health << " health left\n" << endl;

        return Choice;

    case (2):
        enemy_health = enemy_health - magicdamage;
        player = player - trollmagic;

        cout << "You have hit the troll\n" << endl;

        cout << "The Troll has hit you\n" << endl;

        if (player < 0)
        {
            player = 0;
        }
        if (enemy_health < 0)
        {
            enemy_health = 0;
        }

        cout << "You have " << player << " health left\n" << endl;
        cout << "The troll has " << enemy_health << " health left\n" << endl;

        return Choice;

    case (3):
        enemy_health = enemy_health - axedamage;
        player = player - trollaxe;

        cout << "You have hit the troll\n" << endl;

        cout << "The Troll has hit you\n" << endl;

        if (player < 0)
        {
            player = 0;
        }
        if (enemy_health < 0)
        {
            enemy_health = 0;
        }

        cout << "You have " << player << " health left\n" << endl;
        cout << "The troll has " << enemy_health << " health left\n" << endl;
        
        return Choice;
    }

    return Choice;
}

bool playstate(bool State)
{
    char playagain;
    
    if (enemy_health <= 0)
    {
        cout << "You have subjugated the troll, you win!\n"
            "Would you like to play again? y or n \n" << endl;

        cin >> playagain;

        if (playagain == 'y')
        {
            player = 1000;
            enemy_health = 2000;

            return playing = true;
        }
        else if (playagain == 'n')
        {
            return playing = false;
        }
        else
        {
            cout << "I don't understand!" << endl;

            return playing = false;
        }
    }

    if (player <= 0)
    {
        cout << "The troll has defeated you! You lose!\n"
            "Would you like to play again? y or n \n" << endl;

        cin >> playagain;

        if (playagain == 'y')
        {
            player = 1000;
            enemy_health = 2000;

            return playing = true;
        }
        else if (playagain == 'n')
        {
            return playing = false;
        }
        else
        {
            cout << "I don't understand!" << endl;

            return playing = false;
        }
    }

    return false;
}


