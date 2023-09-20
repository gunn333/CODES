#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){            
            return i;
            }
        }
        return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout<<endl;
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    int index = linearsearch(arr, n, key);
    if (index != -1) {
        cout << "The element exists at index " << index << endl;
    } else {
        cout << "The element does not exist in the array" << endl;
    }
    return 0;
}