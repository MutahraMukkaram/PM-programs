#include <iostream>
using namespace std;

void addMatrices(int m, int n, int mat1[][10], int mat2[][10])
{
    int sum[10][10];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    int mat1[10][10], mat2[10][10];
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat2[i][j];
        }
    }
    addMatrices(m, n, mat1, mat2);
    return 0;
}