#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Size of Array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n";
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of Array: " << sum;
    return 0;
}