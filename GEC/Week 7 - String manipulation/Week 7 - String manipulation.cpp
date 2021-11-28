#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;

int main()
{
    string testString = "Do you know who loves C++ XX does!";
    string name;
    string name2;

    cout << "Please enter your name!" << endl;
    getline(cin, name);

    testString.insert(27, name, 0, name.length());
    cout << testString << endl;

    replace(testString.begin(), testString.end(), 'X', ' ');

    cout << testString << endl;

    while (name > name2)
    {
        cout << "Please enter another name!" << endl;
        getline(cin, name2);
    }

    string output = regex_replace(testString, regex(name), name2);

    cout << output << endl;

}
