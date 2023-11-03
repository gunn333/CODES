#include<iostream>
#include<climits>
using namespace std;
int main(){

    //Step 1: Input the matrix
    int n;
    cin>>n; //Number of rows
    int m;
    cin>>m; //Number of columns
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    //Step 2: Define Max_sum and col_index
    int max_sum = INT_MIN;
    int col_index = -1;


    for(int i =0; i<m; i++){
        int sum = 0;
        for(int j=0; j<n; j++){  
            sum += matrix[j][i];
        }
        if(sum > max_sum){
            max_sum = sum;
            col_index = i;
        }
    }
    cout<<"Column index: "<<col_index+1<<endl;
    cout<<"Maximum sum: "<<max_sum<<endl;
    return 0;
}
