
#include <bits/stdc++.h>
using namespace std;
static int counter = 0;
void split(vector<int> &arr, int i, int s1, int s2, vector<int> &g1, vector<int> &g2)
{
    if (i == arr.size())
    {
        if (s1 == s2)
        {
            for (int n : g1)
                cout << n << " ";
            cout << "and ";
            for (int n : g2)
                cout << n << " ";
            cout << endl;
            counter++;
        }
        return;
    }
    g1.push_back(arr[i]);   
    split(arr, i + 1, s1 + arr[i], s2, g1, g2);
    g1.pop_back();
    g2.push_back(arr[i]);
    split(arr, i + 1, s1, s2 + arr[i], g1, g2);
    g2.pop_back();
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
    vector<int> g1, g2;
    split(arr, 0, 0, 0, g1, g2);
    cout << counter << " ";
    return 0;
}