// Purpose: To check if an array is a subset of another array or not
#include <iostream>
using namespace std;

bool isSubset(int arr1[], int arr2[], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < m; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            return false;
        }
    }
    return true;   //Return true if all elements of arr2[] are present in arr1[]
}

int main()
{
    int m, n;
    cout << "Enter the number of elements in arr1: ";
    cin >> m;
    int *arr1 = new int[m]; // Dynamic allocation of memory
    cout << "Enter the elements of arr1: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in arr2: ";
    cin >> n;

    int *arr2 = new int[n];
    cout << "Enter the elements of arr2: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    if (isSubset(arr1, arr2, m, n))
    {
        cout << "arr2[] is a subset of arr1[] " << endl;
    }
    else
    {
        cout << "arr2[] is not a subset of arr1[] " << endl;
    }

    delete[] arr1; // Free the memory allocated to arr1 to prevent memory leak
    delete[] arr2;

    return 0;
}
