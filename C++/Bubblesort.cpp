#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // n-1 because last element is already sorted after first iteration
        for (int j = 0; j < n - i - 1; j++)
        { // n-i-1 because last element is already sorted after first iteration
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n";
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    bubbleSort(arr, n);
    cout << "\n"
         << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
