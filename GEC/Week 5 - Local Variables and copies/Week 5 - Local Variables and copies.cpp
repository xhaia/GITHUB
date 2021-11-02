#include <iostream>
using namespace std;

void addTwo(int num)
{
    num += 2;
    cout << "Function: num = " << num << endl;
}

int main()
{
    int myNum = 6;

    cout << "MAIN [before]: myNum = " << myNum << endl;

    addTwo(myNum);

    cout << "Main [after]: myNum = " << myNum << endl;
}
