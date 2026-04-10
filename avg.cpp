#include <iostream>
using namespace std;
void findAverage(int a[], int n)
{
    int i;
    float sum=0, avg;
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum / n;
    cout<<"Average = "<<avg;
}
int main()
{
    int n, a[50];
    cout<<"Enter how many numbers: ";
    cin >> n;
    for (int i=0;i < n;i++)
    {
        cout<<"Enter number " <<i+1<<": ";
        cin>>a[i];
    }
    findAverage(a, n);
    return 0;
}