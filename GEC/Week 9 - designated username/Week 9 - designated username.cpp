#include <iostream>
#include <ctime>
#include <string>
using namespace std;
void username(string name);

int main()
{
    string name;

    cout << "Enter a username" << endl;
    getline(cin, name);

    cout << "Your username is taken!" << endl;

    username(name);
}

void username(string name)
{
    string firstname;
    string number;
    srand(time(NULL));
    int num = rand();

    cout << "Your username is: " << name << num << endl;

    return;
}