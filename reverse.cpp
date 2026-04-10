#include <iostream>
using namespace std;

void printReverse(int n)
{
    int digit;

    cout << "Digits in reverse order: ";
    while (n > 0)
    {
        digit = n % 10;   // Get last digit
        cout << digit << " ";  
        n = n / 10;       // Remove last digit
    }
}

int main()
{
    int num;
    cout << "Enter an integer number: ";
    cin >> num;
    printReverse(num);
    return 0;
}