#include <iostream>
using namespace std;

void callByValue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << "Inside Call by Value function:" << endl;
    cout << "x = " << x << " y = " << y << endl;
}

void callByReference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << "Inside Call by Reference function:" << endl;
    cout << "x = " << x << " y = " << y << endl;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before function call:" << endl;
    cout << "a = " << a << " b = " << b << endl;
    callByValue(a, b);
    cout << "After Call by Value:" << endl;
    cout << "a = " << a << " b = " << b << endl;
    callByReference(a, b);
    cout << "After Call by Reference:" << endl;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}