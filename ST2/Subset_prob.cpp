
#include <bits/stdc++.h>
using namespace std;
static int counter = 0;
void toPrint(vector<int> &arr, int i, int target, vector<int> &subset)
{
    if (target == 0)
    {
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << " ";
        counter++;
        return;
    }
    if (i >= arr.size() || target < 0)
        return;
    subset.push_back(arr[i]);
    toPrint(arr, i + 1, target - arr[i], subset);
    subset.pop_back();
    toPrint(arr, i + 1, target, subset);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    vector<int> subset;
    toPrint(arr, 0, target, subset);
    cout << endl;
    cout << counter;
    return 0;
}