#include <iostream>
using namespace std;
int main(){
    int arr[100][100],b[100][100],c[100][100],r1,r2,c1,c2,i,j,k;

    //Input the rows and columns of the matrix 1 and 2
    cout<<"input rows and col of first matrix"<<endl;
    cin>>r1>>c1;
    
    cout<<"input rows and col of second matrix"<<endl;
    cin>>r2>>c2;
    
    if(c1!=r2){
        cout<<"multiplication is not possible";
    }


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
    //Multiplication Matrix
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){  
                c[i][j]+=arr[i][k]*b[k][j];
            }
        }
    }
    cout<<"after multiplication"<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

}