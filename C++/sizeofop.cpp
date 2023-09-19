#include <iostream>
using namespace std;
int main()
{
    /*
    Size of operator determines size of a variable or data type in bytes.
    */
    double a;
    cout << "Size of double = " << sizeof(a) << endl;
    /*
    Size of double = 8
    Size of string does not depend on the length of the string.
    size of char = 1
    size of int = 4
    size of float = 4
    size of bool = 1
    size of array = number of elements * size of each element
    Number of elements in an array = sizeof(array) / sizeof(array[0])
    */
    return 0;
}