//! Find Unique element in array

#include <iostream>
using namespace std;
int Uniqueele(int arr[],int n){
    for(int i = 0; i < n; i++){
        int j;
        for(j = 0; j < n; j++){  //j loop is used to check if there is any duplicate element in array
            if(i != j && arr[i] == arr[j]){
                break;
            }
        }
        if(j == n){
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Uniqueele(arr,n);

    return 0;
}