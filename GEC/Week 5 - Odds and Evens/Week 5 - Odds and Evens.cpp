#include <iostream>
using namespace std;

void outPutResults(int numOfOdd, int oddTotal, int numOfEven, int EvenTotal)
{
    cout << "The number of odd added is: " << numOfOdd << endl;
    cout << "The odd Total is: " << oddTotal << endl;
    cout << "The number of even numbers added is: " << numOfEven << endl;
    cout << "The even Total is: " << EvenTotal << endl;
}

int OddOREven(int a)
{   
        int numOfOdd = 0;
        int oddTotal = 0;
        int numOfEven = 0;
        int evenTotal = 0;
        bool isodd = false;

        if (a % 2 == 0)
        {
            cout << a << " is even!" << endl;
            bool isodd = false;
        }
        else
        {
            cout << a << " is odd" << endl;
            bool isodd = true;
        }


        if (bool isodd = false)
        {
            numOfEven = a;
            evenTotal = (evenTotal + numOfEven);
            cout << "Even number is: " << numOfEven << endl;
            cout << "Even total is: " << evenTotal << endl;
        }
        else if (bool isodd = true)
        {
            numOfOdd = a;
            oddTotal = (oddTotal + numOfOdd);
            cout << "odd number is: " << numOfOdd << endl;
            cout << "odd total is: " << oddTotal << endl;
        }

        outPutResults(numOfOdd, oddTotal, numOfEven, evenTotal);

        return numOfEven;
        return oddTotal;
        return numOfEven;
        return evenTotal;
}

int main()
{
    int Num1;
    int Num2;
    int Num3;
    int Num4;
    int Num5;
    int Num6;
    int Num7;
    int Num8;
    int Num9;
    int Num10;

    cout << "[1] Please enter a number: " << endl;
    cin >> Num1;
    OddOREven(Num1);

    cout << "[2] Please enter a number: " << endl;
    cin >> Num2;
    OddOREven(Num2);

    cout << "[3] Please enter a number: " << endl;
    cin >> Num3;
    OddOREven(Num3);

    cout << "[4] Please enter a number: " << endl;
    cin >> Num4;
    OddOREven(Num4);

    cout << "[5] Please enter a number: " << endl;
    cin >> Num5;
    OddOREven(Num5);

    cout << "[6] Please enter a number: " << endl;
    cin >> Num6;
    OddOREven(Num6);

    cout << "[7] Please enter a number: " << endl;
    cin >> Num7;
    OddOREven(Num7);

    cout << "[8] Please enter a number: " << endl;
    cin >> Num8;
    OddOREven(Num8);

    cout << "[9] Please enter a number: " << endl;
    cin >> Num9;
    OddOREven(Num9);

    cout << "[10] Please enter a number: " << endl;
    cin >> Num10;
    OddOREven(Num10);
}
