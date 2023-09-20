#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    arr[0] = 100;
    cout << "Printed inside function" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[3] = {10, 20, 30};
    cout << arr << endl;        // address of first element
    cout << *arr << endl;       // value of first element
    cout << arr + 1 << endl;    // address of second element
    cout << *(arr + 1) << endl; // value of second element
    update(arr, 3);
    /*
    update(arr, 3); mein arr ka address pass hua hai and arr is base address of array
    aur ismein aap kuch bhi change karoge toh woh change main function mein bhi reflect hoga
    */
    cout << endl
         << "Printed inside main" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
