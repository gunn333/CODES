//! All numbers except 1 number occurs twice find that number

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    cout<<"The number that occurs once is: "<<ans<<endl;
    delete[] arr;
    return 0;
}