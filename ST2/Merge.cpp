#include <iostream>
#include <algorithm>  // Include the algorithm library for std::merge
using namespace std;

int main() {
    int n, m;
    cout << "Enter the size of the first sorted array: ";
    cin >> n;
    int arr1[n];

    cout << "Enter elements of the first sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second sorted array: ";
    cin >> m;
    int arr2[m];

    cout << "Enter elements of the second sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int mergedArr[n + m];

    // Using std::merge to merge two sorted arrays
    std::merge(arr1, arr1 + n, arr2, arr2 + m, mergedArr);

    cout << "Merged sorted array:" << endl;
    for (int i = 0; i < n + m; i++) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}
