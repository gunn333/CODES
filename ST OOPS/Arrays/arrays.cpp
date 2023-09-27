#include<iostream>
using namespace std;
int main(){
    int n; //size of array
    cin >> n;
    int arr[n]; //declaration of array
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    for(int i =0; i<n ;i++){
        cout << arr[i] << " ";
    }
}