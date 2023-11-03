#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    cout << "Index of the first element matching the target value " << target << ": ";
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << i;
            found = true;
            break;  // Stop searching after the first match is found
        }
    }

    if (!found) {
        cout << "No matching element found.";
    }

    return 0;
}
