#include <iostream>
#include<iostream>
using namespace std;
void sortMarbles(int* marbles, int n) {
    int left = 0;  // Index of leftmost 0
    int right = n - 1;  // Index of rightmost n-1

    while (left < right) {   //because we are swapping the values of left and right, we need to make sure that left is always less than right
        while (marbles[left] == 0 ) {  //if the value at left is 0, we need to move left to the right
            left++;
        }
        while (marbles[right] == 1 ) {  //if the value at right is 1, we need to move right to the left
            right--;
        }

        if (left < right) {  
            swap(marbles[left], marbles[right]);
            left++;  
            right--;  
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of marbles: ";
    cin >> n;

    int* marbles = new int[n]; // Dynamic allocation of memory

    cout << "Enter the marbles (0 for red, 1 for blue): ";
    for (int i = 0; i < n; i++) {
        cin >> marbles[i];
    }

    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << marbles[i] << " ";
    }

    sortMarbles(marbles, n);

    cout << "\nOutput array: ";
    for (int i = 0; i < n; i++) {
        cout << marbles[i] << " ";
    }

    delete[] marbles;

    return 0;
}
