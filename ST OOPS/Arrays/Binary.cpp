#include<iostream>
using namespace std;
int binarysearch(int arr[],int n , int key){
    int si = 0;
    int ei = n-1;
    while(si<=ei){
        int mid = (si+ei)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            ei = mid -1;
        }
        else{
            si = mid + 1;
        }
    }
    return -1;
}


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
    int key;
    cin >> key;
    cout << binarysearch(arr,n,key);

}