#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age -> ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult" << endl;
    }
    else if (age == 17)
    {
        cout << "You are almost an adult" << endl;
    }
    else if (age <= 0)
    {
        cout << "You are not born yet" << endl;
    }
    else
    {
        cout << "You are not an adult" << endl;
    }
    return 0;
}
//! IF statement
/*
do something if a condition is true
if not then don't do it
*/

//! Switch statement
/*
alternative to if statement
compares a variable to multiple values
*/

//! Ternary operator
/*
alternative to if statement
variable = (condition) ? true : false;
? is for if
: is for else
*/

//! Logical operators
/*
&& -> and
|| -> or
! -> not
*/
