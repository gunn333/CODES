//! Find Unique element in array
/*
#include <iostream>
using namespace std;
int Uniqueele(int arr[],int n){
    cout << "Unique elements in the array: ";

    for (int i = 0; i < n; ++i) {
        bool isUnique = true;

        // Check if the current element is repeated later in the array
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        // If the element is unique, print it
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Uniqueele(arr,n);

    return 0;
}
*/
// Alternative method
#include <iostream>
using namespace std;

int uniqueele(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << uniqueele(arr, n);
    return 0;
}
