
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    cout << "Indices of elements matching the target value " << target << ": ";
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << "No matching elements found.";
    }

    return 0;
}
