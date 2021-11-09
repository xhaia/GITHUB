#include <iostream>
using namespace std;
void outPutResults(int numOfOdd, int oddTotal, int numOfEven, int EvenTotal);
bool isEvenOrOdd(int num);

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
    int oddnum = 0;
    int oddtotal = 0;
    int evennum = 0;
    int eventotal = 0;
    bool iseven;

    cout << "[1] Please enter a number: " << endl;
    cin >> Num1;
    iseven = isEvenOrOdd(Num1);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + evennum;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num1;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);

    cout << "[2] Please enter a number: " << endl;
    cin >> Num2;

    iseven = isEvenOrOdd(Num2);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num2;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num2;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);

    cout << "[3] Please enter a number: " << endl;
    cin >> Num3;

    iseven = isEvenOrOdd(Num3);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num3;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num3;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);

    cout << "[4] Please enter a number: " << endl;
    cin >> Num4;

    iseven = isEvenOrOdd(Num4);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num4;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num4;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);

    cout << "[5] Please enter a number: " << endl;
    cin >> Num5;

    iseven = isEvenOrOdd(Num5);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num5;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num5;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);


    cout << "[6] Please enter a number: " << endl;
    cin >> Num6;

    iseven = isEvenOrOdd(Num6);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num6;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num6;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);


    cout << "[7] Please enter a number: " << endl;
    cin >> Num7;

    iseven = isEvenOrOdd(Num7);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num7;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num7;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);


    cout << "[8] Please enter a number: " << endl;
    cin >> Num8;

    iseven = isEvenOrOdd(Num8);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num8;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num8;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);


    cout << "[9] Please enter a number: " << endl;
    cin >> Num9;

    iseven = isEvenOrOdd(Num9);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num9;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num9;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);


    cout << "[10] Please enter a number: " << endl;
    cin >> Num10;

    iseven = isEvenOrOdd(Num10);

    if (iseven)
    {
        cout << "The number is even" << endl;
        evennum = evennum + 1;
        eventotal = eventotal + Num10;
    }
    else
    {
        cout << "The number is odd" << endl;
        oddnum = oddnum + 1;
        oddtotal = oddtotal + Num10;
    }

    outPutResults(oddnum, oddtotal, evennum, eventotal);

}

bool isEvenOrOdd(int num) 
{
    bool even;

    if (num % 2 == 0)
    {
        even = true;
    }
    else
    {
        even = false;
    }

    return even;
}


void outPutResults(int numOfOdd, int oddTotal, int numOfEven, int EvenTotal)
{
    cout << "The number of odd added is: " << numOfOdd << endl;
    cout << "The odd Total is: " << oddTotal << endl;
    cout << "The number of even numbers added is: " << numOfEven << endl;
    cout << "The even Total is: " << EvenTotal << endl;
    cout << "\n" << endl;
}