#include <iostream>
#include <queue>

using namespace std;

void sortKSortedArray(int arr[], int n, int k)
{
    // Create a min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Build a min-heap with the first K+1 elements
    for (int i = 0; i <= k && i < n; i++)     // i < n for the case when k > n
    {
        minHeap.push(arr[i]);
    }

    int index = 0;

    // Process the remaining elements
    for (int i = k + 1; i < n; i++)
    {
        // arr[index++] help
        arr[index] = minHeap.top(); // Extract the top element from the min-heap
        index++;
        minHeap.pop();
        minHeap.push(arr[i]);
    }

    // Extract and place the remaining elements
    while (!minHeap.empty())
    {
        arr[index++] = minHeap.top();
        minHeap.pop();
    }
}

int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value of K: ";
    cin >> k;

    sortKSortedArray(arr, n, k);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
