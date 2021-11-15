#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
using std::setw;


int main()
{
    int Numbers[5], i, j, hold;
    int largest;

    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter a number? " << endl;
        cin >> Numbers[i];
    }

    int n = sizeof(Numbers) / sizeof(Numbers[0]);
    sort(Numbers, Numbers + n);

    cout << "Ascending \n" << endl;
    for (int i = 0; i < 5; i++)
        cout << Numbers[i] << endl;

    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (Numbers[i] < Numbers[j])
            {
                hold = Numbers[i];
                Numbers[i] = Numbers[j];
                Numbers[j] = hold;
            }
        }
    }

    cout << "\nDescending \n";
    for (i = 0; i < 5; i++)
        cout << Numbers[i] << endl;

    largest = Numbers[0];
    for (int i = 1; i < n; i++) {
        if (largest < Numbers[i])
            largest = Numbers[i];
    }
    cout << "\nLargest element in array is: " << largest;
    return 0;
}
