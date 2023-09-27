// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Element counts in the array:" << endl;

//     for (int i = 0; i < n; i++) // Loop through each element
//     {
//         int count = 1; // Initialize count for the current element

//         for (int j = i + 1; j < n; j++) // Loop through the rest of elements
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }

//         // Print the element and its count if not already printed
//         bool printed = false;
//         for (int J = 0; J < i; J++) // Loop through the elements before the current element
//         {
//             if (arr[i] == arr[J])
//             {
//                 printed = true;
//                 break;
//             }
//         }

//         if (!printed)
//         {
//             cout << arr[i] << ": " << count << " times" << endl;
//         }
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7,2,4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++) {
//         int count = 1; // Initialize count to 1 for the current element
//         bool isDuplicate = false;

//         // Check if the current element is a duplicate of a previous element
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 isDuplicate = true;
//                 break;
//             }
//         }

//         // If it's not a duplicate, count its occurrences in the rest of the array
//         if (!isDuplicate) {    //isDuplicate == false
//             for (int k = i + 1; k < n; k++) {
//                 if (arr[i] == arr[k]) {
//                     count++;
//                 }
//             }
//             cout << "Element " << arr[i] << " occurs " << count << " times." << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int counts[100] = {0}; // Assuming a range of values from 0 to 99

    for (int i = 0; i < n; i++)
    {
        counts[arr[i]]++;
    }

    cout << "Element : Occurrence" << endl;
    for (int i = 0; i < 100; i++)
    {
        if (counts[i] > 0)
        {
            cout << i << " : " << counts[i] << endl;
        }
    }

    return 0;
}
