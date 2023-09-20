/*
Find the minimum element in an array
and swap it with the element at the beginning
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n; // Taking input of size of array
    int arr[n];
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Taking input of array elements
    }
    cout << "\n";

    //~Selection Sort
    // We are supposing that first element (i) is minimum
    for (int i = 0; i < n - 1; i++) // i is minimum index
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}