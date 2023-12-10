#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array1: ";
    cin >> n;
    int m;
    cout << "Enter the size of array2: ";
    cin >> m;
    int *arr1 = new int[n];
    int *arr2 = new int[m];
    cout << "Enter the elements of array1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of array2: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int *arr3 = new int[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) // i is for arr1, j is for arr2, k is for arr3
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    cout << "The merged array is: ";
    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    return 0;
}
/*

>> Input 2 arrays
>> arr3 created with size of arr1 + arr2
>>> while i < n and j < m
>> if arr1[i] < arr2[j]
> arr3[k] = arr1[i]
>> merged arr print
*/