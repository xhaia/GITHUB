#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string user;
    int userscore = 0;
    int userneed = 3;
    int computerscore = 0;
    int computerneed = 3;

    do
    {
        cout << "Enter your selection" << endl;
        getline(cin, user);

        srand(time(NULL));
        string computerchoice[3] = { "rock", "paper", "scissors" };
        int randindex = rand() % 3;
        bool winner;

        cout << "You chose: " << user << endl;
        cout << "The computer chose: " << computerchoice[randindex] << endl;

        if (user == "rock")
        {
            if (computerchoice[randindex] == "rock")
            {
                cout << "It was a draw!" << endl;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "The computer score is: " << computerscore << endl;
                cout << "**********************************" << endl;
            }
            if (computerchoice[randindex] == "paper")
            {
                cout << "Sorry! The computer won" << endl;
                computerscore = computerscore + 1;
                computerneed = computerneed - 1;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "The computer score is: " << computerscore << endl;
                cout << "**********************************" << endl;
            }
            if (computerchoice[randindex] == "scissors")
            {
                cout << "Congratulations! You win" << endl;
                userscore = userscore + 1;
                userneed  = userneed - 1;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "The computer score is: " << computerscore << endl;
                cout << "**********************************" << endl;
            }
        }

        if (user == "paper")
        {
            if (computerchoice[randindex] == "rock")
            {
                cout << "Congratulations! You win" << endl;
                userscore = userscore + 1;
                userneed = userneed - 1;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "**********************************" << endl;
            }
            if (computerchoice[randindex] == "paper")
            {
                cout << "It was a draw!" << endl;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "**********************************" << endl;
            }
            if (computerchoice[randindex] == "scissors")
            {
                cout << "Sorry! The computer won" << endl;
                computerscore = computerscore + 1;
                computerneed = computerneed - 1;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "**********************************" << endl;
            }
        }

        if (user == "scissors")
        {
            if (computerchoice[randindex] == "rock")
            {
                cout << "Sorry! The computer won" << endl;
                computerscore = computerscore + 1;
                computerneed = computerneed - 1;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "**********************************" << endl;
            }
            if (computerchoice[randindex] == "paper")
            {
                cout << "Congratulations! You win" << endl;
                userscore = userscore + 1;
                userneed = userneed - 1;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "**********************************" << endl;
            }
            if (computerchoice[randindex] == "scissors")
            {
                cout << "It was a draw!" << endl;
                cout << "You need: " << userneed << " To win" << endl;
                cout << "The computer needs: " << computerneed << " To win" << endl;
                cout << "**********************************" << endl;
            }
        }
    } while (userscore != 3 && computerscore != 3);


        if (userscore == 3)
        {
            cout << "You win" << endl;
            cout << "Game over" << endl;
            return 0;
        }

        if (computerscore == 3)
        {
            cout << "You lose" << endl;
            cout << "Game over" << endl;
            return 0;
        }
}
