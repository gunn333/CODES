#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;

    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    int res = 0;
    for(int i =0; i<n; i++){
        res = res ^ arr[i];
    }
    cout << "Unmatched sock: ";
    cout << res << endl;
    return 0;
}