#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0 , end = n-1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}

void reverseKTimes(int arr[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        reverseArray(arr, n);
    }
}

int main()
{
    int n;
    cout << "Enter n of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n";
    int k;
    cout << "Enter k: ";
    cin >> k;
    reverseKTimes(arr,n,k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
