#include <iostream>
using namespace std;
int main()
{
    int students = 20;
    // students = students + 1;
    students += 1; // students = students + 1
    // students++ only add 1
    cout << students << endl;
    int remainder = 9 % 3;
    cout << remainder << endl; // 0
    remainder = 10 % 3;
    cout << remainder << endl; // 1

    int x = 6 - 5 + 4 * 3 / 2;
    cout << x << endl; // 7
    return 0;
}
//! Operators
/*
Arithmetic Operators = +, -, *, /, %, ++, --
Relational Operators = ==, !=, >, <, >=, <=
Logical Operators = &&, ||, !
Bitwise Operators = &, |, ^, ~, <<, >>
Assignment Operators = =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
Misc Operators = sizeof(), Condition ? X : Y, Comma , , Cast, & (address of), * (pointer to)
*/
//! Arithmetic Operators
/*
return the result of specific arithmetic operations
*/
//! Precedence of Arithmetic Operators
/*
1. ()
2. ++, --
3. *, /, %
4. +, -
*/