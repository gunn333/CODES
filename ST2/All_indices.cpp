// #include <iostream>
// using namespace std;
// void print(int arr[], int i, int n, int target)
// {
//     if (i == n)
//         return;
//     if (arr[i] == target)
//         cout << i << " ";
//     print(arr, i + 1, n, target);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     int target;
//     cin >> target;
//     print(arr, 0, n, target);
//     return 0;
// }

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
