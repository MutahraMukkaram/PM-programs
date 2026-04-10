#include <iostream>
using namespace std;
void printPyramid()
{
    int i,j;

    for (i=1;i <= 4;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    printPyramid();
    return 0;
}