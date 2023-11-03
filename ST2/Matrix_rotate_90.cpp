#include <iostream>
using namespace std;

void rotateImage(int matrix[100][100], int &n, int &m)
{
    int result[100][100];

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }

    // Update dimensions
    swap(n, m);

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m / 2; j++)
        { // j < m / 2 because we only need to swap the first half of the row
            swap(result[i][j], result[i][m - j - 1]);
        }
    }

    // Copy the result back to the original matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = result[i][j];
        }
    }
}

void printImage(int matrix[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;

    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Enter the number of columns: ";
    cin >> m;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Image:" << endl;
    printImage(matrix, n, m);

    rotateImage(matrix, n, m);

    cout << "Rotated Image (90 degrees clockwise):" << endl;
    printImage(matrix, n, m);

    return 0;
}
