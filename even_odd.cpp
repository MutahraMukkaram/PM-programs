#include <iostream>
using namespace std;

void printEven()
{
    int i;
    cout << "Even numbers from 1 to 100 are:" << endl;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }
}

void printOdd()
{
    int i;
    cout << "Odd numbers from 1 to 100 are:" << endl;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
            cout << i << " ";
    }
}

int main()
{
    int choice;

    cout << "1. Even Series" << endl;
    cout << "2. Odd Series" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            printEven();
            break;

        case 2:
            printOdd();
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}