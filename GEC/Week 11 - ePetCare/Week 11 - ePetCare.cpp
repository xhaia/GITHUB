#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"
using namespace std;

int main()
{
    Pet* pet;
    int choice;

    cout << "What animal would you like? 1. Cat 2.Dog 3.Hamster\n" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        pet = new Cat();

    case 2:
        pet = new Dog();

    case 3:
        pet = new Hamster;
    }

    pet->Talk();

    while (true)
    {
        int choice1;
        cout << "What would you like to do:\n[0]Quit\n[1]Listen to pet\n[2]Feed pet\n[3]Play with pet\n" << endl;
        cin >> choice1;

        switch (choice1)
        {
        case 0:
            cout << "Quitting" << endl;
            break;

        case 1:
            pet->Talk();

        case 2:
            pet->Feed();

        case 3:
            pet->Play();
        }
    }
}
