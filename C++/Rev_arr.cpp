#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
// Alternative Method:
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;             //Taking input of size of array
    int arr[n];
    cout<<"Enter Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];         //Taking input of array elements
    }
    cout<<"\n";
    int start=0;
    int end=n-1;
    while(start<end){           //Swaping start and end elements
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";        //Printing the reversed array
    }
    return 0;
}
*/
