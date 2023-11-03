#include<iostream>
using namespace std;

int Stairjump(int n, int m){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int res = 0;
    for(int i=1; i<=m; i++){
        res += Stairjump(n-i, m);
    }
    return res;
}

int main(){
    int n; // Number of stairs
    int m; // Number of steps that can be taken at a time
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Enter the number of steps that can be taken at a time: ";
    cin >> m;
    cout << "\n Ways to climb the stairs: " << Stairjump(n, m) << endl;
}