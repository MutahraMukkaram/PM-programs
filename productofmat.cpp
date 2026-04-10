#include <iostream>
using namespace std;

void multiplyMatrices(int r1, int c1, int mat1[][10], int r2, int c2, int mat2[][10])
{
    int result[10][10] = {0};
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "Multiplication of matrices:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int r1, c1, r2, c2;
    int mat1[10][10], mat2[10][10];

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> mat1[i][j];

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> mat2[i][j];

    multiplyMatrices(r1, c1, mat1, r2, c2, mat2);

    return 0;
}