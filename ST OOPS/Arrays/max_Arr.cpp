#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i] > maxNo){
            maxNo = max(maxNo,arr[i]);
        }
        if (arr[i] < minNo){
            minNo = min(minNo,arr[i]);
        }
    
    }
    cout << maxNo << " " << minNo;
}