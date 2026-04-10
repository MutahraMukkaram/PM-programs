#include <iostream>
using namespace std;
void swap(int &x, int &y);

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    swap(x, y);
    cout << "After swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0; // End of program
}

void swap(int &x, int &y)
{
    int z;      
    z = x;      
    x = y;      
    y = z;     
}
