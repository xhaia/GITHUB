#include <iostream>
using namespace std;
void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
    int num1;
    int num2;
    int* n1 = 0;
    int* n2 = 0;
    int* pnum = &num1;
    
    inputDetails(n1, n2);

    outputDetails(num1, num2, pnum);
}

void inputDetails(int* n1, int* n2)
{
    int num1;
    int num2;

    cout << "Please enter an integer! " << endl;
    cin >> num1;
    
    n1 = new int;
    *n1 = num1;

    cout << "Please enter another integer! " << endl;
    cin >> num2;
    
    n2 = new int;
    *n2 = num2;

    cout << *n1 << endl;
    cout << *n2 << endl;

    return;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
    cout << "Num1 = " << integer1 << endl;
    cout << "Num1 address = " << &integer1 << endl;
    cout << "Num2 = " << integer2 << endl;
    cout << "Num2 address = " << &integer2 << endl;
    cout << "pNum = " << pointer << endl;
    cout << "pNum address = " << &pointer << endl;
}