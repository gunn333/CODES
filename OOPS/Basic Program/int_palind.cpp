#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int temp = num;
    int rev = 0;
    while(temp>0){
        int last_digit = temp%10;
        rev = rev*10 + last_digit;
        temp = temp/10;
    }
    if(rev==num){
        cout<<"The number is a palindrome"<<endl;
    }
    else{
        cout<<"The number is not a palindrome"<<endl;
    }
    return 0;
}