#include <iostream>
using namespace std;

int main()
{
    int count;
    
    cout << "Enter a number? " << endl;
    cin >> count;

    for(int i = 1; i < count; i++)
    {
        cout << i << endl;

        if (i % 2 == 0)
        {
            cout << "is an even number" << endl;
        }
        else
        {
            cout << "is an odd number" << endl;
        }
    }

    cin.get();
    return 0;
}