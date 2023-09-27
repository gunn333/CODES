//! Typecast String to Int
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a number: ";
    cin >> str;
    int num = stoi(str);
    cout << "The number you entered is: " << num << endl;
    cout << sizeof(num) << " " << sizeof(str);
    return 0;
}

//!