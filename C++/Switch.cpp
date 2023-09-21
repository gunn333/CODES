#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int b;
    cout << "Enter another number: ";
    cin >> b;
    switch (a + b)
    {
    case 1:
        cout << "Sum is 1" << endl;
        break;
    case 2:
        cout << "Sum is 2" << endl;
        break;
    case 3:
        cout << "Sum is 3" << endl;
        break;
        return 0;
    }
}
//! Switch Statement
/*
case can be integer, character, constant expression or enumeration constant
case can not be variable , string or floating point number
case can not be duplicate
case can not be empty  ex: case :  //wrong
case can not be range   ex: case 1-5:  //wrong
case can not be expression  ex: case a+b:  //wrong
while(1) is used to run the program infinitely
while infinite loop mein switch statement ke bahar niklne ke liye exit(0) use karna padta hai
Continue cannot be used in switch statement
*/