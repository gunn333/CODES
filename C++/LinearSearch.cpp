/*
Array aur key de rakhi hai aur hume uss key ko find krna hai array mein
and if that key is present in the array then return the index of that key else return -1
pehle vale element se compare krna hai key ko and if it is equal to that key then return the index of that key else move on to next element
*/
#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // i is the index of that key
        }
    }
    // agar pure for loop mein nahi mila key toh return -1
    return -1;
}
int main()
{
    int n; // Size of array
    cin >> n;
    int arr[n]; // array declaration
    for (int i = 0; i < n; i++)
    { /// Array input
        cin >> arr[i];
    }
    int key; /// Key input
    cout << "Enter the key: ";
    cin >> key;
    cout << "Index of key: " << LinearSearch(arr, n, key) << endl;
}
