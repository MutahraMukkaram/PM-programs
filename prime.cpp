#include <iostream>
using namespace std;
void prime(int n)
{
    int i;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime number";
            return;
        }
    }

    cout << "Prime number";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    prime(n);   
    return 0;
}