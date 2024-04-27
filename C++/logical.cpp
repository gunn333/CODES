#include<iostream>
using namespace std;
int main(){
    int temp;
    bool sunny = true;
    cout << "Enter the temperature -> ";
    cin >> temp;
    if(temp > 30){
        cout << "It's hot" << endl;
    }
    else if(temp < 10){
        cout << "It's cold" << endl;
    }
    else{
        cout << "It's moderate" << endl;
    }
    if (sunny)  // same as if(sunny == true)
    {
        cout << "It's sunny" << endl;
    }
    else{
        cout << "It's not sunny" << endl;
    }
    return 0;
}