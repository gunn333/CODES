/*
Suppose Teacher gives u files of checked answer sheets of students and u have to find the answer sheet of a particular student.
And these sheets are arranged in ascending order of roll numbers.
So, u will not start from the first sheet and compare the roll number of that sheet with the roll number of the student whose sheet u have to find.
Instead u will start from the middle sheet and compare the roll number of that sheet with the roll number of the student whose sheet u have to find.
If the roll number of that sheet is equal to the roll number of the student whose sheet u have to find then u will return the index of that sheet.
Else if the roll number of that sheet is greater than the roll number of the student whose sheet u have to find then u will move to the left side of the middle sheet.
Else if the roll number of that sheet is less than the roll number of the student whose sheet u have to find then u will move to the right side of the middle sheet.
*/
/*
Elements of array should be in sorted order.
find mid element of array and compare it with key.
if mid element is equal to key then return mid.
else if mid element is greater than key then move to left side of mid.
else if mid element is less than key then move to right side of mid.
right side mein stating index change hogi and left side mein ending index change hogi.
*/
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int s = 0;     // Starting index
    int e = n - 1; // Ending index
    while (s <= e) // agar s e se aage chala gaya toh array mein element nahi hai
    {
        int mid = (s + e) / 2; // Mid index
        // Compare mid element with key
        if (arr[mid] == key)
        {
            return mid; // mid index
        }
        else if (arr[mid] > key) // ismein ending index change hogi
        {
            e = mid - 1; // Move to left side of mid
        }
        else
        {
            s = mid + 1; // Move to right side of mid
        }
    }
    return -1; // Element not found
}
int main()
{
    int n;
    cin >> n;                   // Size of array
    int arr[n];                 // Array declaration
    for (int i = 0; i < n; i++) // Array input
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;                                            // Element to be searched
    cout << "Index of Key: " << BinarySearch(arr, n, key); // Function call
    return 0;
}