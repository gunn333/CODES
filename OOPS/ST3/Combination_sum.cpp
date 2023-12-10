#include <bits/stdc++.h>
using namespace std;
void toPrint(vector<int> &arr, int idx, int target, vector<int> &subset)
{
    if (target == 0)
    {
        for (int i = 0; i < subset.size(); i++)
        {
            cout << subset[i] << " ";
        }
        cout << " ";
        return;
    }

    if (idx >= arr.size() || target < 0)
        return;
    for (int i = idx; i < arr.size(); i++)
    {
        if (i > idx && arr[i] == arr[i - 1])
            continue;
        subset.push_back(arr[i]);
        toPrint(arr, i + 1, target - arr[i], subset);
        subset.pop_back();
    }
}
int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> subset;

    toPrint(arr, 0, target, subset);

    return 0;
}