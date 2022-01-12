#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
void comma2blank(char* textToChange);

int main()
{
    char* textToChange = new char;

    cout << "Enter a sentence! (commas instead of spaces) " << endl;
    cin.getline(textToChange, 100);

    cout << "\nBefore change: " << endl;
    cout << textToChange << endl;

    comma2blank(textToChange);

    cout << "\nAfter change: " << endl;
    cout << &textToChange << endl;

    return 0;
}

void comma2blank(char* textToChange)
{
    string ptextToChange;

    cout << *textToChange << endl;
    getline(cin, ptextToChange);

    replace(ptextToChange.begin(), ptextToChange.end(), ',', ' ');

    cout << ptextToChange << endl;
    cin.getline(textToChange, 100);

    textToChange;
    return;
}