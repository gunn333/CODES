#include<iostream>
using namespace std;

int t05(int n){
    if(n == 0){
        return 0;
    }
    int digit = n % 10; // gives the last digit
    if(digit == 0){
        digit = 5;
    }
    return t05(n/10) * 10 + digit; // n/10 gives the number without the last digit
}

int main(){
    int n;
    cin >> n;
    if(n == 0){
        return 5;
    }
    else{
        cout << t05(n);
    }
    return 0;
}