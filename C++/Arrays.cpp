#include <iostream>
using namespace std;
int main()
{
    /*
    Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    Values are stored in contiguous memory locations.
    Values are accessed using index number.
    kind of like a variable that holds multiple values
    collection of similar data types
    */
    /*
     /// declaring an array without user input
     int array[5] = {1, 2, 3, 4, 5};
     cout << array[3] << endl; // 4
    */
    //! User input array
    // Initializing Size of array
    int n; // size of array
    cin >> n;
    // Declaring array
    int array[n];
    // Taking input from user
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // Printing array
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}