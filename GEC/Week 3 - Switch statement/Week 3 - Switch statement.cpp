#include <iostream>
using namespace std;

int main()
{
    char play_again;

    cout << "Would you like to play again? y or n" << endl;

    cin >> play_again;

    switch (play_again)
    {
        case 'y':
            cout << "you chose to play again! " << endl;
            break;

        case 'n':
            cout << "goodbye" << endl;
            break;
        
        default:
            cout << "that's not y or n! " << endl;
            break;

            return 0;
    }
}

