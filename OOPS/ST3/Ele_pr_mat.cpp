#include <iostream>
using namespace std;

bool isElementPresent(int arr[100][100], int b[100][100],int c1, int r1, int c2, int target) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    for(int i=0;i<c1;i++){
        for(int j=0;j<c2;j++){
            if(b[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[100][100],b[100][100],r1,r2,c1,c2,i,j,k;

    //Input the rows and columns of the matrix 1 and 2
    cout<<"input rows and col of first matrix"<<endl;
    cin>>r1>>c1;
    
    cout<<"input rows and col of second matrix"<<endl;
    cin>>r2>>c2;
    
    cout<<"input values in first matrix"<<endl;
    for(i=0;i<r1;i++){  //i is the row number
        for(j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"the first matrix is"<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"input values in second matrix"<<endl;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }

    cout<<"the second matrix is"<<endl;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout << "Enter an element to check if it is present in the matrices: ";
    cin >> target;

    // Check if the element is present in the multiplied matrix
    if (isElementPresent(arr,b, r1, c1, c2, target)) {
        cout << "Element " << target << " is present in the matrix" << endl;
    } else {
        cout << "Element " << target << " is not present in the matrix." << endl;
    }
    }

