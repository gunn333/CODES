#include <iostream>
using namespace std;

int main()
{
    int rows;
    int cols;
    char symbol;
    cout << "Enter number of rows -> "; //How many rows
    cin >> rows;
    cout << "Enter number of columns -> "; //How many columns
    cin >> cols;
    cout << "Enter symbol -> "; //What symbol to use
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << symbol << ' ';
        }
        cout << endl;
    }
    return 0;
}
//! Nested Loop
/*
Loop inside a loop is called nested loop
nested loop is used to print patterns
*/
