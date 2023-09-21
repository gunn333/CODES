#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Element counts in the array:" << endl;

    for (int i = 0; i < n; i++) // Loop through each element
    {
        int count = 1; // Initialize count for the current element

        for (int j = i + 1; j < n; j++) // Loop through the rest of elements
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // Print the element and its count if not already printed
        bool printed = false;
        for (int k = 0; k < i; k++) // Loop through the elements before the current element
        {
            if (arr[i] == arr[k])
            {
                printed = true;
                break;
            }
        }

        if (!printed)
        {
            cout << arr[i] << ": " << count << " times" << endl;
        }
    }

    return 0;
}