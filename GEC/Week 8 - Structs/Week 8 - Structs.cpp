#include <iostream>
#include <string>
using namespace std;

void printdetails(string name, int age, string telephone);

int main()
{
    struct Details
    {
        string name;
        int age;
        string telephone;
    }personDetails;

    int int1;
    string Name;
    string Telephone;

    cout << "Please enter your name" << endl;
    getline(cin, Name);
    personDetails.name = Name;

    cout << "Please enter your telephone number" << endl;
    getline(cin, Telephone);
    personDetails.telephone = Telephone;

    cout << "Please enter your age" << endl;
    cin >> int1;
    personDetails.age = int1;


    printdetails(personDetails.name, personDetails.age, personDetails.telephone);
}

void printdetails(string name, int age, string telephone)
{
    cout << "Your name is: " << name << endl;
    cout << "Your age is: " << age << endl;
    cout << "Your phone number is: " << telephone << endl;
}
