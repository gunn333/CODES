#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    /*
    Maximum OR Minimum calculate krne ke liye hum har value ko max/min element se compare karenge
    jaha pe hamein current max jada mil jaega vaha maximum element ko update karenge
    */
    int maxNo = INT_MIN; // Can ititialize arr[o] also
    // INT_MIN is a macro jo minimum integer possible hota hai us value ko store karta hai
    int minNo = INT_MAX;
    // INT_MAX is a macro jo maximum integer possible hota hai us value ko store karta hai
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNo)
        {
            // maxNo = arr[i];
            maxNo = max(maxNo, arr[i]); // both are same
        }
        if (arr[i] < minNo)
        {
            // minNo = arr[i];
            minNo = min(minNo, arr[i]);
        }
    }
    cout << "Maximum Number is: " << maxNo << endl;
    cout << "Minimum Number is: " << minNo << endl;
    return 0;
}