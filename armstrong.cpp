#include <iostream>
using namespace std;
void checkArmstrong(int n)
{
    int temp, digit, sum = 0;
    temp=n;
    while (temp>0)
    {
        digit=temp%10;
        sum=sum + (digit * digit * digit);
        temp=temp / 10;
    }
    if (sum==n)
        cout<<"The given number is an Armstrong number";
    else
        cout<<"The given number is NOT an Armstrong number";
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    checkArmstrong(num);
    return 0;
}