//! kth largest element in an array

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    vector<int> arr(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<"The kth largest element is "<<arr[n-k]<<endl;
}