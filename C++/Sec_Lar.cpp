#include <iostream>
#include <climits>

using namespace std;

void Bubblesort(int arr[], int n){
    for(int i =0; i<n-1; i++){
        for(int j =0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    int arr[n];
    cin >> n;
    int largest, secondLargest;

    cout << "Enter elements of array: ";
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    Bubblesort(arr, n);
    largest = arr[n-1];
    cout << "Largest: " << largest << endl;
    secondLargest = arr[n-2];
    cout << "Second Largest: " << secondLargest << endl;
    return 0;
}
